#include <iostream>
using namespace std;

void changeChar(char str[],char c1,char c2){
	if(str[0]=='\0'){
		return;
	}
	
	if(str[0]==c1){
		str[0]=c2;
		changeChar(str+1,c1,c2);
	}
	else{
		changeChar(str+1,c1,c2);
	}
}

int main(){
	char str[50];
	char c1,c2;
	cin>>str;
	cin>>c1>>c2;
	changeChar(str,c1,c2);
	cout<<str<<"\n";
	
}
