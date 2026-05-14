class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int w1i = 0;
        int w2i = 0;
        int i = 0,j = 0;
        int m = word1.size(), n = word2.size();
        while(w1i < m && w2i < n){
            if(word1[w1i][i] != word2[w2i][j])
                return false;
             i++;j++;
            if(i == word1[w1i].length()){
                i = 0;
                w1i++;
            }
            if(j == word2[w2i].length()){
                j = 0;
                w2i++;
            }
           
        }

        return (w1i==m) && (w2i==n);
    }
};