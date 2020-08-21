#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin >> n;
	t = n-1;
	for(int i = 0; i<n; i++){
		if(i%2==0) 
			cout << "I hate ";
		else
			cout << "I love ";
		if(t--) cout << "that ";	
	}
	cout << "it";			
	return 0;
}


