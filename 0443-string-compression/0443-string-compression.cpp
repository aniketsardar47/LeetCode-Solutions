class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int index = 0;
        int ans = 0;
        while(i<chars.size()){
            char ch = chars[i];
            int count = 0;
            while(i<chars.size() && chars[i] == ch){
                count++;
                i++;
            }
            ans++;
            chars[index++] = ch;
            if(count > 1){
                string cnt = to_string(count);
                for(int j=0;j<cnt.size();j++){
                    chars[index++] = cnt[j];
                }
                ans+=cnt.size();
            }
            
        }
        return ans;
    }
};