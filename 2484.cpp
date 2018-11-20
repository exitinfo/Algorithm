#include<bits/stdc++.h>

using namespace std;

int A[10];
int co, res, dice, tmp, p, q;
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d", &A[0], &A[1], &A[2], &A[3] );
		
		co = 0;
		dice = 0;
		for(int j=0; j<4; j++)
		{
			for(int k=j+1; k<4; k++)
			{
				if(A[j] == A[k]) 
				{
					co++;
					dice = A[j];	
				}
			}
		}
		
		if(co==6) 
		{
			res = 50000 + dice * 5000;
		}
		else if(co==3)
		{
			res = 10000 + dice * 1000;
		}
		else if(co == 2)
		{
			for(int j=0; j<3; j++)
			{
				if(A[j] != A[j+1])
				{
					p = A[j];
					q = A[j+1];
				}
			}
			res = 2000 + p * 500 + q * 500;
		}
		else if(co==1)
		{
			res = 1000 + dice * 100;
		}
		else if(co==0)
		{
			for(int j=0; j<4; j++)
			{
				if(A[j] > dice) dice = A[j];
			}
			res = dice * 100;
		}
		
		if(res > tmp) tmp = res;
	}
	
	printf("%d\n", tmp);

	return 0;
}
