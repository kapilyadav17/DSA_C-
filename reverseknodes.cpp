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
    int k;
    cout << "Enter the value of k for reversing k nodes: ";
    cin >> k;

    // In-place k-node reversal logic
    node* prev = nullptr;
    node* current = head;
    node* nextptr;

    int count = 0;
    while (current != nullptr) {
        // Reverse k nodes
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
        count++;

        // Check if k nodes reversed, connect to remaining list
        if (count == k) {
            // Connect the tail of the reversed sublist to the remaining list
            node* remainingList = nextptr;
            if (remainingList != nullptr) {
                temp = head;
                while (temp->next != prev) {
                    temp = temp->next;
                }
                temp->next = remainingList;
            }

            // Update head for the next k-node reversal (if applicable)
            head = prev;
            prev = nullptr;
            current = nextptr;
            count = 0;
        }
    }

    cout<<"Now , we are printing the linked list after reversing : "<<endl;
    temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    return 0;
    
}