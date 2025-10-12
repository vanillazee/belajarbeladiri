class Solution {
public:
    bool isPalindrome(int x) {
        string str_x = to_string(x);
        string rev = string(str_x.rbegin(), str_x.rend());
        if (str_x == rev) {
            return true;
        } else {
            return false;
        }
    }
};