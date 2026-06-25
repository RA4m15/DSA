#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int countMajoritySubarrays(vector<int> &nums,int target){
        int ans = 0;
        
        for(int i = 0;i < nums.size(); i++){
            int count = 0;
            for(int j = i;j < nums.size();j++){
                if(nums[j] == target){
                count++;
                }
                int freq = j-i+1;
                if(2*count>freq)
                ans++;
            }
        }
        return ans;
    }
};
int main(){
    Solution s1;
    vector<int> nums = {1,2,2,3};
    int target = 2;
    cout<<s1.countMajoritySubarrays(nums,target);
    return 0;
}