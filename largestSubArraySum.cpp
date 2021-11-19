#include <bits/stdc++.h>
using namespace std;

int largestSumSubArray(int a[],int k,int n){
	if(n<k){
		cout<<"Not Possible"<<endl;
		return -1;
	}
	
	int i,maxSum = 0;
	for(i=0;i<k;i++){
		maxSum+=a[i];
	}
	int winSum = maxSum;
	for(i=k;i<n;i++){
		winSum+= a[i] - a[i-k];
		maxSum = max(maxSum,winSum);
	}
	return maxSum;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cin>>k;
	cout<<"Largest Sub array sum == "<<largestSumSubArray(a,k,n);
	
}
