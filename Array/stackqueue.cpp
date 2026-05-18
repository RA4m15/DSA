#include<iostream>
#include<queue>
using namespace std;

class Stack{
private:
    int top;
    int stack[10];
public:
    Stack(){
        top = -1;
    }
    void push(int value){
        if(top >=9)
            cout<<"the stack is full"<<endl;
        else{
            top +=1;
            stack[top] = value;
            cout<<stack[top]<<endl;
        }
    }
    int toppp(){
        if(top ==-1)
        cout<<"stack empty"<<endl;
        else
        return {stack[top]};
    }
};
class Queue{

    public:
    int size = 10;
    int queue[size];
    
    int currsize = 0;
    int st = -1;
    int end = -1;
    
    void push(int value){
        if(currsize == size)
        cout<<"element cannot be pushed"<<endl;

        if(currsize == 0){
            st = 0, end = 0;
        }
        
        else{
            end = (end+1)%size;
            currsize +=1;
            queue[end] = value;
        }
    }
};
int main(){
    Stack s1;
    Queue q1;
    q1.push(23);
    s1.push(10);
    s1.toppp();
    return 0;
}