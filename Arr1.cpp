#include <iostream>
using namespace std;

int main(){
	int n,k,d=0,i=0;
	cin>>n>>k;
	int a[n];
	while(i<n){
		cin>>a[i++];
	}
	i=0;
	int max = a[i];
	while(i<n){
		if(a[i]>k  && a[i]>max){
			max = a[i];
			d = max-k;
			i++;
		}
		else{
			i++;
		}
	}
	cout<<"\n"<<d;
}
