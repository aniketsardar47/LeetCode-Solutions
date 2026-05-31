class Solution {
public:
    bool isvowel(char ch){
        return (ch == 'a' || ch == 'e' || ch=='i' || ch== 'o' || ch == 'u'
                || ch== 'A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
    }
    bool halvesAreAlike(string s) {
        int count = 0;
        int mid = s.size()/2;
        int i=0;
        int j=mid;
        while(i<mid && j<s.size()){
            if(isvowel(s[i])){count++;}
            if(isvowel(s[j])){count--;}
            i++;j++;
        }
        

        cout<<count<<endl;
        return count == 0;
    }
};