#include<iostream>


class node{

    public:
     int value;
     node* next;

  node(int Value){
    this->value = Value;
    this->next = nullptr;
  }
   
};

class Circulerlinkedlist{
    public: 
    node* head;

    Circulerlinkedlist(){
        head = NULL;
    }

    public: 

    void CreateNode(int value){
        node* Temp = new node(value);

        if(head == NULL){
            head = Temp;
            return;
        }

        node* last = head;

        while(last->next != nullptr){
            last = last->next;
        }

        last->next = Temp;
    }

    void Display(){
        node* temp = head;

        while(temp->next != nullptr){
            std::cout<< temp->value + "->" ;
            temp = temp->next;
        }
    }

};


int main(){

    Circulerlinkedlist l1;

    l1.CreateNode(10);
    l1.CreateNode(20);
    l1.CreateNode(30);
    l1.CreateNode(40);

    l1.Display();

    return 0;
}
