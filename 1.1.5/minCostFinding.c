#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define V 100

int minKey(int key[], bool mstSet[], int vertices) {
	// Write your code here...
	int min = INT_MAX, min_index;
	for (int v = 0; v  < vertices; v++){
		if (!mstSet[v] && key[v] < min){
			min = key[v];
			min_index = v;
		}
	}
	return min_index;



}
void printTree(int parent[], int graph[V][V], int vertices) {
    printf("Edge \tWeight\n");
    for (int i = 1; i < vertices; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}

void prim(int graph[V][V], int vertices) {
	// Write your code here...
	int parent[V];
	int key[V];
	bool mstSet[V];
	for (int i = 0; i<vertices; i++){
		key[i] = INT_MAX;
		mstSet[i] = false;
	}
	key[0] = 0;
	parent[0] = -1;
}