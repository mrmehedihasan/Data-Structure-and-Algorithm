#include <bits/stdc++.h>

using namespace std;

int Stack[1000];
int ind;

void push(int x){
    ind++;
    Stack[ind] = x;
}
void pop(){
    Stack[ind] = 0;
    ind--;
}
bool isEmpty(){
    if(ind>0){
        return false;
    }else{
        return true;
    }
}
int top(){
    return Stack[ind];
}
int main(){
    push(5);
    push(6);
    pop();
    cout << isEmpty() << endl;
    cout << top() << endl;
    return 0;
}
