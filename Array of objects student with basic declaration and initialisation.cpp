#include<iostream>
using namespace std;
class Student{
	public:
	string name;
	int roll_no;
	int marks;
	void setdata( string n,int r,int m)
	{
	name=n;
	roll_no=r;
	marks=m;
	}
	void dis(){
		cout<<"Name: "<<name<<" Roll Number: "<<roll_no<<" marks: "<<marks<<endl;
	}
	
};
int main(){
	Student ob[3];
	ob[0].setdata("Raksha",101,90);
	ob[1].setdata("Shruti",102,80);
	ob[2].setdata("Vishakha",103,70);
	for(int i=0;i<3;i++){
		ob[i].dis();
	}
}


