#include<bits/stdc++.h>
using namespace std;
int n,l[101];
int main(){
	int a;
	cin >> n;
	int i=1;
	while(i<=n){
		cin >> a;
		l[a] = i++;
	}
	for(i=1; i<=n; i++)
		cout << l[i] << " ";
	return 0;
}
