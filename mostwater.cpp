// most water in conatiner


#include<iostream>
using namespace std;

int maxarea(int arr[],int len){
    
    int i=0;// left side
    int j=len-1;// right side
    int maxarea=0;
    int curarea;

    while (i<j){

        curarea = min(arr[i],arr[j])*(j-i);
         maxarea = max(curarea,maxarea);
        if (arr[i]>arr[j]){
             j--;
        }else{
            i++;
        }
    }
    return maxarea;
};

int main(){
   
    int arr[8]= {2,6,8,1,5,12,2,18};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<maxarea(arr,len);
   
}