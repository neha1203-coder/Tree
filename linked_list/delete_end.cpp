#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node *head = new Node(), *temp;
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = NULL;

    temp = head;
    while(temp->next->next != NULL)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;

    temp = head;
    while(temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
    return 0;
}
