class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;

        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        

        for(int i=0;i<word1.size();i++){
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i] > 0 && freq2[i] == 0){
                return false;
            }
        }

        for(int i=0;i<26;i++){
            int freq = freq1[i];
            for(int j=0;j<26;j++){
                if(freq2[j] == freq){
                    freq2[j] = 0;
                    break;
                }
                if(j==25){
                    return false;
                }
            }
        }
        return true;
    }
};