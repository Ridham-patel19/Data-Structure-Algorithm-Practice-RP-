#include<iostream>
using namespace std;

int totalbottle(int total,int exchange,int& a){

   a=total;
  while(total>=exchange){
   int newbottle=total/exchange;
   int rembottle=total%exchange;

   a=a+newbottle;
   total=newbottle+rembottle;

}

return a;
}


int main(){

    int totalofbottles=15;
    int exchangebottles=4;
    int ans=0;

    cout<<totalbottle(totalofbottles,exchangebottles,ans);
}