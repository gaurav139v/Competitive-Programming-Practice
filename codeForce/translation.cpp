#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1, s2;
	cin >> s1 >> s2;
	int l = s1.length();
	for(int i=0; i<l/2; i++){
		swap(s1[i], s1[l-i-1]);
	}
	(s1 == s2)? cout << "YES": cout << "NO";
}
