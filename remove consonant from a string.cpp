#include<iostream>
using namespace std;
void removeVowel(char *str){
	int i;
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
			cout<<str[i];
		}
	}
}
int main(){
	char str[100];
	cout<<"Enter a string:";
	cin>>str;
	removeVowel(str);
}
