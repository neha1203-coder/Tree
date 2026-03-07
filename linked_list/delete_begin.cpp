#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 10;
    head->next = new Node();
    head->next->data = 20;
    head->next->next = NULL;

    Node* temp = head;
    head = head->next;
    delete temp;

    cout << head->data << " -> NULL";
    return 0;
}
