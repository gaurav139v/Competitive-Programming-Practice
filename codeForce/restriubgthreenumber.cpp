//https://codeforces.com/problemset/problem/1154/A
// O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int best=2, n;
	vector<int> v;
	for(int i=0; i<4; i++){
		cin >> n;
		v.push_back(n);
		if(best<n) best = n;
	}
	
	for(auto a: v)
		if(best-a)
			cout << best-a << " ";
}
	

