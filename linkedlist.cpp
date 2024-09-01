#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
node* head=nullptr;
int main(){
    int value;
    char ch;
    cout<<"do you want to create a linked list : "<<endl;
    cout<<"Please press y/Y for yes and n/N for no : ";cin>>ch;
    while(ch=='y'||ch=='Y'){
        node* newnode = new node();
        cout<<"enter the data to insert : ";cin>>value;
        newnode->data=value;
        newnode->next=nullptr;
        if(newnode==nullptr){
            cout<<"Memory Not Allocated\n";
            return 1;
        }
             if(head==nullptr){
            head=newnode;
        }
        else{
           node* temp=head;
           while(temp->next != nullptr){
            temp=temp->next;
           }
           temp->next=newnode;
        }
        cout<<"do you want to enter more data : ";cin>>ch;
    }
    if(ch=='N'||ch=='n'){
        cout<<"Okay , Linked List not Created"<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
    }

    cout<<"we are printing the linked list - "<<endl;
    node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
           temp=temp->next;
    }
    return 0;
}
