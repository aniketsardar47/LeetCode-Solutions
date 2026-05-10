class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int> ans(2,0);

        for(int i=0;i<events.size();i++){
            if(events[i] == "W"){
                ans[1]++;
            }else{
                if(events[i] == "WD" || events[i] == "NB"){
                    ans[0]++;
                }else{
                    ans[0] += stoi(events[i]);
                }
            }
            if(ans[1] == 10){
                break;
            }
        }

        return ans;
    }
};