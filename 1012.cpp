#include<bits/stdc++.h>

using namespace std;
int A[100][100];
int n, m, k, t, x, y;
int visit[100][100];
const int dx[]={1, -1, 0, 0};
const int dy[]={0, 0, 1, -1};
int c[10000];
int dfs(int x, int y){
	visit[y][x] = 1;
	for(int i=0; i<4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx<0 || ny<0 || nx>=m || ny>=n || visit[ny][nx]==1 || A[ny][nx]==0) continue;
		dfs(nx, ny);
	}
	return 0;
}

int main(){
	
	scanf(" %d", &t);
	
	for(int i=0; i<t; i++)
	{	
		c[i] = 0;
		scanf(" %d %d %d", &m, &n, &k);
		for(int a=0; a<n; a++)
		{
			for(int b=0; b<m; b++)
			{
				A[a][b] = 0;
				visit[a][b] = 0;		
			}
		}
		
		for(int j=0; j<k; j++)
		{
			scanf(" %d %d", &x, &y);
			A[y][x] = 1;
		}
		for(int a=0; a<n; a++)
		{
			for(int b=0; b<m; b++)
			{	
				if(visit[a][b] == 0 && A[a][b]==1)
				{
					dfs(b, a);
					c[i]++;
				}
			}
		}
	}
	for(int i=0; i<t; i++)
	{
		printf("%d\n", c[i]);
	}
	return 0;
}
