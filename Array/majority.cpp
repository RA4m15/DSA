#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 2, 2};
    int count = 0;
    int majority = arr[0];
    for(int i = 0;i<5;i++){
        if(arr[i] == majority){
            count++;
        }
        else if(count == 0){
            majority = arr[i];
            count = 1;
        }
        else{
            count--;
        }
    }
}