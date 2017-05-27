#include<iostream>
using namespace std;
class Z{
	int i;
	public:
		Z(){
			i=0;
			cout<<"constructor of zcalled\n";
		}
		void f(){
			cout<<"in f\n";
		}
};
dsjfhkgj
class X{
	int i;
	public:
		X(){
			i=0;
			cout<<"constructorof x ed\n";
		}
		void f(){
			cout<<"in f\n";
		}
};
class Y: public X{
	int i;
	//z;
	public:
		//X x;
		Y(){
		
		//out<<"start\n";
			//);
			i=0;
			//ut<<"in y\n";
		// z;
			cout<<"in y\n";
		}
		f(){
			//x.f();
		}
};
int main()
{
	Y y;
	//y.f();
	return 0;
	
}
