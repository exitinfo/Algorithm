#include<stdio.h>

int main(){
	int t, i, j;
	int k[10001], v[10001], l[10001], r[10001];
	int count;
	
	scanf("%d", &t);
	
	for(i=0; i<t; i++){
		scanf("%d %d %d %d", &k[i], &v[i], &l[i], &r[i]);
	
	}
	for(i=0; i<t; i++){
		
		count = k[i] / v[i];
		if(l[i] == r[i]){
			if(l[i] % v[i] == 0){
				count -= 1;
			}
		}
		else if(v[i] == 1){
			count -= ((r[i] / v[i]) - (l[i] / v[i]));
			count -= 1;	
		}
		else{
			if( (l[i]%v[i]==0) && (r[i]%v[i]==0) ){
				count -= (r[i] / v[i]) - (l[i] / v[i]);
				count -= 1;
			}
			else if( l[i]%v[i] == 0 ){
				count -= (r[i] / v[i]) - (l[i] / v[i]);
				count -= 1;
			}
			else{
				count -= (r[i] / v[i]) - (l[i] / v[i]);
			}
				
		}
		printf("%d\n", count);
	}
	return 0;
}
