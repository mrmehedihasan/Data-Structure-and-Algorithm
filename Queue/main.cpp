#include <bits/stdc++.h>

using namespace std;

int Queue[1000], fontInd = 0, backInd = -1;

void push(int x){
    Queue[++backInd] = x;
}
void pop(){
    Queue[fontInd] = 0;
    fontInd++;
}

bool isEmpty(){
    if(fontInd>backInd)return true;
    else return false;
}
int top(){
    return Queue[fontInd];
}

int main(){

    push(100);
    push(25);
    pop();
    cout << top() << endl;
    cout << isEmpty() << endl;

    return 0;
}
