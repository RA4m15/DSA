#include <iostream>
using namespace std;
int countsetbits(int n){
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of set bits in " << n << " is " << countsetbits(n) << endl;
    return 0;
}