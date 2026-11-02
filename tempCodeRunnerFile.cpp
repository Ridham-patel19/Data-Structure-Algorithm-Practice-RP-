#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* left;
    Node* right;

    Node(int value){
        this->value = value;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BST{

    public:
    Node* root;

    BST(){
        this->root = nullptr;
    }

public:
void insert(int value , Node*& root){
    

    if(root == nullptr){
       root = new Node(value);;
        return;
    }

   
   if(value <= root->value){
    insert(value , root->left);
   }else{
    insert(value , root->right);
   }


}

public:
void display(Node* root){
    if(root == nullptr){
        
        return;
    }


   cout<<root->value<<"->";

   display(root->left);

   
   display(root->right);


    

   
}

public:
bool isExist( Node* head , int val){
    if(head == nullptr) return false;

    while(true){
        if(head == nullptr) return false;
        if(head->value == val) return true;

        if(val < head->value){
            head = head->left;
        }else{
            head = head->right;
        }


    }

    return false;
}


Node* deleteNode(Node* root , int value){
    if(root == nullptr)return nullptr;
    if(value < root->value){
          root->left = deleteNode(root->left , value);
    }else if(value > root->value){
        root->right = deleteNode(root->right , value);
    }else{
        if(root->left == nullptr && root->right == nullptr){
            root = nullptr;
            return root;
        }else if(root->left == nullptr){
            Node* temp = root->right;

            delete(root);

            return temp;
        }else if(root->right == nullptr){
            Node* temp = root->left;
            delete(root);
            return temp;
        }else{
           int minVal = minValInTree(root->right);
           root->value = minVal;
           root->right = deleteNode(root->right , minVal);
        }
         
    }
   return root;
}

public:
int minValInTree(Node* root){
   if(root->left == nullptr) return root->value;
   return minValInTree(root->left);
}

};

int main(){
    BST b1;

    b1.insert(18 , b1.root);
    b1.insert(29 , b1.root);
     b1.insert(32 , b1.root);
    b1.insert(34 , b1.root);
     b1.insert(1 , b1.root);
    b1.insert(2 , b1.root);
     b1.deleteNode(b1.root , 29);
//   cout<<" 1 means exist 0 means no :" << b1.isExist(b1.root ,18) << endl;
    b1.display(b1.root);

//    cout<< b1.minValInTree(b1.root);



}