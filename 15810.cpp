#include<bits/stdc++.h>

using namespace std;
int A[1000001];
int B[1000001];
int C[1000001];

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
//	memset(B, 1, sizeof(B));
	for(int i=0; i<n; i++)
	{
		scanf(" %d", &A[i]);
//		printf("%d\n", B[i]);
	}
	sort(A, A+n);
	int j=1; //C ÀÎµ¦½º¹øÈ£, Ç³¼±°¹¼ö 
	int res=0, com=0;
	C[0] = A[0];
	B[0]++;
	while(1)
	{
		bool flag=false;
		for(int i=0; i<n; i++)
		{
			bool flag=false;
			res = A[i] * (B[i] + 1);
			if(i+1 == n) 
			{
				C[j] = res;
				printf("%d\n", res);
				if(j+1 == m) 
				{
					printf("%d\n", C[j]);
					return 0;
				}
				j++;
				B[i]++;
				break;
			}
			else
			{
				for(int k=i+1; k<n; k++)
				{
					com = A[k] * (B[k] + 1);		
					if(com >= res)
					{
						printf("%d %d\n", res, com);
						C[j] = res;
						if(j+1 == m) 
						{
							printf("%d\n", C[j]);
							return 0;
						}
						j++;
						B[k]++;
						flag = true;
						break;
					}
				}		
			}
			if(flag==true) break;
		}	
	}

//	sort(A, A+n);
		

	return 0;
}
