//https://codeforces.com/problemset/problem/268/A
// comlexity = O(n)
#include<bits/stdc++.h>
using namespace std;
int a[101], b[101];
int main(){
	int n, x, y,s =0;
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x >> y;
		a[x] += 1;
		b[y] += 1;
	}
	for(int i=1; i<=100; i++){
		s = s + a[i] * b[i];
	}
	cout << s;
}



