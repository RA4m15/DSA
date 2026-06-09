#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

struct cmp{
    bool operator()(pair<int, char> &a,pair<int, char> &b){
        if(a.first != b.first)
        return a.first < b.first;

        return a.second < b.second;
    }
};
class AlternateSeating{
    public:
    string Alternate(string s){
        unordered_map<int , int> f;
        int seat = 0;
        string res = "";
        for(int i = 0;i<s.size();i++){
            f[s[i]]++;
        }
        priority_queue<pair<int,char>, vector<pair<int,char>>, cmp> pq;
        for(auto it = f.begin(); it != f.end(); it++){
            pq.push({it->second, it->first});
        }
        while(!pq.empty()){
            int freq = pq.top().first;
            int chara = pq.top().second;
            pair<int, int> p = {freq, chara};
            pq.pop();
            if(seat == 0 || res[seat-1] != p.second){
                res.push_back(p.second);               
                p.first--;
                if(p.first > 0){
                    pq.push(p);
                }
            }
        }
        return res;
    }
};
int main(){
    AlternateSeating as;
    string s = "aaabbc";
    cout<<as.Alternate(s)<<endl;
    return 0;
}