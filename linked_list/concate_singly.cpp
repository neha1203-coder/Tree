#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

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

void display(Node* head) {
    while(head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

Node* concatenate(Node* head1, Node* head2) {
    if(head1 == NULL)
        return head2;

    Node* temp = head1;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = head2;
    return head1;
}

int main() {
    int n1, n2;
    cout << "Enter nodes of first list: ";
    cin >> n1;
    cout << "Enter elements:\n";
    Node* head1 = createList(n1);

    cout << "Enter nodes of second list: ";
    cin >> n2;
    cout << "Enter elements:\n";
    Node* head2 = createList(n2);

    Node* head = concatenate(head1, head2);

    cout << "Concatenated List:\n";
    display(head);

    return 0;
}
