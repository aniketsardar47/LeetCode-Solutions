class Solution {
public:
    vector<string> ans;
    vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void rfunc(string &digits,string temp,int ind){
        if(temp.size() == digits.size()){
            ans.push_back(temp);
            return;
        }

        int x = digits[ind]-'0';
        for(char ch:keys[x]){
            temp.push_back(ch);
            rfunc(digits,temp,ind+1);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        
        rfunc(digits,"",0);

        return ans;
    }
};