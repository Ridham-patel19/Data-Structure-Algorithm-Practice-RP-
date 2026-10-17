#include<iostream>
using namespace std;



int fibonacci(int x){

    if(x==0||x==1){
       return x;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }

    

   
}

int main(){

    int n=18;

    for(int i=0;i<=n;i++){

    cout<<fibonacci(i)<<"\t";
    }
   
}