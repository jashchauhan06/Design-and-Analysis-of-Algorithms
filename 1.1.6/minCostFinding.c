#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int find(int parent[], int i) {
	if(parent[i] != i){
		parent[i] = find(parent, parent[i]);
	}
	return parent[i];
}


void union1(int parent[], int rank[], int i, int j) {
	int ri = find(parent, i);
int rj = find(parent, j);

	if(rank[ri] < rank[rj]){
		parent[ri]=rj;
	}else if (rank[ri]>rank[rj]){
		parent[rj]=ri;
	}else{
		parent[rj]=ri;
		rank[ri]++;
	}
}

void kruskalMST(int **cost, int V) {
	int parent[V];
	int rank[V];
	for(int i=0;i<V;i++){
		parent[i]=i;
		rank[i]=0;
	}

	int minCost=0;
	int edgeCount=0;

}