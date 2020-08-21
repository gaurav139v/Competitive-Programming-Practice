#include<bits/stdc++.h>
using namespace std;
int letter[26];
int main(){	
	int flag=0;
	string s;
	cin >> s;
	for (int i=0; i<s.length(); i++){		
		letter[s[i]-97] = 1;
	}
	
	for(int i=0; i<26; i++){
		if (letter[i] > 0){
			flag++;			
		}
	}
	
	if (flag%2==1)
		cout << "IGNORE HIM!";
	else
		cout << "CHAT WITH HER!";
	
	return 0;
}
