#include<iostream>
using namespace std;

//if given num is matching with power of 2
int main(){

    int n=1;

    if(n<0){
        cout<<"invalide";
    }else if(n==1){
        cout<<"valid";

        return 0;
    }

    while(n%2==0){

        n=n/2;

       

    }

    if(n==1){
        cout<<"valid";
    }else{
        cout<<"invalide";
    }

    return 0;
}