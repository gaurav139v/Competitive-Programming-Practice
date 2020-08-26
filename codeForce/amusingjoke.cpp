//https://codeforces.com/problemset/problem/141/A
// O(n)
#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b,c;
	cin >> a >> b >> c;
	a = a+b;
	vector<int> v(27);
	for(int i=0; i<a.size(); i++){
		v[a[i]-65] += 1;
	}
		
	for(int i=0; i<c.size(); i++){
		v[c[i]-65] -= 1;
	}
	
	bool flag=false;
	for(auto a: v){
		if(a){
			flag =true;
			break;
		}
	}
	
	(flag)? cout << "NO": cout << "YES";
}

