#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n, i, m;
	int max = 0;
	cin >> n;
	
	int* num = new int[n];
	for(i=0; i<n; i++){
		cin >> num[i];
	}
	sort(num, num+n);
	
	for(i=0;i<n;i++){
		m = num[i] * (n - i);
		if(max < m){
			max = m;
		}
	}
	cout << max << endl;
}
