
 #include<iostream>
 #include<vector>
 using namespace std;


 class solution{
    public:
     vector<int> num1 = {1,2,3,0,0};
     vector<int> num2 = {4,5};
     int m = 3;
     int n = 2;
     int p1 = m-1,p2 = n-1,p = m+n-1;

     void ans(){
          while(p1>=0 && p2>=0){
            if(num1[p1]>num2[p2]){
                num1[p] = num1[p1];
                p1--;
            }else{
                num1[p] = num2[p2];
                p2--;
            }
            p--;
          }

          while(p2>=0){
            num1[p] = num2[p2];
            p2--;
            p--;
          }
          
           for (int x : num1) cout << x << " ";
        cout << endl;
     }

 };

 int main(){
     solution obj1;

     obj1.ans();
 }