//https://codeforces.com/problemset/problem/1352/A
// O(n) no of digit in the number
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int n;
	for(int i=0; i<t; i++){
		cin >> n;
		int k = 1, count = 0;
		vector<int> v;
		while(n>0){
			if(n%10){
				v.push_back(n%10*k);
				count++;
			}
			n = (int)n/10;
			k *= 10;
		}
		cout << count << "\n";
		for(auto a: v)
			cout << a << " ";
	}
				
}
