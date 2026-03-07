#include <iostream>
using namespace std;

// Doubly Linked List Node
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Create doubly linked list
Node* createList(int n) {
    Node *head = NULL, *temp = NULL, *newNode;
    for(int i = 0; i < n; i++) {
        newNode = new Node();
        cin >> newNode->data;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }
    return head;
}

// Display list
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Delete from beginning
Node* deleteBegin(Node* head) {
    if(head == NULL)
        return NULL;

    Node* temp = head;
    head = head->next;
    if(head != NULL)
        head->prev = NULL;

    delete temp;
    return head;
}

// Delete from end
Node* deleteEnd(Node* head) {
    if(head == NULL)
        return NULL;

    Node* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    if(temp->prev != NULL)
        temp->prev->next = NULL;
    else
        head = NULL;

    delete temp;
    return head;
}

// Delete from specific position
Node* deleteAtPos(Node* head, int pos) {
    if(head == NULL)
        return NULL;

    Node* temp = head;
    for(int i = 1; i < pos && temp != NULL; i++)
        temp = temp->next;

    if(temp == NULL)
        return head;

    if(temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if(temp->next != NULL)
        temp->next->prev = temp->prev;

    delete temp;
    return head;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements:\n";
    Node* head = createList(n);

    cout << "Original Doubly Linked List:\n";
    display(head);

    head = deleteBegin(head);
    cout << "After deleting from beginning:\n";
    display(head);

    head = deleteEnd(head);
    cout << "After deleting from end:\n";
    display(head);

    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    head = deleteAtPos(head, pos);

    cout << "After deleting from position:\n";
    display(head);

    return 0;
}
