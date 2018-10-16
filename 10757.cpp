#include <bits/stdc++.h>

using namespace std;
char a[1000001];
char b[1000001];
int sum[1000001];
int i=0;
int pp(int len, char a[]);

int main()
{
    int lena, lenb;

    scanf("%s %s", a, b);
    while(a[lena] != '\0') lena++;
    while(b[lenb] != '\0') lenb++;
    
	lena -= 1;
	lenb -= 1;
	while(lena >= 0 && lenb >= 0){
		if(sum[i] == 1){
			sum[i] = a[lena] + b[lenb] - 96;
			sum[i] += 1;	
		} else {
			sum[i] = a[lena] + b[lenb] - 96;
		}
		if(sum[i]>=10){
			sum[i+1] = 1;
			sum[i] = sum[i] % 10;
		}
		lena--;
		lenb--;
		i++;
	}
	while(lena>=0){
		pp(lena, a);
		lena--;
	}
	while(lenb>=0){
		pp(lenb, b);
		lenb--;
	}
	if(sum[i] != 1){
		i -= 1;
	}
	for(int j=i;j>=0;j--){
		printf("%d", sum[j]);
	}	
    return 0;
}

int pp(int len, char c[]){
	if(sum[i] == 1){
		sum[i] = c[len] - 48;
		sum[i] += 1;	
	} else{
		sum[i] = c[len] - 48;
	}
	if(sum[i]>=10){
		sum[i+1] = 1;
		sum[i] = sum[i] % 10;
	}
	i++;
	return 0;
}
