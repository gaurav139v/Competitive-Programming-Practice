
#include<bits/stdc++.h>
using namespace std;
char a;
set<char> n;
int main(){
	while(cin>>a){
		n.insert(a);
	}
	if (n.size() > 3)
		cout << n.size() - 3;
	else if (n.size() == 3)
		cout << 1;
		else cout << 0;
	
}

