//https://codeforces.com/problemset/problem/996/A
// O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int s=0;
	vector<int> v = {100,20,10,5,1};
	for(int i=0; i<5; i++){
		if(n >= v[i]){
			s += (int)n/v[i];
			n = (int)n%v[i];
		}
	}
	cout << s;
}
	
