#include <iostream>
using namespace std;
int main(){
	char str1[20];
	char str2[20];
	cin>>str1>>str2;
	char H[26] = {0};
	int i;
	for(i=0;str1[i]!='\0';i++){
		H[str1[i]-97]+=1;
	}
	for(i=0;str2[i]!='\0';i++){
		H[str2[i]-97]-=1;
		if(H[str2[i]-97]<0){
			cout<<"Both the strings are not anagram!"<<endl;
			break;
		}
	}
	for(i=0;i<26;i++){
		if(H[i]==0)
		   continue;
		else
		   break;
	}
	if(i==26)
	    cout<<"Both the strings are anagram!"<<endl;
	
}
