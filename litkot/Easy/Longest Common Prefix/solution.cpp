class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string pf = strs[0];

        for(int i=0; i<strs.size(); i++) {
            while(strs[i].compare(0, pf.size(), pf) != 0) {
                pf.pop_back();
                if(pf.size() == 0) return "";
            }
        }

        return pf;
    }
};