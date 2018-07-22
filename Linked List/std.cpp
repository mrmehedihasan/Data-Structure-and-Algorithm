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

void push(Node** head_ref, int new_data){
    Node *new_node = (Node*)malloc(sizeof(Node));

    new_node->data = new_data;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}





int main(){
    Node *head = NULL;
    head = (Node *) malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 5);
    PrintLinkedList(head);
    return 0;
}
