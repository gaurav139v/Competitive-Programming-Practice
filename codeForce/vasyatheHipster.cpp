//https://codeforces.com/problemset/problem/581/A
// O(1)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a ,b;
	cin >> a >> b;
	if(a-b>=0){
		cout << b << " " << (int)(a-b)/2;
	}else{
		cout << a << " " << (int)(b-a)/2;
	}
}
