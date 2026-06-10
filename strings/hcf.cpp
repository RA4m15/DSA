#include<iostream>
using namespace std;
int main(){
    int num1,num2,rem;
    // cout<<"enter a num"<<endl;
    // cin>>num1;
    cin>>num2;
    while(num2!=0){
        if(num1>num2){
            rem=num1%num2;
            num1=num2;
            num2=rem;
        }
    }
    cout<<"hcf"<<num1;
    cout<<"hcf"<<num2;
    return 0;
}