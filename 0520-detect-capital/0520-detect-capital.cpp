class Solution {
public:
    bool detectCapitalUse(string word) {
       if(word.size() == 1) return true;
       int ccnt = 0;

       for(int i=0;i<word.size();i++){
            if(word[i] >= 'A' && word[i]<='Z'){
                ccnt++;
            }
       } 
       return ccnt == word.size() || (ccnt == 1 && word[0]<='Z') || ccnt==0;
    }
};