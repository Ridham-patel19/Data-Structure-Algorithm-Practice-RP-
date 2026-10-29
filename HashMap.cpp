#include<iostream>
using namespace std;

class Node{
    public:
    string key;
    int val;
    Node* next;


    Node(string key ,  int val ){
        this->key = key;
        this->val = val;
        this->next = nullptr;
    }
};


class HashMap{
    private:
    static const int SIZE = 7;
    Node* datamap[SIZE];

    

    public:
    void print(){
        for(int i = 0 ; i < SIZE ; i++){
            cout<<i<<": ";

           

            Node* curr = datamap[i];


            while(curr){
                
                cout<< curr->key << " : "<<curr->val << "->";

                curr = curr->next;
            }

            cout<<endl;


        }
    }


    int hash(string key){
        int hash = 0 ;
        for(int i = 0; i < key.length() ; i++){
            int asciiVal = int(key[i]);

            hash = (hash + asciiVal * 23) % SIZE;
        }

        return hash;
    }

    void set(string key , int val){
        int index = hash(key);

        Node* newNode = new Node(key , val);

        

        if(datamap[index] == nullptr){
            datamap[index] = newNode;
            return;
        }
        Node* temp = datamap[index];

        while(temp->next != nullptr){
            temp = temp->next;

        }

        temp->next = newNode;
    }
    

    int get(string key){
        int index = hash(key);

        Node* temp = datamap[index];

        while (temp != nullptr){
            if(temp->key == key)return temp->val;
           temp = temp->next; 

        }
        cout<<"Not exist : ";
        return 0;
    }
};

int main(){
      HashMap* map = new HashMap();
     map->set("Ridham" , 40000);
     cout<<map->get("Ridham");
     cout<<endl;
     cout<<map->get("sdhjkadhgsa");
    //   map->print();


      
}