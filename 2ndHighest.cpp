#include<stdio.h>
#include<conio.h>
#include<iostream>
using  namespace std;

int main(){
    int arr[10] = {4 , 88 , 9 , 1 , 2 , 99  , 66 , 99 , 88 ,77 };

    int max = INT32_MAX;
    int secnodMax = INT32_MIN;
    int result;



    int l = sizeof(arr)/sizeof(arr[0]);

    int j = 0 ;
    int k = l-1;
   

    while(j<k)
    {
           if(arr[j] > arr[k]){
             max = arr[j] ;

             
             
            
             if(secnodMax < arr[k]){
                       secnodMax = arr[k];
             }
             k--;
           }

           else{
             max = arr[k] ;
             secnodMax = arr[j];
             j++;
           }

           if(max <= secnodMax){
            secnodMax = max;
            result = secnodMax;
           }

           result = secnodMax;

          



    }

    cout << result;
    
}