 #include<iostream>
 #include<unordered_map> 
 #include<string>
 using namespace std;


 class solution {
    public:
    string s;
    int l;
    int result = 0;

    unordered_map<char, int> roman;
    solution(){

         s = "LVIII";
         l = s.size();

    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    }

    int results(){
        for(int i=l-1;i>=0;i--){

             if(roman.find(s[i]) !=  roman.end()) {
                
                  result = result + roman[s[i]];

             } 
        }
        return result;
    }


 };

 int main(){
      solution obj;

      cout<<obj.results();
 }