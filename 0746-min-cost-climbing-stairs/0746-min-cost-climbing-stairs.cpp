class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if(cost.size()==1) return cost[0];
        else if(cost.size()==2) return min(cost[0],cost[1]);
        else if(cost.size()==3) return min(cost[1],cost[0]+cost[2]);
        vector<int> dp(cost.size());
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<cost.size();i++){
            dp[i]=min(dp[i-2]+cost[i],dp[i-1]+cost[i]);
        }
        return min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};