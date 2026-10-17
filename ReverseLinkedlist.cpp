#include<iostream>
using namespace std;

class Node{
    
    public:

    Node(int value){
        this->value = value;
        this->next = nullptr;
    }
    int value;
    Node* next;
};

class Linkedlist{

    public:
int length = 0 ; 


 void append(Node*& head , int value){
    Node* temp = new Node(value);

    if(head == nullptr){
        head = temp;
        length++;
        return;
    }
Node* cur = head;
  while(cur->next){
    cur = cur->next;
  }

  cur->next = temp;
  length++;
        return;
}

Node* reverse(Node* head){

    if(head == nullptr){
        return nullptr;
    }
    if(length  == 1){
       return head;
    }

    Node* before = nullptr;
    Node* after = head->next;

    for(int i = 0 ; i < length ; i++){
       
       after = head->next;
       head->next = before;
       before = head;
       head = after;



    }   

    head  = before;
   return head;
}
};

int main() {
    Linkedlist list;

    Node* head = nullptr;

    list.append(head, 1);
    list.append(head, 2);
    list.append(head, 3);
    list.append(head, 4);
    list.append(head, 5);

    cout << "Original list: ";

    Node* cur = head;
    while (cur != nullptr) {
        cout << cur->value << " ";
        cur = cur->next;
    }

    cout << endl;

    head = list.reverse(head);

    cout << "Reversed list: ";

    cur = head;
    while (cur != nullptr) {
        cout << cur->value << " ";
        cur = cur->next;
    }

    cout << endl;

    return 0;
}