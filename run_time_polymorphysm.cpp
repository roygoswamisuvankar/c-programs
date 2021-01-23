#include<iostream>
using namespace std;
class shape{
	public:
		virtual void disp(){
			cout<<"This is a shape"<<endl;
		}
		void print(){
			cout<<"This is base calss shape"<<endl;
		}
};
class circle:public shape{
	public:
		void disp(){
			cout<<"This is a circle shape"<<endl;
		}
};
class retangle:public shape{
	public:
		void disp(){
			cout<<"This is a retangle shape"<<endl;
		}
};
int main(){
	shape *sh;
	shape s;
	circle c;
	retangle r;
	sh = &c;
	sh->disp();     //run time polymorphysim
	sh=&r;
	sh->disp();     //run time polymorphysm because it show derive class
	sh->print();    //compile time because it show base class
}
