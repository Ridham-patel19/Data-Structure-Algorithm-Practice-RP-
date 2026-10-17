 #include<iostream>
#include<vector>
#include<algorithm>
 using namespace std;


 class solution{
    public:
     vector<int> prices = {7,1,4,3,15};

     int l = prices.size();
     int minprice;
     int index;
     int profit;
     int results(){
        minprice = prices[0];
     for(int i = 0 ; i<=l-1 ; i++){
          if(prices[i]<minprice){
            minprice = prices[i];
            index = i;
          }

    
     }

     if(minprice == prices[l-1]){
        return 0;
     }
     profit = prices[index+1]-prices[index];
     for(int i = index+1 ; i<= l-1 ; i++){
        

        profit = max(profit , prices[i]-prices[index]);

     }

     return profit;
     

    
    }



    
 };


 int main(){
    solution obj;
    cout<<obj.results();
 }