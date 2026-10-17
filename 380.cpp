 #include<iostream>
#include<vector>
#include<algorithm>
 #include<unordered_map>
 #include <cstdlib>
#include <ctime>
 using namespace std;


 class solution {
    public: 
    vector<int> arr;
    unordered_map<int,int> map; // value : index

    solution(){
      //  to clesr bpth of them
           map.clear();
        arr.clear();
    }

    bool insert(int value){
        if(map.find(value) != map.end()){
            return false;
        }
        arr.push_back(value); // 
        map[value] = arr.size() - 1;
        return true ;

    }

    bool remove(int value) {
        if(map.find(value) != map.end()){
            int index = map[value];
            swap(arr[index],arr[arr.size()-1]);
            map[arr[arr.size()-1]] = index ;
            arr.pop_back();
            map.erase(value);

            return true;
        }
        return false;
    }

    int getrandom(){
         int index = rand() % arr.size();  // random index from 0 to arr.size()-1
         return arr[index]; 
    }

 };

 int main(){
     srand(time(0));
    solution obj;
    cout<<obj.insert(1);
     cout<<obj.insert(2);
      cout<<obj.insert(3);
      cout<<obj.insert(4);
      cout<<obj.insert(5);
      cout<<obj.insert(6);
       cout<<obj.insert(1);
       cout<<obj.remove(2);
       cout<<obj.getrandom();

       return 0;
 }