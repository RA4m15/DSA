#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int r = 0,l = 0;
        while(l<m){
            if(g[r]<=s[l])
            r = r+1;
            l = l+1;
        }
        return r;
    }
};
int main(){
    Solution s1;
    vector<int> g = {1,5,3,3,4};
    vector<int> s = {4,2,1,2,1,3};
    cout<<s1.findContentChildren(g,s);
}