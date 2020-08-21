#include<bits/stdc++.h>
using namespace std;
int p[100];
int main(){
	int n, a;
	cin >> n;	
	while(cin >> a){		
		p[a] = a;
	}
	int i;
	for(i=1; p[i]; i++);	
	(i>n)?cout << "I become the guy.": cout << "Oh, my keyboard!";
}
