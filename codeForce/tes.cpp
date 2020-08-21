#include<bits/stdc++.h>
using namespace std;
int main(){
	/**
	string s;
	cin >> s;
	int n = s.length(), small=0;
	for (int i=0; i<n; i++){
		if (s[i]>96)
			small++;
		else
			small--;
	}
	
	if(small >= 0)
		for(int i=0; i<n; i++) cout << (char)tolower(s[i]);
	else
		for(int i=0; i<n; i++) cout << (char)toupper(s[i]);
	*/
	
	string s;
	cin >> s;
	int count=0;
	for(char c : s)
		(c>96)?count++: count--;
	for(char c: s)
		cout << char((count>=0)?tolower(c):toupper(c));
}
