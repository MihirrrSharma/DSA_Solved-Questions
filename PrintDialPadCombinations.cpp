#include <iostream>
using namespace std;

string dialPad(int d){
	if(d==2)
	   return "abc";
    if(d==3)
	   return "def";
	if(d==4)
	   return "ghi";
	if(d==5)
	   return "jkl";
	if(d==6)
	   return "mno";
	if(d==7)
	   return "pqrs";
	if(d==8)
	   return "tuv";
	if(d==9)
	   return "wxyz";
	return " ";
}

int printDialPad(int d,string* output){
	if(d == 0)
	 cout<< output<<endl;
	 return 1;
	
	int smallDig = d/10;
	int lastDig = d%10;
	string ans = dialPad(lastDig);
//	int count = printDialPad(smallDig,output);
	
	for(int i = 0;i<ans.size();i++){
		output[i] = output[i]+ans[i];
		printDialPad(smallDig,output);
	}
}

int main(){
	int d;
	cin>>d;
	string* output = new string [1000];
	printDialPad(d,output);
	
}
