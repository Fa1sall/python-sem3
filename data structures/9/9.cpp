#include <iostream>

using namespace std; 

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
    	data=value;
    	left=NULL;
    	right=NULL;
	}
};

Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }
    return root;
}

void preOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root) {
    if (root == NULL) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main() {
    Node* root = NULL;
    int n, data;

    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements \n";
    for (int i = 0; i < n; i++) {
    	cout<<"Element "<<i+1<<": ";
        cin >> data;
        root = insert(root, data);
    }

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;

    cout<<"\n------Done By:-------"<<endl;
    cout<<"Faisal Irfan"<<endl;
    cout<<"220071601063"<<endl;
    cout<<"B.Tech CSE - A"<<endl;
    return 0;
}
