class Solution {
public:
    string reformatDate(string date) {
         unordered_map<string, string> months({
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
        });
        int index = date.find(' ');
        string day = date.substr(0, index++);
        string month = date.substr(index++, 3);
        string year = date.substr(index + 3, 4);
        
        day = day.substr(0, day.length() - 2);
        day = (day.length() == 2) ? day : "0" + day;
        month = months[month];
        
        return year + "-" + month + "-" + day;
    }
};