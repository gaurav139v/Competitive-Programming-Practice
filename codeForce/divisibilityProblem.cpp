//https://codeforces.com/problemset/problem/1328/A
// complixity O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		cout << (b-(a%b))%b << "\n";
	}
}

