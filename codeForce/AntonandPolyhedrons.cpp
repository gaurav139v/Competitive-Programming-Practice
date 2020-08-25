#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string a;
	map<string, int> shape;
	shape["Tetrahedron"] = 4;
	shape["Cube"] = 6;
	shape["Octahedron"] = 8;
	shape["Dodecahedron"] = 12;
	shape["Icosahedron"] = 20;
	int s = 0;
	cin >> n;
	for(int i =0; i<n; i++){		
		cin >> a;
		s += shape.find(a)-> second;
	}
	cout << s;
}


