class Solution {
public:
    bool isPalindrome(string s) {
        string tmp = "";
        for(char ch : s) {
            if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
                tmp += ch;
            else if((ch >= 'A' && ch <= 'Z')) 
                tmp += ch + 32; 
        }
        for(size_t i = 0; i <= tmp.length() / 2; i++) {
            if(tmp[i] != tmp[tmp.length() - 1 - i])
                return false;
        }
        return true;
    }
};
