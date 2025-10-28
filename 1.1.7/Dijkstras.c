#include <limits.h> 
#include <stdio.h>
#define MAX 20
int V, E;
int graph[MAX][MAX];
#define INFINITY 99999
void printPath(int parent[], int j){
	int path[MAX];
	int pathIndex = 0;


	while(j != -1){
		path[pathIndex++] = j;
		j = parent[j];
	}


	for(int i = 0; i < pathIndex ; i++){
		printf("%d", path[i]);
		if(i < pathIndex - 1){
			printf("<-");
		}
	}
}
void dijkstra(int G[MAX][MAX], int n, int startnode) {
int distance[MAX];
	int visited[MAX] = {0};
	int parent[MAX];


	for(int i = 1; i <= n; i++){
		distance[i] = INFINITY;
		parent[i] = -1;
	}
	distance[startnode] = 0;

} 