#include <iostream>
using namespace std;

void swap(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}

void reverse(int* a, int size){
   int i,j;
   for(i=0,j=size-1;i<j;i++,j--)
       swap(a[i],a[j]);
}

int main(){
  int * p;
  int n,i;
  cin>>n;
  p = new int[n];
  for(i=0;i<n;i++){
      cin>>p[i];
  }
  reverse(p,n);
  for(i=0;i<n;i++)
    cout<<p[i]<<" ";
}
