#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
struct node* newnode;
struct node* head=nullptr;
int main(){
    int value;
    char ch;
    cout<<"do you want to create a linked list : ";cin>>ch;
    while(ch=='y' || ch=='Y'){
        node* newnode = new node();
        cout<<"Enter the data to insert : ";cin>>value;
         newnode->data=value;
        newnode->next=nullptr;
        if(newnode==nullptr){
            cout<<"Memory Not Allocated."<<endl;
            return 1;
        }
        if(head==nullptr){
            head=newnode;
        }
        else{
            node* temp = head;
            while(temp->next != nullptr){
                temp=temp->next;
            }
            temp->next = newnode;
        }
        cout<<"do you want to insert more elements in the Linked List : ";cin>>ch;
    }
    if(ch=='n' || ch=='N'){
        cout<<"Linked List is not created.";
    }
    else{
        cout<<"provide a valid input"<<endl;
    }
     cout<<"Now , we are printing the linked list : "<<endl;
   node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"now we are reversing the linked list : "<<endl;
    node* nextptr;  //it is a pointer variable to keep the address of next node during the reversal process.
    node* prevptr = nullptr; //it will store the address of the previous variable during reversal process.
    node* current = head; //current , it will point to the first node of list before traversal . it will be used for traversal.
    while(current != nullptr){  //it will iterate till the end of the linked list.
        nextptr = current->next;  //This is done because we need to keep track of the next node before we modify current->next in the next step.
        current->next = prevptr;  //It reverses the link between the current node (current) and the previous node (prevptr). 
        prevptr = current;  //it update the prevpointer 
        current = nextptr;
    }
    head = prevptr;
    
    cout<<"Now , we are printing the linked list after reversing : "<<endl;
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
    
}