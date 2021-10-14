#include <iostream>
using namespace std;

void merge(int*p,int si, int mid, int ei ){
    int i,j,k=si;
	int n1 = mid - si + 1;
	int n2 = ei - mid;
	int a[n1];
	int b[n2];
	for(i=0;i<n1;i++){
		a[i] = p[si+i];
	}
	for(j=0;j<n2;j++){
		b[j] = p[mid+1+j];
	}
	i = 0;
	j = 0;
	while(i<n1 && j<n2){
		if(a[i]<=b[j]){
			p[k] = a[i];
			i++;
		}
		else{
			p[k] = b[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		p[k++] = a[i++];
	}
	while(j<n2){
		p[k++] = b[j++];
	}
//	for(i=0,j=0;i<=(mid);){	
//		if(p[si+i]>p[mid+i]){
//			arr[i]=p[mid+i];
//			i++
//		}
//		if(p[si+i]<p[mid+j]){
//			arr[i]=p[s+i];
//			i++;
//		}
//	}	
}

void mergeSort(int* p,int si,int ei){
	if(si>=ei){
		return;
	}
	int mid = si+(ei-si)/2;
	mergeSort(p,si,mid);
	mergeSort(p,mid+1,ei);
	merge(p,si,mid,ei);
}

int main(){
	int n;
	cin>>n;
	int *p = new int[n];
	int i;
	for(i=0;i<n;i++){
		cin>>p[i];
	}
    mergeSort(p,0,n-1);
    for(i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
    cout<<endl;
}
