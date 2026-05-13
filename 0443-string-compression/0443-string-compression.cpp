class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> newchars;
        for(int i=0;i<chars.size();i++){
            char ch = chars[i];
            newchars.push_back(ch);
            int count = 0;
            while(i<chars.size() && chars[i]==ch){
                i++;
                count++;
            }

            if(count > 1){
                string s = to_string(count);

                if(s.size() > 1){
                    for(int j = 0; j < s.size(); j++){
                        newchars.push_back(s[j]);
                    }
                }else{
                    newchars.push_back(s[0]);
                }
            }

            i--;
        }

        chars = newchars;
        return newchars.size();
    }
};