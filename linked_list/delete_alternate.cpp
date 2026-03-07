#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Create list
Node* createList(int n) {
    Node *head = NULL, *temp = NULL, *newNode;
    for(int i = 0; i < n; i++) {
        newNode = new Node();
        cin >> newNode->data;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    return head;
}

// Display list
void display(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

// Delete alternate nodes starting from 1st
Node* deleteAlternate(Node* head) {
    if(head == NULL)
        return NULL;

    Node* curr = head;
    Node* temp;

    // New head will be second node
    head = head->next;
    delete curr;

    curr = head;
    while(curr != NULL && curr->next != NULL) {
        temp = curr->next;
        curr->next = temp->next;
        delete temp;
        curr = curr->next;
    }
    return head;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements:\n";
    Node* head = createList(n);

    cout << "Original List:\n";
    display(head);

    head = deleteAlternate(head);

    cout << "After deleting alternate nodes:\n";
    display(head);

    return 0;
}
