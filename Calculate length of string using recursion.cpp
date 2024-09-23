#include<iostream>
using namespace std;
int length(int count,char *str){
	if(str[count]=='\0'){
		return count;
	}
	length(count+1,str);
	
}
int main(){
	char str[100];
	cout<<"Enter string";
	cin>>str;
	int c=length(0,str);
	cout<<c;
}
