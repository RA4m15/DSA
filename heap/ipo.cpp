#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n = profits.size();
        vector<pair<int,int>> Maxp;
        for(int i = 0;i<n;i++){
            Maxp.push_back({capital[i],profits[i]});
        }
        sort(Maxp.begin(),Maxp.end());
        priority_queue<int> pq;
        int idx = 0;
        while(k--){
            while(idx<n){
                if(Maxp[idx].first > w)
                break;
                pq.push(Maxp[idx].second);
                idx++;
            }
            if(pq.empty())
            return w;
            w+=pq.top();
            pq.pop();
        }
        return w;
    }
};
int main(){
    Solution s;
    vector<int> profits = {1,2,3};
    vector<int> capital = {0,1,1};
    int k = 2;
    int w = 0;
    cout<<s.findMaximizedCapital(k,w,profits,capital);
    return 0;
}