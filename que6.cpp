#include<iostream>
#include<vector>
using namespace std;


int main(){

    int arr[]={1,2,3,4,5};
    int target=7;
    vector <int> ans;


    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        for(int j=i+1;j<sizeof(arr)/sizeof(arr[0]);j++)
        {
            if(arr[i]+arr[j]==target){

                ans.push_back(arr[i]);

                ans.push_back(arr[j]);

            }
        }
    }


    for(int vec : ans){
        cout<<vec;
    }


}