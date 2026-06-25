#include <iostream>
#include <string>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracket = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(char c : s){
            if (bracket.find(c) != bracket.end()) {
                if (st.empty() || st.top() != bracket[c]) {
                    return false;
                }
                st.pop(); 
            } else {
                st.push(c);
            }
        }
        return st.empty();
    }
};
int main(){
    Solution s;
    string str = "{[()]}";
    if(s.isValid(str)){
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }
    return 0;
}