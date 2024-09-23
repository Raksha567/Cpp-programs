#include<iostream>
using namespace std;
void Removespace(char *str){
	for(int i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			cout<<str[i];
		}
	}
}
int main(){
	char str[100];
	cout<<"Enter a string:";
	cin.getline(str,100);
	Removespace(str);
}
