#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10
struct Vertex{
   char label;
   bool visited;
};
int queue[MAX];
int rear = -1;
int front = 0;
int queueItemCount = 0;
struct Vertex* lstVertices[MAX];
int adjMatrix[MAX][MAX];
int vertexCount = 0;
void insert(int data){
   queue[++rear]=data;
   queueItemCount++;
}
int removeData(){
   queueItemCount--;
   return queue[front++]; 
}
bool isQueueEmpty(){
   return queueItemCount==0;
}
void addVertex(char label){
   struct Vertex* vertex=(struct Vertex*) malloc(sizeof(struct Vertex));
   vertex->label=label;  
   vertex->visited=false;     
   lstVertices[vertexCount++]=vertex;
}
void addEdge(int start,int end) {
   adjMatrix[start][end] = 1;
   adjMatrix[end][start] = 1;
}
void displayVertex(int vertexIndex){
   printf("%c",lstVertices[vertexIndex]->label);
}       
int getAdjUnvisitedVertex(int vertexIndex) {
   int i;
   for(i = 0; i<vertexCount; i++){
    if(adjMatrix[vertexIndex][i] == 1 && lstVertices[i]->visited == false)
        return i;
   }
   return -1;
}
void breadthFirstSearch(){
   int i;
   lstVertices[0]->visited = true;
   displayVertex(0);  
   insert(0);
   int unvisitedVertex;
   while(!isQueueEmpty()){
      int tempVertex = removeData();   
      while((unvisitedVertex = getAdjUnvisitedVertex(tempVertex))!=-1){    
        lstVertices[unvisitedVertex]->visited = true;
        displayVertex(unvisitedVertex);
        insert(unvisitedVertex);               
        }
    }         
   for(i=0;i<vertexCount;i++){
      lstVertices[i]->visited=false;
   }    
}
int main(){
   int i, j;
   for(i = 0; i<MAX; i++){
    for(j = 0; j<MAX; j++){
        adjMatrix[i][j] = 0;
        }
    } 
   addVertex('A');   
   addVertex('B');   
   addVertex('C');   
   addVertex('D');
   addVertex('E');
   addVertex('F');
   addVertex('G');
   addVertex('H');
   addVertex('I');
   addEdge(1,4);    
   addEdge(1,7);    
   addEdge(1,6);    
   addEdge(1,2);    
   addEdge(2,1);   
   addEdge(2,3);
   addEdge(2,6);
   addEdge(3,2);
   addEdge(3,5);
   addEdge(4,1);
   addEdge(4,8);
   addEdge(4,9);
   addEdge(5,3);
   addEdge(5,9);
   addEdge(6,1);
   addEdge(6,2);
   addEdge(7,1);
   addEdge(8,4);
   addEdge(8,9);
   addEdge(9,4);
   addEdge(9,5);
   addEdge(9,8);    
   printf("\nBreadth First Search: ");
   breadthFirstSearch();
   return 0;
}