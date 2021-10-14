#include <iostream>
using namespace std;

int main(){
	int n,k,i,j;
	cin>>n;
	int* p = new int[n];
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	cin>>k;
	i=0;
	j=n-1;
	while(i<j){
		if(p[i]+p[j]==k){
			cout<<p[i]<<" + "<<p[j]<<" = "<<k<<endl;
			i++;
			j--;
		}
		else if(p[i]+p[j]<k){
			i++;
		}
		else{
			j--;
		}
	}
}
