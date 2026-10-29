#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
using namespace std;




class Graph{
    public:
  unordered_map<string, unordered_set<string>> mp;
   
public:
  bool addVertex(string vertex){
    if(mp.count(vertex) == 0){
        mp[vertex];
        return true;
    }else{
        return false;
    }
  }

  public:
   void printGraph(){
        for(auto& pair : mp){
            string key = pair.first;
            cout<<key<<" : "<<"[";
            for(const string& v : mp[key]){
                 cout<<v<<" ";
            }
            cout<<" ]"<<endl;
        }
   }

   public:
   bool addEdge(string e1 , string e2){
       if(mp.count(e1) != 0 && mp.count(e2) != 0){
            mp[e1].insert(e2);
            mp[e2].insert(e1);
            return true;
       }

       return false;
   }

   public:
   bool removeEdge(string e1 , string e2){
     if(mp.count(e1) != 0 && mp.count(e2) != 0){
            mp[e1].erase(e2);
            mp[e2].erase(e1);
            return true;
       }
   }

   public:
   bool removeVertex(string vertex){
     if(mp.count(vertex) == 0 )return false;

     for(auto& edge: mp[vertex] ){
        mp[edge].erase(vertex);
     }
     mp.erase(vertex);
     return true;
   }

};


int main(){
    Graph graph;

    graph.addVertex("A");
    graph.addVertex("B");
    graph.addVertex("C");

    graph.addEdge("A" , "B");
    graph.addEdge("A" , "C");
    // graph.removeEdge("A" , "B");

    graph.removeVertex("C");
    graph.printGraph();

}