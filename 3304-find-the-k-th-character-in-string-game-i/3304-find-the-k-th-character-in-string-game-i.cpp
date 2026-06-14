class Solution {
public:
    char rfunc(string str,int k){
        if(str.size() >= k){
            return str[k-1];
        }

        string temp = "";
        for(auto ch: str){
            temp += 'a' + (ch - 'a' + 1) % 26;

        }

        return rfunc(str+temp,k);

    }

    char kthCharacter(int k) {
        return rfunc("a", k);
    }
};