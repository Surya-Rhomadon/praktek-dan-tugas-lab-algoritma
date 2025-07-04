#include<iostream>
using namespace std;

//struktur node untuk binary tree
struct Node {
	int data;
	Node* left;
	Node* right;
};

//fungsi untuk membuat node baru
Node* newNode(int data) {
	Node* node = new Node();
	node->data = data;
	node->left = nullptr;
	node->right = nullptr;
	return node;
}

//fungsi untuk menyisipkan node ke dalam BST
Node* insert(Node* root, int data){
	if(root == nullptr){
		return newNode(data);
	}
	
	if(data<root->data)
	root->left=insert(root->right, data);
	else
	root->right = insert(root->right, data);
	return root;
}

//fungsi pre order traversal
void preOrder(Node* root){
if(root != nullptr){
cout<<root->data<<" ";
preOrder(root->left);
preOrder(root->right);	
	}
}

//fungsi in order traversal
void inOrder(Node* root){
	if(root != nullptr){
		inOrder(root->left);
		cout<<root->data<<" ";
		inOrder(root->right);
	}
}

//fungsi post order traversal
void postOrder(Node* root){
	if(root != nullptr){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<" ";
	}
}

int main() {
	Node* root = nullptr;
	
	//input angka sesuai soal
	int values[] = {12, 16, 20, 24, 32};
	for(int val : values) {
		root = insert(root, val);
	}
	
	cout<<"pre order traversal : ";
	preOrder(root);
	cout<<endl;
	
	cout<<"in order traversal : ";
	inOrder(root);
	cout<<endl;
	
	cout<<"post order traversal : ";
	postOrder(root);
	cout<<endl;
	
	return 0;
}