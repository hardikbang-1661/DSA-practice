class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int,int> mp;
        for(int i=0;i<answers.size();i++){
            mp[answers[i]]++;
        }
        long long count=0;
        for(auto x:mp){
            if(x.first>=x.second+1) count+=x.first+1;
            else{
                while(x.first<x.second){
                    count+=x.first+1;
                    x.second-=x.first+1;
                }
                if(x.second>0) count+=x.first+1;
            }
        }
        return count;
    }
};