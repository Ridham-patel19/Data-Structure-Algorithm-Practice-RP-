#include<iostream>
using namespace std;

int  tribonacci(int x){

    if(x==0||x==1||x==2){
        return x==0?0:1;
    }else{
        return tribonacci(x-1)+tribonacci(x-2)+tribonacci(x-3);
    }
};




int main(){

    int n=5;
        for(int i=0;i<=n;i++){

   cout<<tribonacci(i)<<"\t";
        }
}