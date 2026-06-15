#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class Data{
    public:
    int st;
    int end;
    int pos;
};
struct cmp {
    bool operator()(Data a, Data b) {
        return a.end < b.end;   // sort by ending time
    }
};
class Solution {
public:

    int Function(vector<int> &start, vector<int> &ending) {
        int n = start.size();

        vector<Data> data(n);

        for(int i = 0; i < n; i++) {
            data[i].st = start[i];
            data[i].end = ending[i];
            data[i].pos = i;
        }

        sort(data.begin(), data.end(), cmp());

        int count = 1;
        int freetime = data[0].end;

        vector<int> position;
        position.push_back(data[0].pos);

        for(int i = 1; i < n; i++) {
            if(data[i].st > freetime) {
                count++;
                freetime = data[i].end;
                position.push_back(data[i].pos);
            }
        }
        for(int i = 0; i < position.size(); i++) {
            cout << position[i] << endl;
        }
        return count;
    }
};
int main(){
    Solution s1;
    vector<int> start = {0,3,1,5,5,8};
    vector<int> ending = {5,4,2,9,7,9};
    cout<<s1.Function(start,ending);
}
