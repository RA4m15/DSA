#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> rev(n);
        int i = n - 1, j = 0;

        while (i >= 0) {
            rev[i] = nums[j];
            i--;
            j++;
        }
        for(int i = 0;i<n;i++){
            nums.push_back(rev[i]);
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5};
    vector<int> result = s.concatWithReverse(nums);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}