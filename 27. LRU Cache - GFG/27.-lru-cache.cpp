// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// design the class in the most optimal way



class Node{
   public:
    int key,value;
    Node *next,*prev;
    Node(int k,int v){
        key = k;
        value = v;
    }
};
class LRUCache
{
   private:
   unordered_map<int,Node*> un;
   int capacity;
   public:
   //Constructor for initializing the cache capacity with the given value.
   Node *first = new Node(-1,-1);
   Node *last = new Node(-1,-1);
   LRUCache(int cap)
   {
       capacity = cap;
       first->next = last;
       last->prev = first;
   }

   void addNode(Node *temp){
       temp->next = first->next;
       temp->next->prev = temp;
       temp->prev = first;
       first->next = temp;
   }
   
   void deleteNode(Node *temp){
       temp->next->prev = temp->prev;
       temp->prev->next = temp->next;
   }
   //Function to return value corresponding to the key.
   int get(int key)
   {
       int res = -1;
       if(un.find(key)!=un.end()){
           Node *temp = un[key];
           res = temp->value;
           un.erase(key);
           deleteNode(temp);
           addNode(temp);
           un[key] = first->next;
       }
       return res;
   }
   
   //Function for storing key-value pair.
   void set(int key, int value)
   {
       if(un.find(key)!=un.end()){
           Node *temp = un[key];
           un.erase(key);
           deleteNode(temp);
       }
       if(un.size()==capacity){
           un.erase(last->prev->key);
           deleteNode(last->prev);
       }
       
       addNode(new Node(key,value));
       un[key] = first->next;
   }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends