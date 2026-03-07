#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Create circular list
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
    temp->next = head;
    return head;
}

// Display list
void display(Node* head) {
    if(head == NULL)
        return;

    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while(temp != head);
    cout << "(head)\n";
}

// Insert at beginning
Node* insertBegin(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;

    if(head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;

    newNode->next = head;
    temp->next = newNode;
    return newNode;
}

// Insert at end
Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;

    if(head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;
    while(temp->next != head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Insert at position
Node* insertAtPos(Node* head, int val, int pos) {
    Node* newNode = new Node();
    newNode->data = val;

    Node* temp = head;
    for(int i = 1; i < pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;
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

    head = insertBegin(head, 10);
    cout << "After inserting at beginning:\n";
    display(head);

    head = insertEnd(head, 20);
    cout << "After inserting at end:\n";
    display(head);

    head = insertAtPos(head, 15, 3);
    cout << "After inserting at position 3:\n";
    display(head);

    return 0;
}
