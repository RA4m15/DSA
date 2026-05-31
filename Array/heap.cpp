#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(1);
    cout << pq.top()<<" "<<pq.empty() << endl;
    return 0;
}