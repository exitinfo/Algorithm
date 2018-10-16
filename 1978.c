#include<stdio.h>

int main(){
	int a, i, j;
	int c=0;
	int b[100];
	scanf("%d", &a);
	if(a>1000){
		return 0;
	}
	for(i=0; i<a;i++){
		scanf("%d", &b[i]);
		for(j=2;j < b[i];j++){
			if(b[i] % j == 0){
				break;
			}
		}
		if(j == (b[i])){
			c++;
		}
	}
	printf("%d", c);
}
