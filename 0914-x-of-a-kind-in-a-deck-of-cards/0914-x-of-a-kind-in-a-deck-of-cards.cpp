class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1) return false;
        map<int,int> mp;
        for(int i=0;i<deck.size();i++){
            mp[deck[i]]++;
        }
        int g=0;
        for(auto it:mp){
            g=gcd(g,it.second);
        }
        return g>1;
    }
};