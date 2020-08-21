#include<bits/stdc++.h>
using namespace std;
int n,a,b, m;
int main(){
	int c=0;
	cin >> n;
	while(n--){
		cin >> a >> b;
		c += b-a;
		if(c>m)
			m=c;		
	}
	cout << m;
	return 0;
}
