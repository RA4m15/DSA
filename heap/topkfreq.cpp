#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;

struct cmp{
    bool operator()(pair<int,int> &a,pair<int,int> &b){
        if(a.first != b.first){     //Min , Min heap
            return a.first>b.first;
        }
        return a.second>b.second;
    }
};
class topkfrequent{
    public:
    vector<int> topk(vector<int> &a, int k){
        int n = a.size();
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        unordered_map<int, int> f;
        for(int i = 0;i<n;i++){
            f[a[i]]++;
        }
        for(auto i:f){
            int elem = i.first;
            int freq = i.second;

            pair<int, int> curr = {freq, elem};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            pq.pop();
            pq.push(curr);
        }
        vector<int> res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
int main(){
    vector<int> a = {1,1,1,2,2,3};
    int k = 2;
    topkfrequent s;
    vector<int> res = s.topk(a,k);
    for(int i:res){
        cout << i << " ";
    }
}