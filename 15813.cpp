#include<bits/stdc++.h>

using namespace std;
char A[100];
int sc, sum;
int main(){
	int n;
	scanf("%d", &n);
	scanf("%s", &A);
	for(int i=0; i<n; i++)
	{
		sc = A[i] - 'A' + 1;
		sum += sc;
	}
	printf("%d\n", sum);
	return 0;
}
