#include<bits/stdc++.h>
using namespace std;
int letter[26];
int main(){	
	set<char> r;
	string s;
	cin >> s;
	//cout << s;
	for(char a : s){
		r.insert(a);
	}
	cout << r.size();
	for (char a : r)
		cout << a;
	return 0;
}
