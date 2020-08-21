#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c=0;
	cin >> n;
	while(n--){
		cin >> a >> b;
		if(b-a>=2) c++;
	}
	cout << c;
}
