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

class linkedlist{
    public: 
    node* head;

    linkedlist(){
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


    public:
    void insertHead(int value){
  node* Temp = new node(value);

        if(head == NULL){
            head = Temp;
            return;
        }

        node* onHead = head;

        Temp->next = head;

        head = Temp;


    }


    // at specific index position
    public:
    void InsertAnywhere(int value , int pos){
          node* Temp = new node(value);

        if(pos == 0){
            Temp->next = head;
            head = Temp;
            return;
        }    
            node* current = head;
        for(int i = 0 ; i<pos-1 ; i++){
            current = current->next;
         if(current == nullptr){
            std::cout<<"Invalide position";
            return;
         }

        }

 Temp->next = current->next;
        current->next = Temp;

       


    }

    void Display(){
        node* temp = head;

        while(temp!= nullptr){
            std::cout<< temp->value << "->" ;
            temp = temp->next;
        }
    }

};


int main(){

    linkedlist l1;

    l1.CreateNode(10);
    l1.CreateNode(20);
    l1.CreateNode(30);
    l1.CreateNode(40);

    l1.Display();

    return 0;
}
