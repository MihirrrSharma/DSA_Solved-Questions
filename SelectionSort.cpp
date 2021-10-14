#include <iostream>
using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int *p,int size){
    int i,j;
    for(i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(p[j]<p[i]){
                swap(p[j],p[i]);
            }
        }
    }
    for(i=0;i<size;i++){
        cout<<p[i]<<" ";
    }
    
}

int main()
{
    int n,i ;
    cin>>n;
    int *p = new int[n];
    for(i=0;i<n;i++){
        cin>>p[i];
    }
    
    selectionSort(p,n);
}
