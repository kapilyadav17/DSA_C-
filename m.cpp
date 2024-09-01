//this is code for deleting a node - 
//we are deleting a given node in linked list.
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
    cout<<endl;
    int pos;
    cout<<"enter the position to delete the node : ";cin>>pos;
    if(head==nullptr){
        cout<<"linked list is empty."<<endl;
    }
    else if(pos==0){
        head=head->next;
    }
    else{
        node* temp = head;
        node* prev = nullptr;
        int count=0;
        while(temp != nullptr && count<pos){
            prev = temp;
            temp = temp->next;
            count++;
        }
        if(temp==nullptr){
            cout<<"the node was not found"<<endl;
        }
        else{
              prev->next = temp->next;
              delete temp;
        }
    }
    cout<<"the linked list after deletion is : "<<endl;
      temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
}
