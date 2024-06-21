class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>> vec;
        for(int i=0;i<difficulty.size();i++) {
            vec.push_back(make_pair(difficulty[i], profit[i]));
        }
        sort(vec.begin(), vec.end());

        profit[0] = vec[0].second;

        for(int i=1;i<profit.size();i++) {
            profit[i] = max(vec[i].second, profit[i-1]);
        }
        sort(worker.begin(), worker.end());

        for(int i=0;i<worker.size();i++) {
            cout<<worker[i]<<endl;
        }

        int pro = 0;
        int curIdx = 0;

        for(int i=0;i<worker.size();i++) {
            while(curIdx < vec.size() && vec[curIdx].first <= worker[i]) {
                    curIdx++;
            }
            if(curIdx) {
                pro += profit[curIdx-1];
            }
        }
        return pro;
    }
};

/*
81+81+81+81 = 324
*/