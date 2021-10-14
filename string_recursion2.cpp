#include <iostream>
using namespace std;

void changeConsec(char str[]){
	if(str[0]=='\0'){
		return;
	}
	
	if(str[0]==str[1]){
		int i;
		for(i=1;str[i]!='\0';i++){
			str[i-1]=str[i];
		}
		str[i-1]='\0';
		changeConsec(str);
	}
	else{
		changeConsec(str+1);
	}
}

int main(){
	char str[100];
	cin>>str;
	changeConsec(str);
	cout<<str<<"\n";
}
