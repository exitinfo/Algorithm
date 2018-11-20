#include<bits/stdc++.h>

using namespace std;
int A[1000][1000];
int visit[1000][1000];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m, b;
int res[1000][1000];
/*
int dfs(int x, int y){
	int co = 0;
	for(int i=0; i<4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<0 || ny < 0 || nx >= m || ny >= n) continue;
		if(A[ny][nx] == 0) co++;
	}
	return co;
}*/
int dfsa(int x, int y){
	visit[y][x] = 1;
//	int co = 0;
	for(int i=0; i<4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<0 || ny < 0 || nx >= m || ny >= n) continue;
		if(A[ny][nx] == 0) res[y][x]++;
		if(visit[ny][nx] == 1 || A[ny][nx] == 0) continue;
		dfsa(nx, ny);
	}
	return 0;
}

int main(){
	scanf(" %d %d", &n, &m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf(" %d", &A[i][j]);
		}
	}
	
	while(1)
	{	
		int a=0;
	/*	for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				visit[i][j] = 0;
				res[i][j] = 0;
			}
		}
	*/
		memset(visit, 0, sizeof(visit));
		memset(res, 0 ,sizeof(res));
/*		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				printf("%d %d", visit[i][j], res[i][j]);
			}
			printf("\n");
		}*/
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				if(A[i][j] != 0 && visit[i][j] == 0){
					dfsa(j, i);
					a++;
		//			printf("%d \n",a);
				}
		/*		if(A[i][j] != 0)
				{
					res[i][j] = dfs(j, i);
				} */
				A[i][j] -= res[i][j];
				if(A[i][j] < 0) A[i][j] = 0;
				printf("%d ", A[i][j]);
			}
			printf("\n");
		}
		if(a==0)
		{
			printf("0");
			return 0;
		}
		else if(a >= 2)
		{
			printf("%d", b);
			return 0;
		}
		/*
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
		//		printf("%d ", res[i][j]);
				A[i][j] -= res[i][j];
				if(A[i][j] < 0) A[i][j] = 0;
			}
		//	printf("\n");
	
		}
		*/	
		b++;
	}
	
	return 0;
}
