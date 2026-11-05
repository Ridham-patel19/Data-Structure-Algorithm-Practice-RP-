#include<iostream>
using namespace std;

void swap(int arr[] ,int swapIndex ,int i){
   int temp = arr[swapIndex];
   arr[swapIndex] = arr[i];
   arr[i] =temp;
}

int pivot(int arr[] , int pivotIndex , int endIndex){
    int swapIndex = pivotIndex;
    for(int i = pivotIndex ; i <= endIndex; i++){
        if(arr[pivotIndex] > arr[i]){
            swapIndex++;
            swap(arr , swapIndex , i);
        }
    }
    swap(arr ,swapIndex , pivotIndex);
    return swapIndex;
}

void quickSort(int arr[] , int leftIndex , int rightIndex){
    if(leftIndex>=rightIndex)return;
    int pivotIndex = pivot(arr , leftIndex , rightIndex);

    quickSort(arr , leftIndex , pivotIndex-1);
    quickSort(arr , pivotIndex + 1 , rightIndex);
}

int main(){
    int arr[] = {2,4,1,5,3,};

   quickSort(arr , 0 , 4);

    for(int a : arr){
        cout<<a <<", ";
    }
}