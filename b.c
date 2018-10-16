#include<stdio.h>

int main(){
	int n, r, i, j, k, p;
	int a[10001];
	int on[10001];
	int cnt=0;
	int heat=0;
	int off=0;

	scanf("%d %d", &n, &r);
	for(i=0; i<n; i++){
		on[i] = 0;
		a[i] = 0;
	}
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		
		if(a[i] == 1){
			heat += 1;
			if(i-r+1 < 0){
				k = 0;
			}
			else{
				k = i-r+1;
			}
			if(i+r-1 >= n){
				p = n - 1;
			}
			else{
				p = i+r-1;
			}
			for(j = k; j <= p; j++){
					on[j] += 1;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i] == 1){
			if(i-r+1 < 0){
				k = 0;
			}
			else{
				k = i-r+1;
			}
			if(i+r-1 >= n){
				p = n - 1;
			}
			else{
				p = i+r-1;
			}
			for(j=k; j<=p; j++){
				if(on[j] >= 2){
					cnt += 1;		
				}
			}
			if(cnt == (p - k + 1)){
				heat -= 1;
				for(j=k; j<=p; j++){
					on[j] -= 1;
				}
			}
			cnt = 0;
		}
	}
	for(i=0;i<n;i++){
		if(on[i] == 0){
			off = 1;		
		}
	}
	if(off==1){
		printf("-1");
	}
	else{
		printf("%d", heat);	
	}
	
	return 0;
	
}
