#include<iostream>
using namespace std;


//this is just helping funx its just take 2 sort array and merge it one     
void merge(int arr[] , int left , int mid , int right){
    int leftArrSize = mid - left + 1 ;
    int rightArrSize = right - mid ;

    int leftArr[leftArrSize];
    int rightArr[rightArrSize];

    for(int i = 0; i<leftArrSize ; i++){
        leftArr[i] = arr[left + i];
    }
    for(int i = 0 ; i < rightArrSize ; i++){
        rightArr[i] = arr[mid + i + 1];

    }
int i = 0;
int index = left;
int j = 0;
    while(i < leftArrSize && j < rightArrSize){
        if(leftArr[i] <= rightArr[j]){
            arr[index] = leftArr[i];
            i++;
            index++;
        }else{
            arr[index] = rightArr[j];
            j++;
            index++;
        }
    }

    while(i<leftArrSize){
        arr[index] = leftArr[i];
        i++;
        index++;
    }

      while(j<rightArrSize){
        arr[index] = rightArr[j];
        j++;
        index++;
    }
}
void mergeShort(int arr[] , int left , int right){
    if(left >= right)return;
    int mid = left + (right - left)/2;

    mergeShort(arr , left , mid);
    mergeShort(arr , mid+1 , right);

    merge(arr , left , mid , right);
}
int main(){
    int arr[] = {5,3,1,2,4};

//here are passing inclusive index so start with 0 and end with 4
    mergeShort(arr , 0 , 4);
    cout<<endl;

    for(int a : arr){
        cout<<a<<", ";
    }

}