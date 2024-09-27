#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int roll_no;
		int marks;
		void set(){
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter roll number:";
			cin>>roll_no;
			cout<<"Enter marks";
			cin>>marks;
		}
		void dis(){
			
			cout<<name<<" "<<roll_no<<" "<<marks<<endl;
		}
};
int main(){
	Student ob[3];float sum=0,avg;
	for(int i=0;i<3;i++){
		ob[i].set();
	}
	for(int i=0;i<3;i++){
		sum=sum+ob[i].marks;
	}
	avg=sum/3;
	cout<<avg;
}
