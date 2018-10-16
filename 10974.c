#include<stdio.h>
#include <stdlib.h>

int n;
int access[10];
int result[10];
void f(int pos)
{
	int i;
	if(pos==n)
	{
		for(i=0; i<n; i++)
			printf("%d ", result[i]);
		printf("\n");
		return;
	}
	for(i=1; i<=n; i++)
	{
		if(access[i] != 1) 
		{
			result[pos] = i;
			access[i] = 1;
			f(pos+1);
			access[i] = 0;
		}
	}
}

int main(){
	scanf("%d", &n);
	f(0);
	
	return 0;
}


