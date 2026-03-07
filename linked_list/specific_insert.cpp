#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = NULL, *temp;

    for(int i = 1; i <= 3; i++) {
        Node* newNode = new Node();
        newNode->data = i;
        newNode->next = head;
        head = newNode;
    }

    int val, pos;
    cin >> val >> pos;

    Node* newNode = new Node();
    newNode->data = val;

    temp = head;
    for(int i = 1; i < pos - 1; i++)
        temp = temp->next;

    newNode->next = temp->next;
    temp->next = newNode;

    temp = head;
    while(temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}
