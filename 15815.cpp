#include<bits/stdc++.h>

using namespace std;
int res, n, a, b;
char A[100];
stack<int> s;

int main(){
	scanf("%s", A);	
	n = strlen(A);
	for(int i=0; i<n; i++)
	{
		if(A[i] == '*')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			res = b * a;
			s.push(res);			
		}
		else if(A[i] == '/')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			res = b / a;
			s.push(res);
		}
		else if(A[i] == '+')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			res = b + a;
			s.push(res);
		}
		else if(A[i] == '-')
		{
			a = s.top();
			s.pop();
			b = s.top();
			s.pop();
			res = b - a;
			s.push(res);
		}
		else
		{
			s.push(A[i] - '1' + 1);
		}
	}
	printf("%d\n", s.top());
	return 0;
}
