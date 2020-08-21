#include<bits/stdc++.h>
using namespace std;
int a[3];
int main(){
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i+=2){		
		if(s[i]=='1')
			a[0]++;
		else if(s[i]=='2')
			a[1]++;
		else if(s[i]=='3')			
			a[2]++;
	}
	
	int count = a[0] + a[1] + a[2] -1;
	for(int i=0; i<3; i++){
		for(int j=0; j<a[i]; j++){
			cout << i+1;
			if (count--)
				cout << "+";
		}		
	}
return 0;
}
