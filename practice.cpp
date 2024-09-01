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
    int pos;
    cout<<"Enter the position to delete the linked list : ";cin>>pos;
    if(head==nullptr){
        cout<<"The Linked List is empty."<<endl;
    }
    else if(pos==0){
       head = head->next;
       node *temp = head;
       delete temp;
    }
    else{
    node* temp = head; //temp , a pointer to traverse from the starting to the end.
    node* prev = nullptr; //a pointer that will always be one step behind the temp.
    int count = 0; //a counter variable to keep the track of the current node.
    while(temp !=nullptr && count<pos){ //this while loop traverses until we reach the end of the list or we reach the desired position(count == pos).
        prev = temp; //prev is update to the current node.
        temp = temp->next;  //temp is updated to the next node.
        count++; //count is incremented.
    }
    if(temp==nullptr){ //it means that we have reached the end of the list , but we haven't found the node to delete yet. , it could also happen if the pos > no. of elements in the list.
        cout<<"node not found"<<endl;
    }
    else if(prev != nullptr){ //This condition checks if prev is not null. It means we're not dealing with the head node (as the head node would have prev as null).
        prev->next = temp->next; //this will remove the node.
        temp = temp->next; //it will move the temp to next node.
        delete temp; //it will free the memory allocated to that node.
    }
    else{
        cout<<"unexpected error happened during deletion"<<endl;
    }
    }
    cout<<"we are printing the linked list - "<<endl;
     node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<endl;
           temp=temp->next;
    }
    return 0;
}