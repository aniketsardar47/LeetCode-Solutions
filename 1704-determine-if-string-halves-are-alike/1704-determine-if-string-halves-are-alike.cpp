class Solution {
public:
    bool isvowel(char ch){
        return (ch == 'a' || ch == 'e' || ch=='i' || ch== 'o' || ch == 'u'
                || ch== 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    bool halvesAreAlike(string s) {
        int count = 0;

        for(int i=0;i<s.size()/2;i++){
            if(isvowel(s[i])){
                count++;
            }
        }
        cout<<s.size()/2<<endl;
        for(int i=(s.size()/2);i<s.size();i++){
            if(isvowel(s[i])){
                count--;
            }
        }

        cout<<count<<endl;
        return count == 0;
    }
};