#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int value;
    Node*left;
    Node*right;

    Node(int value){
        this->value=value;
        left=NULL;
        right=NULL;
    }

};


int main(){
    Node *root=new Node(1);

    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    
}