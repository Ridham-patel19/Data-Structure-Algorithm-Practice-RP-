#include<iostream>>
using namespace std;

void selectionSort(int arr[] , int size){
    for(int i = 0 ; i< size ; i++){
        int minValue = i;
        for(int j = i+1 ; j < size ; j++){
            if(arr[minValue] > arr[j]){
                minValue = j;
            }
        }
if(arr[i] != arr[minValue]){
        int temp = arr[minValue];
        arr[minValue] = arr[i];
        arr[i]  = temp;
}
    }
}


int main(){
    int arr[] = {5,4,3,2,1};
 int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);

    for(int a : arr){
        cout<<a<<", ";
    }
}