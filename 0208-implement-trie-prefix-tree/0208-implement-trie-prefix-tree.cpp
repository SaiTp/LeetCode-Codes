class Trie {
private:
    struct TrieNode {
        TrieNode* arr[26];
        bool end;
        
        TrieNode() {
            memset(arr, 0, sizeof(arr));
            end = false;
        }
    };
    
    TrieNode* root;
    
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string s) {
        TrieNode* curr = root;
        int c;
        for(int i = 0; i < s.length(); i++) {
            c = s[i] - 'a';
            if(curr->arr[c] == NULL) {
                curr->arr[c] = new TrieNode();
            }
            curr = curr->arr[c];
        }
        curr->end = true;
    }
    
    bool search(string s) {
        TrieNode* curr = root;
        int c;
        for(int i = 0; i < s.length(); i++) {
            c = s[i] - 'a';
            if(curr->arr[c] == NULL) {
                return false;
            }
            curr = curr->arr[c];
        }
        return curr->end;
    }
    
    bool startsWith(string s) {
        TrieNode* curr = root;
        int c;
        for(int i = 0; i < s.length(); i++) {
            c = s[i] - 'a';
            if(curr->arr[c] == NULL) {
                return false;
            }
            curr = curr->arr[c];
        }
        return true;
    }
};