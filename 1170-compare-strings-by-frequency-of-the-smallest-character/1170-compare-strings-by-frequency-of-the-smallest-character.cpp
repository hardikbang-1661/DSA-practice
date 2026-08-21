class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> counter;
        for(int i=0;i<words.size();i++){
            sort(words[i].begin(),words[i].end());
            int count=1;
            for(int j=1;j<words[i].length();j++){
                if(words[i][j-1]!=words[i][j]) break;
                else count++;
            }
            counter.push_back(count);
        }
        sort(counter.begin(),counter.end());
        vector<int> qcounter;
        for(int i=0;i<queries.size();i++){
            sort(queries[i].begin(),queries[i].end());
            int count=1;
            for(int j=1;j<queries[i].length();j++){
                if(queries[i][j-1]!=queries[i][j]) break;
                else count++;
            }
            qcounter.push_back(count);
        }
        vector<int> ans;
        sort(counter.begin(),counter.end());
        for(int i=0;i<qcounter.size();i++){
            int l=0;
            int r=counter.size()-1;
            if(counter[r]<=qcounter[i]){
                ans.push_back(0);
                continue;
            }
            while(l<r){
                int mid=l+(r-l)/2;
                if(counter[mid]<=qcounter[i]) l=mid+1;
                else r=mid;
            }
            ans.push_back(counter.size()-l);
        }
        return ans;
    }
};
// 1,2,2,2,3,3,4,5,5,5,5,5