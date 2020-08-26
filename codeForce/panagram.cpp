//https://codeforces.com/problemset/problem/520/A
// O(n) n = length of the string
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	
	set<char> a;
	for(int i=0; i<n; i++){		
		a.insert(tolower(s[i]));
	}
	(a.size()==26)?cout << "YES" : cout << "NO";
}
