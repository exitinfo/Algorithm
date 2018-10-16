#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, i;
	int co = 0;
	int j = 0;
	int max = 0;
	long long int maxnum;
	cin >> n;
	
	long long int* num = new long long int[n];
	long long int* number = new long long int[n];
	long long int* count = new long long int[n];
	for(i=0; i<n; i++){
		cin >> num[i];
	}
	sort(num, num+n);
	
	for(i=0;i<n-1;i++){
		if(num[i] == num[i+1]){
			co += 1;
		}
		else {
			number[j] = num[i];
			count[j] = co + 1;
			j += 1;
			co = 0;
		}
	}
	number[j] = num[i];
	count[j] = co + 1;
	j += 1;
	co = 0;
	
	for(i=0;i<j;i++){
		if(max < count[i]){
			max = count[i];
			maxnum = number[i];
		}
	}
	printf("%lld\n", maxnum);
}
