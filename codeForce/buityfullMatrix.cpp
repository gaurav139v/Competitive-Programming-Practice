#include<bits/stdc++.h>
using namespace std;

int main(){
	int c,i=0;
	while(cin >> c && !c){
		i++;
	}
	cout << abs(i/5-2) + abs(i%5-2);
	return 0;
}

