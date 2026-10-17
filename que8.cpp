#include<iostream>
using namespace std;


int main(){
    int arr[]={1,5,4,5};
    //int maxval=INT8_MIN;
    int len=sizeof(arr)/sizeof(arr[0]);
    // int curval;
    // leet code 1464 (brute force method)
    // for(int i=0;i<=len-1;i++){
    //     for(int j=i+1;j<=len-1;j++){
    //          curval=(arr[i]-1)*(arr[j]-1);
    //          maxval=max(maxval,curval);
    //     }
    // }

    // cout<<maxval;
   


   //optimized method
    int max=INT8_MIN;
    int smax=INT8_MIN;

    for(int i=0;i<=len-1;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];

        }else if(arr[i]>smax){
            smax=arr[i];
        }
    }
  cout<<(max-1)*(smax-1);
}