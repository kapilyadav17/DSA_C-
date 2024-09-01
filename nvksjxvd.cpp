#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = nullptr;

int main() {
    int value;
    char ch;

    cout << "Do you want to create a linked list? (y/Y for yes, n/N for no): ";
    cin >> ch;

    while (ch == 'y' || ch == 'Y') {
        node* newnode = new node();
        cout << "Enter the data to insert: ";
        cin >> value;
        newnode->data = value;
        newnode->next = nullptr;

        if (newnode == nullptr) {
            cout << "Memory Not Allocated\n";
            return 1;
        }

        if (head == nullptr) {
            head = newnode;
        } else {
            node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newnode;
        }

        cout << "Do you want to enter more data? (y/Y for yes, n/N for no): ";
        cin >> ch;
    }

    if (ch == 'N' || ch == 'n') {
        cout << "Okay, Linked List not Created" << endl;
    } else {
        cout << "Invalid Input" << endl;
    }

    int pos;
    cout << "Enter the position of the node to delete: ";
    cin >> pos;

    // Handle edge cases: empty list and deletion at position 0
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return 0;
    } 
    else if (pos == 0) { // Delete the head node
        node* temp = head;
        head = head->next;
        delete temp;
    } 
    else {
        // Find the node at the given position and its previous node
        node* temp = head;
        node* prev = nullptr;
        int count = 0;
        while (temp != nullptr && count < pos) {
            prev = temp;
            temp = temp->next;
            count++;
        }

        // Handle cases: node not found or deletion beyond list length
        if (temp == nullptr) {
            cout << "Node not found at the given position." << endl;
        } else if (prev != nullptr) { // Delete a node in the middle
            prev->next = temp->next;
            delete temp;
        } else {
            cout << "Unexpected error during deletion." << endl;
        }
    }

    cout << "Printing the linked list after deletion: " << endl;
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}
