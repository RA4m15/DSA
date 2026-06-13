#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
    int Shortestjobfirst(vector<int> &arr){
        int wt = 0,t = 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        for(int i = 0;i < arr.size();i++){
            wt += t;
            t += arr[i];
        }
        return (wt/n);
    }
};
int main(){
    Solution s1;
    vector<int> arr = {2,5,1,0,2,9};
    cout<<s1.Shortestjobfirst(arr)<<" ";
    return 0;
}