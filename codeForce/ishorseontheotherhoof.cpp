#include<bits/stdc++.h>
using namespace std;
int a;
set<int> n;
int main(){
	while(cin>>a){
		n.insert(a);
	}
	//cout << 4- n.size()  << " ";
	if(n.size() < 4){
		cout << 4 - n.size();
	}
	
}

