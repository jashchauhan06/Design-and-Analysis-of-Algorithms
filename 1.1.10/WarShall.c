#include <stdio.h>
#define INF 99999
#define MAX_N 20 // Maximum value for N
void floysWarshall(int dist[MAX_N][MAX_N], int n){
	for (int k=0; k<n; k++){
		for (int i=0; i<n; i++){
			for (int j=0; j<n; j++){
				if (dist[i][k] + dist[k][j] < dist[i][j]){
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
		}
	}

void printMatrix(int dist[MAX_N][MAX_N], int n){
	printf("The following matrix shows the shortest distances between all pairs of the vertices.\n");
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (dist[i][j] == INF)
				printf("%5s", "INF");
			else
				printf("%5d", dist[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int n, e;
	int dist[MAX_N][MAX_N];

	printf("Enter the number of vertices : ");
	scanf("%d", &n);
	printf("Enter the number of edges : ");
	scanf("%d", &e);
}