class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        set<string> ps;
        set<string> ns;
        for(int i=0;i<positive_feedback.size();i++){
            ps.insert(positive_feedback[i]);
        }
        for(int i=0;i<negative_feedback.size();i++){
            ns.insert(negative_feedback[i]);
        }
        int score=0;
        string str;
        priority_queue<pair<int,int>, vector<pair<int,int>>, 
            function<bool(pair<int,int>, pair<int,int>)>> pq(
            [](pair<int,int> a, pair<int,int> b) {
                if (a.first != b.first)
                    return a.first < b.first;
                return a.second > b.second;
            }
        );
        for(int i=0;i<report.size();i++){
            score=0;
            str="";
            for(int j=0;j<report[i].length();j++){
                if(report[i][j]!=' '){
                    str+=report[i][j];
                }
                else{
                    auto it1=ps.find(str);
                    auto it2=ns.find(str);
                    if(it1!=ps.end()) score+=3;
                    if(it2!=ns.end()) score--;
                    str="";
                }
            }
            auto it1=ps.find(str);
            auto it2=ns.find(str);
            if(it1!=ps.end()) score+=3;
            if(it2!=ns.end()) score--;
            str="";
            pq.push({score,student_id[i]});
        }
        vector<int> vec;
        for(int i=0;i<k;i++){
            vec.push_back(pq.top().second);
            pq.pop();
        }
        return vec;
    }
};