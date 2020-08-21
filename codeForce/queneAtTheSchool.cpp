#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	string s;
	cin >> n >> m;
	cin >> s;
	int i; 
	while(m--){
		i=0;
		while(i<s.length()-1){
			if (s[i] < s[i+1]){
				swap(s[i], s[i+1]);
				i += 2;
			}else{
				i++;
			}
		}
	}
	
	cout << s;	
	return 0;
}
