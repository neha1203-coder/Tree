#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Create circular linked list
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
    temp->next = head;   // Make list circular
    return head;
}

// Display circular linked list
void display(Node* head) {
    if(head == NULL)
        return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    cout << "(back to head)\n";
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements:\n";
    Node* head = createList(n);

    cout << "Circular Linked List:\n";
    display(head);

    return 0;
}
