//https://codeforces.com/problemset/problem/472/A
// O(1)
// smallest prime no is 2
// even - even = even
// odd - odd = even
// 8 and 9 are the smallest consecutive compisite no
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << 8 + (n&1) << " " << n - 8 - (n&1);
}
