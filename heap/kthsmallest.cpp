#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class solution{
    public:
int kthsmallest(vector<int> &arr,int k){
                priority_queue<int> pq;
                for(int i = 0;i<k;i++){
                    pq.push(arr[i]);
                        }
                
                for(int i = k;i<arr.size();i++){
                    if(arr[i]>=pq.top())
                    continue;
                    pq.pop();
                    pq.push(arr[i]);
                }
            return pq.top();
    }
};
int main(){
    vector<int> arr = {7,10,4,3,20,15};
    int k = 3;
    solution s;
    cout << s.kthsmallest(arr,k) << endl;
    return 0;
}