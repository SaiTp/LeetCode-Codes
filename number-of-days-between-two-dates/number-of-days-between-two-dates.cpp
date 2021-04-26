class Solution {
public:
    int daysBetweenDates(string date1, string date2) {
        return abs(daysPassedSince1971(date1) - daysPassedSince1971(date2));
    }
    bool isLeapYear(int year){
        return (year%400 == 0)||(year%100 != 0 && year%4 == 0);
    }
    int daysPassedSince1971(string date){
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int day = stoi(date.substr(8,2));
        
        vector<int> months ({0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31});
        
        for(int i=1971;i<year;i++){
            day += isLeapYear(i) ? 366 : 365;
        }
        
        for(int i=1;i<month;i++){
            if(i==2 && isLeapYear(year)){
                day += 1;
            }
            day += months[i];
        }
        
        return day;
    }
    
};