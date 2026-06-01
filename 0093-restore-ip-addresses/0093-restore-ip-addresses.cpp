class Solution {
public:
    vector<string> ans;

    bool isValid(string str){
        int n = stoi(str);
        if(str[0]=='0') return false;
        if(n > 255) return false;
        return true;
    }   

    void rfunc(string s,int ind,int n,string curr,int part){
        if(part == 4 && ind==n){
            curr.pop_back();
            ans.push_back(curr);
            return;
        }

        if(ind+1 <= n) rfunc(s,ind+1,n,curr+s.substr(ind,1)+'.',part+1);
        if(ind+2 <= n && isValid(s.substr(ind,2)))  rfunc(s,ind+2,n,curr+s.substr(ind,2)+'.',part+1);
        if(ind+3 <= n && isValid(s.substr(ind,3)))  rfunc(s,ind+3,n,curr+s.substr(ind,3)+'.',part+1);
        
    }
    vector<string> restoreIpAddresses(string s) {
        if(s.size() > 12){
            return {};
        }
        string curr = "";

        rfunc(s,0,s.size(),curr,0);

        return ans;
    }
};