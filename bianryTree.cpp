

// Pass by value: the parameter gets a copy of the value.
// Pass by reference: the parameter becomes another name/alias for the original variable.


#include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
    
};


 class  Tree{
    public: 
    static void  insert(Node*& head , int data){
            
            // Node* temp = head;
            if(head == nullptr){
                head = new Node(data);
                return;
            }
            //  Node* temp = head;
         if(data <= head->data){
            
            insert(head->left , data);
         }else{
            // head = head->right;
            insert(head->right , data);
         }
    }


   static void print(Node* head){
        if(head == nullptr){
            return;
        }
        
        print(head->left);

        cout<<head->data<<endl;
         
        print(head->right);
    }
 };

 int main(){
    Node* head = nullptr;
    Tree::insert(head, 10);
    Tree::insert(head , 50);
    Tree::insert(head , 70);
    Tree::insert(head , 30);
    Tree::insert(head , 90);

    Tree::print(head);

 }

