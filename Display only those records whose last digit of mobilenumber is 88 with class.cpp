#include<iostream>
using namespace std;
class emp{
	public:
	int id;
	char name[20];
	char mob[11];
	void setdata();
	void getdata();
};
void emp::setdata(){
	cout<<"enter id:";
	cin>>id;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter mob";
	cin>>mob;
}
void emp:: getdata(){
	cout<<id<<" "<<name<<" "<<mob<<endl;
	
}
int main(){
	emp obj[5];
	for(int i=0;i<5;i++){
		obj[i].setdata();
	}
	for(int i=0;i<5;i++){
		if(obj[i].mob[9]=='8'&&obj[i].mob[8]=='8'){
		
		obj[i].getdata();}
	}
}
