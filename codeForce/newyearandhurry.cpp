//https://codeforces.com/problemset/problem/750/A
// O(n) n = no of problem available
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,count=0;
	cin >> a >> b;
	while(b<=240){ count++;
		b += 5*count;}
	cout << min(count-1,a);
}
	

