class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        vector<int> ans(n,0);
        int ls = 0,rs = 0;
        for(int i = 0;i<n;i++){
            left[i] = ls;
            ls += nums[i];
        }
        for(int i = n-1;i>=0;i--){
            right[i] = rs;
            rs +=nums[i];
        }
        for(int i = 0;i<nums.size();i++){
            ans[i] = abs(left[i] - right[i]);
        }
        return ans;
    }
};