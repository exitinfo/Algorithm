#include<bits/stdc++.h>

using namespace std;

int main(){
	time_t t=time(0);
	struct tm * now =localtime(&t);
	printf("%d\n%d\n%d", now->tm_year+1900, now->tm_mon+1, now->tm_mday);
	
	return 0;
}
