#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Solution{
    public:
    int kthlargest(vector<int> &arr,int k){
            priority_queue<int, vector<int>, greater<int>> pq;
            for(int i = 0;i<k;i++){
                pq.push(arr[i]);
            }
            for(int i = k;i<arr.size();i++){
                if(pq.top()<arr[i]){
                    pq.pop();
                    pq.push(arr[i]);
                }
            }
        return pq.top();
    }
};
int main(){
    Solution s1;
    vector<int> arr = {5,6,3,2,4,10,9};
    int k = 3;
    cout << s1.kthlargest(arr, k) << endl;
    return 0;
}