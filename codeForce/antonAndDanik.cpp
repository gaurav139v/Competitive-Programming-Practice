#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,c=0, i=0;
	string s;
	cin >> n >> s;
	while(n--){
		(s[i++] == 'A')?c++: c--;
	}
	/*
	if(c>0)
		cout << "Anton";
	else if(c<0)
		cout << "Danik";
	else
		cout << "Friendship";
	 */
	 cout << (c?c>0?"Anton":"Danik":"Friendship");
}
