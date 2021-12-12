
//Code by https://github.com/thuongtruong1009

#include<iostream>
#include<vector>
#define NODE 10
using namespace std;
int graph[NODE][NODE] = {{0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
   {1, 0, 1, 1, 1, 0, 0, 0, 0, 0},
   {1, 1, 0, 0, 1, 1, 0, 0, 0, 0},
   {0, 1, 0, 0, 1, 0, 1, 1, 0, 0},
   {0, 1, 1, 1, 0, 1, 0, 1, 1, 0},
   {0, 0, 1, 0, 1, 0, 0, 0, 1, 1},
   {0, 0, 0, 1, 0, 0, 0, 1, 0, 0},
   {0, 0, 0, 1, 1, 0, 1, 0, 1, 0},
   {0, 0, 0, 0, 1, 1, 0, 1, 0, 1},
   {0, 0, 0, 0, 0, 1, 0, 0, 1, 0}};
void traverse(int u, bool visited[]) {
   visited[u] = true;     //mark v as visited
   for(int v = 0; v<NODE; v++) {
      if(graph[u][v]) {
         if(!visited[v])
            traverse(v, visited);
      }
   }
}
bool isConnected() {
   bool *vis = new bool[NODE];
   //check all vertex u as start point whether are visible or not
   for(int u; u < NODE; u++) {
      for(int i = 0; i<NODE; i++)
         vis[i] = false;     //initialize as no node is visited
         traverse(u, vis);
      for(int i = 0; i<NODE; i++) {
         if(!vis[i])     //if there is a node, not visited by traversal, graph is not connected
            return false;
      }
   }
   return true;
}
bool isEulerCircuit() {
   if(isConnected() == false) {     //when graph is not connected
      return false;
   }
   vector<int> inward(NODE, 0), outward(NODE, 0);
   for(int i = 0; i<NODE; i++) {
      int sum = 0;
      for(int j = 0; j<NODE; j++) {
         if(graph[i][j]) {
            inward[j]++;     //increase inward edge for destination vertex
            sum++;
         }
      }
      outward[i] = sum;
   }
   if(inward == outward)
         return true;
   return false;
}
int main() {
   if(isEulerCircuit())
      cout << "Euler Circuit is alrealdy found.";
   else
     cout << "There is no have Euler Circuit.";
}
