//https://codeforces.com/problemset/problem/1335/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	while(t--){
		cin >> n;
		(n%2)? cout << (int)n/2-1 : cout << (int)n/2;
		cout << "\n";
	}
}
