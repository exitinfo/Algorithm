#include<bits/stdc++.h>

using namespace std;
char A[100];
char tmp;
int main(){
	int t,a,b;
	scanf("%s", A);	
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d %d", &a, &b);
		tmp = A[a];
		A[a] = A[b];
		A[b] = tmp; 
	}
	printf("%s\n", A);
	return 0;
}
