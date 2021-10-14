#include <iostream>
using namespace std;

void swap(int* pivot,int* elem){
	int temp = *pivot;
	*pivot = *elem;
	*elem = temp;
}

int partition(int* p,int si,int ei){
	int i,j;
	int pivot = p[si];
	j = ei;
	for(i=ei;i>si;i--){
		if(p[i]>=pivot){
			swap(&p[i],&p[j]);
			j--;
	}
}
   swap(&p[j],&p[si]);
   return j;
}

void quickSort(int *p,int si,int ei){
	if(si>=ei)
	    return;
	int c = partition(p,si,ei);
	quickSort(p,si,c-1);
	quickSort(p,c+1,ei);
}

int main(){
	int n,i;
	cin>>n;
	int *p = new int [n];
	for(i=0;i<n;i++){
		cin>>p[i];
	}
	quickSort(p,0,n-1);
	for(i=0;i<n;i++){
		cout<<p[i]<<" ";
	}
	cout<<endl;
}
