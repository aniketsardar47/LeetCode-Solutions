class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        int l = 0;
        int r = 0;
        int n = g.size();
        int m = s.size();

        while(l<n && r<m){
            if(g[l] <= s[r]){
                count++;
                l++;
                r++;
            }else{
                while(r<m){
                    if(s[r] >= g[l]){
                        count++;
                        r++;
                        l++;
                        break;
                    }
                    r++;
                }
            }


        }

        return count;
    }
};