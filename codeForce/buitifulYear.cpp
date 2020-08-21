#include<bits/stdc++.h>
using namespace std;
int n[11], a;
int check(num){
	for (int i=0; num>0; i++){
		int m = num%10;
		//if(n[m+1] > 0) {flag = 1; break;}
		n[m+1] = m+1;		
		num/=10;
		cout << num << " ";
	}
}

int main(){
	cin >> a;
	int num;
	int flag=0;
	//while(++a){
	cout << a<< " ";
	num = a;
	flag = 0;
	
	for(int i=0; i<11; i++){
		if(n[i] > 1)
	}
	//if(!flag) break;
	//}
	
	
	cout << a << " ";
	
	for(int i=1; i<11; i++){
		//cout << i << " ";
		if (n[i] >= i){
			n[i] = n[i]/i;
			//cout << n[i]/i << "|";
		}
			
	}
	for (int i=1; i<11; i++){
		cout << i-1<< "-" << n[i] << " ";
	}
	
}
