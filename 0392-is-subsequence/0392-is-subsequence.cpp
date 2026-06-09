class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() > t.size()) return false;
       if(s.size() == 0 || t.size() == 0) return true;
       int p = 0;
       for(int i=0;i<t.size();i++){
            if(t[i] == s[p]){
                p++;
            }
            if(p == s.size()) return true;
       }

       return p == s.size();
    }
};