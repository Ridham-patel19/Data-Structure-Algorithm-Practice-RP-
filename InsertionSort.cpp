#include<iostream>
using namespace std;

void insertionSort(int arr[] , int size){
    for(int i = 1 ; i < size ; i++){
        int temp = arr[i];
        int j = i - 1;

        while(j > -1 && arr[j]>temp){
            arr[j+1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}


int main(){
    int arr[] = {5,4,3,2,1};
 int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);

    for(int a : arr){
        cout<<a<<", ";
    }
}