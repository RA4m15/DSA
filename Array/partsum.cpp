#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        int finalsum = 0;
        vector<int> sums;
        for(int i = 0;i<s.size()-1;i++){
            sum = (int)s[i]-(int)s[i+1];
            if(sum<0)
            sum = -sum;
            sums.push_back(sum);
            sum = 0;
        }
        for(int i = 0;i<sums.size();i++){
            finalsum+=sums[i];
        }
        return finalsum;
    }
};
int main(){
    Solution s;
    string str = "abcde";
    int result = s.scoreOfString(str);
    cout << result << endl;
    return 0;
}