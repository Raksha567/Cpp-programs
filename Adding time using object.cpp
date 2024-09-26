#include<iostream>
using namespace std;
class one{
	public:
		int H,M,S;
		void set(int x,int y,int z){
			H=x;
			M=y;
			S=z;
		}
		one add(one cob2){
			one tob;
			tob.H=H+cob2.H;
			tob.M=M+cob2.M;
			tob.S=S+cob2.S;
			if(tob.S>=60){
				tob.M=tob.M+(tob.S/60);
				tob.S=tob.S%60;
			}
			if(tob.M>=60){
					tob.H=tob.H+(tob.M/60);
					tob.M=tob.M%60;
			}
			return tob;
				}
		void dis(){
			cout<<H<<" "<<M<<" "<<S<<endl;
		}
};
int main(){
	one ob1,ob2,ob3;
	ob1.set(20,14,80);
	ob2.set(1,16,90);
	ob3=ob1.add(ob2);
	ob3.dis();
}
