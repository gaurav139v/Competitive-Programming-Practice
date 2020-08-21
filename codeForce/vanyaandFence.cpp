#include<bits/stdc++.h>
using namespace std;
int n, h, c,a;
int main(){
	cin >> n >> h;
	while(n--){
		cin >> a;
		(a>h)?c+=2:c++;		
	}
	cout << c;
}
