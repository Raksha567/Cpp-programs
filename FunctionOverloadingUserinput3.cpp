#include<iostream>
using namespace std;
void sum(int a,int b){
	int res=a+b;
	cout<<"Result is"<<" "<<res;
}
void sum(int a,int b,int c){
	int res=a+b+c;
	cout<<"Result is"<<" "<<res;
}
void sum(int a,int b,int c,int d){
	int res=a+b+c+d;
	cout<<"Result is"<<" "<<res;
}

int main(){
	char p;
	int arg[100];
	int count=0;
	int i=0;
	int answer=1;
		while(answer==1){
			
			cout<<"if you want to Enter arguments type Y otherwise N:";
			cin>>p;
			
			if(p=='Y'){
				cin>>arg[i];
				i++;
				count++;
			}
			else if (p=='N'){
				answer=0;
			}
			else{
				cout<<"Invalid choice"<<endl;
			}
			
		}
	switch(count){
			case 2:
				sum(arg[0],arg[1]);
				break;
			case 3:
				sum(arg[0],arg[1],arg[2]);
				break;
			case 4:
				sum(arg[0],arg[1],arg[2],arg[3]);
				break;
				
		}
	
}

