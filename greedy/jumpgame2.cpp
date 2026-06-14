#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int r = 0, l = 0;
        int jumps = 0;
        while(r<n-1){
            int farthest = 0;
            for(int idx = l;idx<=r;idx++){
                farthest = max(farthest,idx+nums[idx]);
            }
            l = r+1;
            jumps += 1;
            r = farthest;
        }
        return jumps;
    }
};
int main(){
    Solution s1;
    vector<int> nums = {2,3,1,4,1,1,1,2};
    cout<<s1.jump(nums)<<" ";
}