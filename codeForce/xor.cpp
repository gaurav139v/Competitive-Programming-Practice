#include<bits/stdc++.h>
using namespace std;
int main(){
	string n,a;
	cin >> n;
	cin >> a;
	for(int i=0; i<n.length(); i++){
		cout << (n[i] != a[i]);
	}
}


