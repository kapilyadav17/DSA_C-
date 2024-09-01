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
    cout<<"do you want to insert a node at the end of the linked list : ";cin>>ch;
    if(ch=='y'||ch=='Y'){
        cout<<"enter the data to insert : ";cin>>value;
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode==NULL){
            cout<<"memory not allocated\n";
            return 1;
        }
        newnode->prev=NULL;
        newnode->data=value;
        newnode->next=NULL;
        cout<<"we are inserting at the end : \n";
        temp = head;
        while(temp->next != NULL){
            temp = temp -> next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
    else{
        cout<<"node not added in linked list.";
    }
    cout<<"we are printing the linked list that we have created : \n";
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
