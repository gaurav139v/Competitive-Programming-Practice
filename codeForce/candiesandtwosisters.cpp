//https://codeforces.com/problemset/problem/1335/A
// O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		(n%2)? cout << (int)n/2 : cout << (int)n/2-1;
		cout << "\n";
	}
}
