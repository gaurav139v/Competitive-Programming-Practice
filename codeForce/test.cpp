#include<iostream>
using namespace std;
int n,k,i,j,a[51]; 
int main(){
  cin>>n>>k;
  while(i<n)
  cin>>a[i++];
  while(a[j]&&a[j]>=a[k-1])
  ++j;
  cout<<j;
  }
