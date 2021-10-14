#include <iostream>
#include <cmath>
using namespace std;

int subString(string str, string output[]){
	if(str.empty()){
		output[0] = " ";
		return 1; 
	}
	string smallString = str.substr(1);
//	int smallStringSize = smallString.size();
	int smallStringSize = subString(smallString, output);
	for(int i=0;i<smallStringSize;i++){
		output[i+smallStringSize] = str[0] + output[i];
	}
	return 2*smallStringSize;
}

int main(){
	string str;
	getline(cin,str);
	
	int n = str.size();
	int sz = pow(2,n);
	string * output = new string [sz];
	int count = subString(str, output);
	for(int i = 0;i<count;i++){
		cout<<output[i]<<endl;
	}
}
