class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        string names[]={"Fri", "Satur", "Sun", "Mon", "Tues", "Wednes", "Thurs"};
        const int Days[]{31,28,31,30,31,30,31,31,30,31,30};
        day--;
        if(year%4==0 && month>2 && year!=2100)
            day++;
        while(--month)
        {
            day+=Days[month-1]; // zero based indexing
        }
        int yd = year-1971;
        day += yd;
        day += (yd+2)/4;
        return names[day%7]+"day";
    }
};