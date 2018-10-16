#include<stdio.h>

int main(){
	int n, j, i;
	int a[10000];
	int d;
	int b = 1;
	int c = 1;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(j=0; j<n; j++){
		if(a[j] == 0){
			c = 1;
			d = 0;
		}
		else if(a[j] == 1){
			c = 0;
			d = 1;
		}
		else if(a[j] == 2){
			c = 1;
			d = 1;
		}
		else{
			for(i=0; i<a[j] - 2; i++){
				
				d = b + c;
				c = b;
				b = d;
			}
		}
		printf("%d %d\n", c, d);
		b = 1;
		c = 1;
	}
	return 0;
}
