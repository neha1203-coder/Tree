 // using class
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data; 
//     Node* left;
//     Node* right;

//     //constructor
//     Node(int val){
//         data = val;
//         left = right = NULL;
//     }
// };
// int main(){
//     Node* root = new Node(10);
//     root->left = new Node(20);
//     root->right = new Node(30);

//     cout<< "Root : " << root->data << endl;
//     cout << "Left child: " << root->left->data << endl;
//     cout << "Right child: " << root->right->data << endl;
//     return 0;
// }


 //using structure
 #include <iostream>
 using namespace std;
 struct Node{
    int data;
    Node* left;
    Node* right;
 };
 int main(){
    Node* root = new Node{10,NULL,NULL};
    root->left = new Node{20,NULL,NULL};
    root->right = new Node{30,NULL,NULL};

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    return 0;
 }
