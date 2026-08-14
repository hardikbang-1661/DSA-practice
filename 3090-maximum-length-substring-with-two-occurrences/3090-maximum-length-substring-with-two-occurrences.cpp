class Solution {
public:
    int maximumLengthSubstring(string s) {
        int arr[26]={0};
        int count=0;
        for(int l=0,r=0;r<s.length();r++){
            arr[s[r]-'a']++;
            while(arr[s[r]-'a']>2){
                    arr[s[l]-'a']--;
                    l++;
            } 
            count=max(count,r-l+1);
        }
        return count;
    }
};