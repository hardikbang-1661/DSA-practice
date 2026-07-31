class Solution {
public:
    int minimumPushes(string word) {
        map<int,int> mp;
        for(int i=0;i<word.length();i++){
            mp[word[i]-'a']++;
        }
        vector<int> vec;
        for(auto x:mp){
            vec.push_back(x.second);
        }
        sort(vec.begin(),vec.end());
        int check=0;
        int count=1;
        int sum=0;
        for(int i=vec.size()-1;i>=0;i--){
            sum+=vec[i]*count;
            check++;
            if(check==8){
                check=0;
                count++;
            }
        }
        return sum;
    }
};