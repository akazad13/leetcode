class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> vec;

        for(int i=0; i<profits.size(); i++) {
            vec.push_back(make_pair(capital[i], profits[i]));
        }

        sort(vec.begin(), vec.end());

        priority_queue<int> pq;

        int n = vec.size();
        int curCapital = w;
        int i = 0;
        while(i<n && k) {
            if(curCapital >= vec[i].first) {
                pq.push(vec[i].second);
                i++;
            }else {
                if(pq.empty())
                    break;
                curCapital += pq.top();
                pq.pop();
                k--;
            }
        }

        while(!pq.empty() && k--) {
            curCapital += pq.top();
            pq.pop();
        }

        return curCapital;
    } 
};