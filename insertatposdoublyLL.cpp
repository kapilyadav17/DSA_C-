// insertion at position in doubly Linked List
//creating a doubly linked list
#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next , *prev;
};
int main(){
    int value;
    char ch;
    struct node *newnode , *head , *temp;
    head=NULL;
    cout<<"do you want to create a doubly linked list : ";cin>>ch;
    while(ch=='y'||ch=='Y'){
        cout<<"enter the data : ";cin>>value;
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){
            cout<<"memory not allocated\n";
            return 1;
        }
        newnode->next=NULL;
        newnode->data=value;
        newnode->prev=NULL;
        if(head==NULL){
            head=newnode;
            temp=head;
        }
        else{
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cout<<"do you want to enter more elements(y/n) : ";cin>>ch;
    }
    cout<<"we are printing the doubly linked list : "<<endl;
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp->next;
    }
    cout<<"do you want to insert more nodes : ";cin>>ch;
    if(ch=='y'||ch=='Y'){
        int pos;
        struct node *nextnode;
        cout<<"enter the data : ";cin>>value;
        newnode = (struct node *)malloc(sizeof(struct node));
        if(newnode==NULL){
            cout<<"memory not allocated\n";
            return 1;
        }
        newnode->prev=NULL;
        newnode->data=value;
        newnode->next=NULL;
        cout<<"enter the position to insert the node : ";cin>>pos;
        if(pos<0){
            cout<<"invalid position.\n";
        }
        else if(pos == 1){
            cout<<"we are inserting at the begining.\n";
        }
        else{
            temp = head;
            for(int i=1 ; i<pos-1 && temp != NULL ; i++){
                temp = temp->next;
            }
            newnode->next=temp->next;
            newnode->prev = temp;
            temp->next=newnode;
            temp->next->prev = newnode;
            cout<<"insertion successful\n";
        }
    }
    else{
        cout<<"okay , more nodes not inserted in the Linked List.";
    }
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
