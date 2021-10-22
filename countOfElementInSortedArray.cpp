#include  <bits/stdc++.h>
using namespace std;

int firstOccurence(int a[],int size,int ele){
	int start = 0;
	int end = size-1;
	int res = -1;
	while(start<=end){
		int mid = start + ((end-start)/2);
		if(a[mid]==ele){
			res = mid;
			end = mid-1;
		}
		else if(a[mid]<ele){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	return res;
}

int lastOccurence(int a[],int size,int ele){
	int start = 0;
	int end = size-1;
	int res = -1;
	while(start<=end){
		int mid = start + ((end-start)/2);
		if(a[mid]==ele){
			res = mid;
			start = mid+1;
		}
		else if(a[mid]<ele){
			start = mid+1;
		}
		else{
			end = mid-1;
		}
	}
	return res;
}

int main(){
 int a[7]={2,4,10,10,10,18,20};
 int first = firstOccurence(a,7,10);
 int last = lastOccurence(a,7,10);
 int count = 0;
 count = last - first + 1;
 cout<<count;

}
