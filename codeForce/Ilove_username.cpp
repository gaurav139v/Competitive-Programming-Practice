//https://codeforces.com/problemset/problem/155/A
// O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, best, lowest ,a,count = 0;
	cin >> n;
	cin >> a;
	best = a;
	lowest = a;
	for(int i=1;i<n; i++){
		cin >> a;
		if(a > best){ count++; best = a;}
		else if(a < lowest) {count++; lowest = a;}
	}
	cout << count;
		
}
	

