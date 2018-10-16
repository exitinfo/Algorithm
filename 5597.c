#include<stdio.h>

int main(){
	int n, i;
	int b[35];
	for(i=0;i<=30;i++){
		b[i] = 0;
	}
	for(i=0; i<28; i++){
		scanf("%d", &n);
		b[n] = 1;
	}
	for(i=1; i<=30; i++){
		if(b[i] == 0){
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}
