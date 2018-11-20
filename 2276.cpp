#include<bits/stdc++.h>

using namespace std;
int Nn[1000000];
int Mm[1000000];

int bin(int Nn[], int left, int right, int num){
	while(left <= right)
	{
		int mid = (left+right) / 2;
		if(Nn[mid] < num) left = mid + 1;
		else if(Nn[mid] > num) right = mid - 1;
		else if(Nn[mid] == num) return 1;
	}
	return 0;	
}
int main(){
	int t, n, m;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d", &n);
		for(int j=0; j<n; j++)
		{
			scanf(" %d", &Nn[j]);
		}
		sort(Nn, Nn+n);
		
		scanf("%d", &m);
		for(int j=0; j<m; j++)
		{
			scanf(" %d", &Mm[j]);
			int res = bin(Nn, 0, n-1, Mm[j]);
			printf("%d\n", res);
		}
	}

	return 0;
}
