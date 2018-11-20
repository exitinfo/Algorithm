#include<bits/stdc++.h>

using namespace std;
int Nn[500000];
int Mm[500000];
int res[500000];
int binsearch(int Nn[], int left, int right, int num){
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
	int n, m;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf(" %d", &Nn[i]);	
	}
	sort(Nn, Nn + n);
	scanf("%d", &m);
	for(int i=0; i<m; i++)
	{
		scanf(" %d", &Mm[i]);
		res[i] = binsearch(Nn, 0, n-1, Mm[i]);
		printf("%d ", res[i]);	
	}

	return 0;
}
