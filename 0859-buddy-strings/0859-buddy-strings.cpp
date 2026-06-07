class Solution {
public:
    bool checkfreq(string s){
        map<char,int> freq;
        for(auto c: s){
            freq[c]++;
            if(freq[c] >= 2){
                return true;
            }
        }
        return false;
    }

    bool buddyStrings(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        if(s==goal){
            return checkfreq(s);
        }

        vector<int> ind;

        for(int i=0;i<s.size();i++){
            if(s[i] != goal[i]){
                ind.push_back(i);
            }
            if(ind.size()==2){
                swap(s[ind[0]],s[ind[1]]);
                break;
            }
        }

        return s==goal;
    }
};