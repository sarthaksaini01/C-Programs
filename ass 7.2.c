#include <stdio.h> 
#include <stdlib.h> 
#define MAX 100 
// Structure to represent a graph 
struct Graph { 
int numVertices; 
int adjMatrix[MAX][MAX];    }; 
// Create a graph 
int i,j;
struct Graph* createGraph(int vertices) { 
struct Graph* graph = (struct 
Graph*)malloc(sizeof(struct Graph)); 
   graph->numVertices = vertices; 
    for (i = 0; i < vertices; i++) 
        for (j = 0; j < vertices; j++) 
            graph->adjMatrix[i][j] = 0; 
    return graph;    } 
 
// Add edge to the graph 
void addEdge(struct Graph* graph, int src, int dest) { 
    graph->adjMatrix[src][dest] = 1; 
    graph->adjMatrix[dest][src] = 1;     } 
 
// DFS algorithm 
int i;
void dfs(struct Graph* graph, int vertex, int visited[]) 
{ 
    visited[vertex] = 1; 
    printf("%d ", vertex); 
    for (i = 0; i < graph->numVertices; i++) { 
        if (graph->adjMatrix[vertex][i] == 1 && !visited[i]) { 
            dfs(graph, i, visited);           }         }       } 
 
int main() { 
    struct Graph* graph = createGraph(6); 
    addEdge(graph, 0, 1); 
    addEdge(graph, 0, 2); 
    addEdge(graph, 1, 2); 
    addEdge(graph, 1, 4); 
    addEdge(graph, 2, 3); 
    addEdge(graph, 4, 5); 
    int visited[MAX]; 
    for ( i = 0; i < 6; i++) 
        visited[i] = 0; 
   printf("Depth-First Search starting from vertex 0:\n"); 
    dfs(graph, 0, visited);     
    return 0;        }
