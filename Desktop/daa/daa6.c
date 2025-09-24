#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define INF 9999
int parent[50];
int find(int i )
{
	if (parent[i] == i)
	{
		return i;
	}
	else
	{
		return parent[i] = find(parent[i]);
	}
}
void unionSets(int u, int v)
{
	parent[u] = v;
}void kruskalMST(int **cost, int V)
{
	int edgeCount = 0, mincount = 0;
	for(int i = 0; i < V;i++)
		{
			parent[i] = i;
		}
	while(edgeCount < V-1)
		{
			int min = INF;
			int a = -1, b = -1;
			for(int i = 0;i<V;i++)
				{
					for(int j = 0; j < V;j++)
						{
						if(cost[i][j] < min)
							{
							min = cost[i][j];
							a = i;
							b = j;
							}
						}
				}
			
                int u = find(a);
                int v = find(b);
                if(u != v)
                {
                    printf("Edge %d:(%d, %d) cost:%d\n",edgeCount,a,b,min );
		unionSets(u,v);
		mincount += min;
		edgeCount++;
	}
	cost[a][b] = cost[b][a] = INF;
		}
        printf("Minimum cost= %d\n",mincount);
    }
    
    int main() {
        int V;
        printf("No of vertices: ");
        scanf("%d", &V);
    
        int **cost = (int **)malloc(V * sizeof(int *));
        for (int i = 0; i < V; i++)
            cost[i] = (int *)malloc(V * sizeof(int));
    
        printf("Adjacency matrix:\n");
        for (int i = 0; i < V; i++)
            for (int j = 0; j < V; j++)
                scanf("%d", &cost[i][j]);
    
        kruskalMST(cost, V);
    
        for (int i = 0; i < V; i++)
            free(cost[i]);
        free(cost);
    
        return 0;
    }