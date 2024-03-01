class Solution {
public:
    static string str;
    static bool compare(char char1, char char2){
           // it will return true if char1 position in order string is less than char2, if it is then char1 is placed before char2 otherwise vice-versa
           return (str.find(char1)<str.find(char2));
    }
    string customSortString(string order, string s) {
          str= order;
          sort(s.begin(),s.end(),compare);
    return s;
    }
};
string Solution::str;