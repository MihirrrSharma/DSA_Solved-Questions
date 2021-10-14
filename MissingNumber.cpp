#include <iostream>
using namespace std;

int Max(int* p,int size){
	int max = p[0];
	int i;
	for(i=0;i<size;i++){
		if(p[i]>max){
			max=p[i];
		}
	}
	return max;
}

int main(){
	
	int n,i;
	cin>>n;
	int* p = new int[n];
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	
	int max = Max(p,n);
	int* ptr = new int[max];
	/*for(i=0;i<max;i++){
		p[i]=0;
	} */
	for(i=0;i<n;i++){
		ptr[p[i]]+=1;
	}
	for(int j=1;j<max;j++){
		if(ptr[j]==0){
			cout<<j<<" ";
		}
	}
	cout<<endl;
	
}
