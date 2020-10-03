class Solution {
public:
    string restoreString(string s, vector<int>& v) {
        string t=s;
            for(int i=0;i<v.size();i++){
                    t[v[i]]=s[i];
            }
            return t;
    }
};
