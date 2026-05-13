class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp;
        for(auto ch: sentence){
            mp[ch]++;
        }

        return mp.size() == 26;
    }
};