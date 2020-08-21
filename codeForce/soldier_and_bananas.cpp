#include<bits/stdc++.h>
using namespace std;
int k,n,w,r;
int main(){
	cin >> k >> n >> w;
	// 1k + 2K + 3K ... w total amount he needs
	// he have n dollor
	
	r = (k * (w * (w+1)/2)) - n;
	(r>0)? cout << r: cout << 0;	
	return 0;
}
