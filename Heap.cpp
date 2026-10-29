#include<iostream>
#include<vector>
using namespace std;

class Heap{
    private:
    vector<int> heap;

    private:
    int leftChild(int index){
        return index * 2 + 1;

    }

    private:
    int rightChild(int index){
        return index * 2 + 2;
    }


    private:
    int parent(int index){
        return (int) (index - 1) / 2 ;
    }



    private:
    void swap(int index1 , int index2){
                int temp = heap[index1];
                heap[index1] = heap[index2];
                heap[index2] = temp;
                
    }

public:
    void insert(int value){
        heap.push_back(value);
        int current = heap.size() - 1 ;

        while(current > 0 && heap[current] > heap[parent(current)]){
            swap(current , parent(current));
            current = parent(current);
        }
    }


    public:
    int remove(){
        if(heap.size() == 0){
            return INT8_MIN;
        }
         int maxValue = heap.front();
        if(heap.size() == 1){
        heap.pop_back();
        }else{
            heap[0] = heap.back();
            heap.pop_back();
            sinkDown(0);
        }



        return maxValue;
    }


    private:
    void sinkDown(int index){
        int current = index;
        int large = current;
       while(true){
          int leftIndex = leftChild(current);
          int rightIndex = rightChild(current);
          
         if(leftIndex < heap.size() && heap[current] < heap[leftIndex]){
           large = leftIndex;
          
         }

         if(rightIndex < heap.size() && heap[current] < heap[rightIndex]){
            large = rightIndex;
            
         }

         if(current == large){
            return;
         }

         
 swap(current , large);
 current = large;
       }
      
    }

    public:
    void printHeap(){
        for(int a : heap){
            cout<< a << " , " ;
        }
    }
};


int main(){
    Heap myHeap;
myHeap.insert(21);

myHeap.insert(34);
myHeap.insert(45);
myHeap.insert(6516);


myHeap.remove();
myHeap.printHeap();
   
}