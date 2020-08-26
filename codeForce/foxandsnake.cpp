//https://codeforces.com/problemset/problem/510/A

#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n;
	bool t = true;
	cin >> m >> n;
	for(int i=0; i<m; i++){
		if(i%2==0){
			for(int j=0; j<n; j++){
				cout << "#";
			}
			cout << "\n";
		}else{
			if(i%2==1 && t){
				for(int j=0; j<n-1;j++){
					cout << ".";
				}
				cout << "#" << "\n";
				t = false;
			}else{
				cout << "#";
				for(int j=0; j<n-1; j++){
					cout << ".";
				}
				cout << "\n";
				t = true;
			}
		}		
	}
}		
