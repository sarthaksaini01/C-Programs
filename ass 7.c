#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Structure to represent a graph
struct Graph {
 int numVertices;
 int adjMatrix[MAX][MAX]; };
// Queue implementation for BFS
struct Queue {
 int items[MAX];
 int front; int rear; };
 // Create a queue
struct Queue* createQueue() {
 struct Queue* q = (struct 
Queue*)malloc(sizeof(struct Queue));
 q->front = -1;
 q->rear = -1; return q; }
// Check if the queue is empty
int isEmpty(struct Queue* q) {
 if (q->rear == -1)
 return 1; return 0; }
void enqueue(struct Queue* q, int value) {
 if (q->rear == MAX - 1)
 printf("\nQueue is full!!");
 else {
 if (q->front == -1)
 q->front = 0; q->rear++;
 q->items[q->rear] = value; } }
// Dequeue
int dequeue(struct Queue* q) {
 int item;
 if (isEmpty(q)) {
 printf("Queue is empty");
 item = -1; } 
 else { item = q->items[q->front];
 q->front++;
 if (q->front > q->rear) {
 q->front = q->rear = -1; } }
 return item; }
// Create a graph
struct Graph* createGraph(int vertices) {
	int i,j;
 struct Graph* graph = (struct 
Graph*)malloc(sizeof(struct Graph));
 graph->numVertices = vertices;
 for (i = 0; i < vertices; i++)
 for (j = 0; j < vertices; j++)
 graph->adjMatrix[i][j] = 0;
 return graph; }
// Add edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
	int i,j;
 graph->adjMatrix[src][dest] = 1;
 graph->adjMatrix[dest][src] = 1; }
// BFS algorithm
void bfs(struct Graph* graph, int startVertex) {
	int i,j;
 struct Queue* q = createQueue();
 int visited[MAX];
 for (i = 0; i < graph->numVertices; i++)
 visited[i] = 0;
 visited[startVertex] = 1;
 enqueue(q, startVertex);
 while (!isEmpty(q)) {
 	int currentVertex = dequeue(q);
 printf("%d ", currentVertex);
 for (i = 0; i < graph->numVertices; i++) {
if (graph->adjMatrix[currentVertex][i] == 1 
&& !visited[i]) {
visited[i] = 1; enqueue(q, 
i); } } } }
int main() {
 struct Graph* graph = createGraph(6);
 addEdge(graph, 0, 1);
 addEdge(graph, 0, 2);
 addEdge(graph, 1, 2);
 addEdge(graph, 1, 4);
 addEdge(graph, 2, 3);
 addEdge(graph, 4, 5);
 printf("Breadth-First Search starting from vertex 0:\n");
 bfs(graph, 0); return 0; }
