#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b=0,count=1;
	cin >> n;
	while(n--){
		cin >> a;
		if (a+b==11){
			count++;
		}
		b = a;
	}
	cout << count;
	
		
	return 0;
}
