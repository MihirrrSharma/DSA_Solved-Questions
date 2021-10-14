#include <iostream>
#include <climits>
using namespace std;

int maxSubArraySum(int* array,int n){
	int maxSoFar = INT_MIN,maxEndingHere = 0;
	for(int i=0;i<n;i++){
		maxEndingHere = maxEndingHere + array[i];
		if(maxSoFar < maxEndingHere){
			maxSoFar = maxEndingHere;
		}
		if(maxEndingHere < 0 ){
			maxEndingHere = 0;
		}
	}
	return maxSoFar;
	
}

int main() {
   int n;
   cin>>n;  
   int* array = new int[n];
   for(int i=0;i<n;i++){
   	cin>>array[i];
   }
   
   int sum = maxSubArraySum(array,n);
   cout<<sum;
}
