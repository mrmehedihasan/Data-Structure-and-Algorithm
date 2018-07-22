#include <iostream>
#include <malloc.h>
using namespace std;
//Declaring definition for linked list data type
typedef struct node Node;
//Setting data to store information and Node for next information memory address
struct node{
    int data;
    Node *next;
};
//Print the list of information
void PrintLinkedList(Node *h){
    while(h!=NULL){
        cout << h->data << endl;
        h = h->next;
    }
}


int main(){

    //Declaring the number of information will stored in linked list
    Node *head = NULL;
    Node *first = NULL;
    Node *second = NULL;
    //Allocating memory dynamically for information
    head = (Node*)malloc(sizeof(Node));
    first = (Node*)malloc(sizeof(Node));
    second = (Node*)malloc(sizeof(Node));

    //Inserting Data
    head->data = 1;
    head->next = first;

    first->data = 2;
    first->next = second;

    second->data = 3;
    second->next = NULL;
    //Printing information
    PrintLinkedList(head);


    return 0;
}
