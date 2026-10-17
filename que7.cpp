#include<iostream>
#include<vector>

using namespace std;

/*  add array to integer k 
suppose arr={1,2,3} and k=123 then output will be (we have to use vector) arr={2,4,6}*/
int main(){

    vector<int> num={3,2,3};
    int k=12346;
     int temp;

     int len=sizeof(num)/sizeof(num[0]);

     for(int i=len-1;i>=0;i--){
          temp=num[i]+k;

          num[i]=temp%10;

          k=temp/10;
     }

     while(k>0){
        num.insert(num.begin(),k%10);
        k=k/10;
     }

for(int j:num){
    cout<<j<<"\t";
}
     


}