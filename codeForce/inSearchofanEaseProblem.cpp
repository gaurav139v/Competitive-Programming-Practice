#include<bits/stdc++.h>
using namespace std;
int n,a;
int main(){
	cin >> n;
	/*
	int flag=0;
	while(n--){
		cin >> a;
		if(a>0) flag=1;
	}
	(flag)?cout << "HARD": cout << "EASY";
	*/
	int flag=0;
	while(n--){
		cin >> a;
		flag |= a;
	}
	(flag)? cout << "HARD": cout << "EASY";
	
}
