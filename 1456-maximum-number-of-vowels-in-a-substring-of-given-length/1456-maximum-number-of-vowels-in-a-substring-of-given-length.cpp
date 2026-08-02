class Solution {
public:
    int maxVowels(string s, int k) {
        vector<int> vec(s.length()+1,0);
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') count++;
            vec[i+1]=count;
        }
        int maxi=0;
        for(int i=0;i<=s.length()-k;i++){
            maxi=max(maxi,vec[i+k]-vec[i]);
        }
        return maxi;
    }
};