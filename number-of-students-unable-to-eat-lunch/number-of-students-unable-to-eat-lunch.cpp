class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
         int count=0;
        deque<int> s;
        deque<int> m;
        for(int i=0;i<students.size();i++){
            s.push_back(students[i]);
            m.push_back(sandwiches[i]);
        }
        while(1){
            if(s.front()==m.front()){
                count=0;
                s.pop_front();
                m.pop_front();
            }else{
                s.push_back(s.front());
                s.pop_front();
                count++;
            }
            if(count>s.size()){
                break;
            }
            if(s.size()==0){
                break;
            } 
        }
        return s.size();
    }
};