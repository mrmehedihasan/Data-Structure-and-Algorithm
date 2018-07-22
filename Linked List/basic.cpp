#include <iostream>
#include <malloc.h>
using namespace std;

typedef struct node Node;

struct node{
    int data;
    Node *next;
};

void PrintLinkedList(Node *h){
    while(h!=NULL){
        cout << h->data << endl;
        h = h->next;
    }
}


int main(){
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    head = (Node*)malloc(sizeof(Node));
    first = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));

    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;

    PrintLinkedList(head);


    return 0;
}
