//https://codeforces.com/problemset/problem/110/A
#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	long long int n;
	int c=0;
	cin >> n;
	while(n>0){		
		if(n%10==4 || n%10==7)
			c++;
		n/=10;			
	}
	if (c==7 || c==4)
		cout << "YES";
	else 
		cout << "NO";
	*/
	
	int a,ans=0;
	while (~scanf("%1d",&a)) ans+=a==4||a==7;
	puts(ans==4||ans==7?"YES":"NO"); 
	return 0;
}
