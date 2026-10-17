#include <iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    public:
     Node(int val){
        this->val = val;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList{
    private:
    Node* head;
    
   
public:
    DoublyLinkedList(int val){
        Node* temp = new Node(val);
        this->head = temp;
        
       
    }


    public:
     Node* getHead(){
        return this->head;
    }

    public:
    void append(int val){
         Node* newNode = new Node(val);
        if(head == nullptr){
           head = newNode;
           return;
        }

        Node* temp = head;

        while(temp->next != nullptr){
            temp = temp->next ;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }


    public:
    void prepend(int val){
         Node* newNode = new Node(val);
        if(head == nullptr){
           head = newNode;
           return;
        }


        Node* temp = head;

        temp->prev = newNode;
        newNode->next = head;

        head = newNode;


        

    }

public:
    void printList(){
        if(head == nullptr){
            return;
        }
Node* temp = head;
        while(temp != nullptr){
            cout<< temp->val << "->";
            temp = temp->next;
        }
    }

public:
    void DeleteEnd(){
        if(head == nullptr){
          return;
        }
        if(head->next == nullptr){
            head = nullptr;
            return;
        }

        Node* temp = head;

        while(temp->next != nullptr){

            temp = temp->next ;
        }
        Node* last = temp;
        temp = temp->prev;
        temp->next = nullptr;

        delete last;
    }

    public:
    void DeleteFirst(){
        if(head == nullptr) return;
        if(head->next == nullptr){
            head = nullptr;
            return;
        }
       
        Node* temp = head;

        head = head->next;

        delete temp;



    }

    public:
    Node* get(int index){
        
       Node* temp = head;

       for (int i = 0; i < index; i++)
       {
        temp=temp->next;
        if(temp == nullptr){
            return nullptr;
        }
       }
       return temp;
       
    }

    public:
    void set(int index , int val){
        Node* temp = get(index);

        if(temp){
            temp->val = val;
        }else{
            cout<<"this index doesnot exist";
        }


    }


    public:
    void insert(int index , int val){
        Node* newNode = new Node(val);

         Node* temp = get(index);

        if(temp){
             Node* prev = temp->prev;

        prev->next = newNode;

        newNode->next = temp;

        temp->prev = newNode;
        }else{
            cout<<"this index doesnot exist";
        }

       
    }

    public: 
    void Delete(int index){
         Node* temp = get(index);

        if(temp){
            Node* prev = temp->prev;
               if(prev !=nullptr){
 prev->next = temp->next;
               }else{
                head = head->next;
               }
            if(temp->next != nullptr){
           
            temp->next->prev = prev;
            }
            
            delete temp;
        }else{
            cout<<"this index doesnot exist";
        }

    }
};




int main(){
    

    //new return pointer
    DoublyLinkedList* ddl = new  DoublyLinkedList(8);

    //DoublyLinkedList ddl(8);

   

    ddl->append(9);
    ddl->append(10);
    ddl->append(11);

    // ddl->printList();

    ddl->DeleteEnd();

    // ddl->printList();


    ddl->prepend(1);

  ddl->printList();

  cout<< endl;
    ddl->DeleteFirst();
      ddl->printList();

//        Node* node =  ddl->get(4);
// if(node == nullptr)cout<<"this index iasnot exist";
//        cout<<node->val;

//        ddl->insert(2 , 999);

ddl->Delete(5);
cout<<endl;
       ddl->printList();


}