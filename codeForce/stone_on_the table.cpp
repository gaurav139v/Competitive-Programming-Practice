//https://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int count=0, n;
	cin >> n;
	cin >> s;
	
	for (int i=0; i<s.length()-1; i++){
		if (s[i] == s[i+1]){
			count++;
		}
	}
	cout << count;
return 0;
}
