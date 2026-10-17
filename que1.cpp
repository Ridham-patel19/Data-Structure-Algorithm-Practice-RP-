 #include<iostream>
 using namespace std;

 int  reverse(int x,int& rnum){

//palindrome num 
int c;
     
   while(x>0){

      c = x%10;

     rnum=rnum*10+c;

     x=x/10;


   }
   
  return rnum;

 };

 int main(){


     int num=-121;
     int rnum=0;

    reverse(num,rnum);

  

    if(rnum==num){

        cout<<"its palindrome num";

    }
    else if(num<0){
        
        cout<<"false";
        
       }else{
        cout<<"its not";
    }

  return 0;
}

