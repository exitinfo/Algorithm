#include<bits/stdc++.h>

using namespace std;
int n[10000];
int co[10000];
int con;
int main(){
	int c;
	scanf("%d", &c);
	for(int i=0; i<c; i++)
	{
		scanf("%d", &n[i]);
		for(int j=1; j<n[i]; j++)
		{
			if(n[i] % j == 0)
			{
				con++;			
			}	
		}
		co[i] = con;
		con = 0;
	}
	for(int i=0; i<c; i++)
	{
		printf("%d %d\n", n[i], co[i]+1);
	}
	return 0;
}
