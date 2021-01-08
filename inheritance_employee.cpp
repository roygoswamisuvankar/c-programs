#include<iostream>
using namespace std;
class employee{
	protected:
		int id,exhour,hour;
		string name;
		float salary;
	public:
		void get_details(){
			cout<<"Enter id: ";
			cin>>id;
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter salary: ";
			cin>>salary;
			cout<<"Enter working hour: ";
			cin>>hour;
		}
		void put_details(){
			cout<<"Id: "<<id<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Salary: "<<salary<<endl;
			cout<<"Working hours: "<<hour<<endl;
		}
		void get_hour(int h){
			exhour = h;
		}
};
class officer:public employee{
	public:
		int overtime(){
			return (exhour*1000);
		}
};
class worker:public employee{
	public:
		int wages(){
			return (exhour*500);
		}
};
int main(){
	int overtime;
	cout<<"...........Enter Officer details......... "<<endl;
	officer of;
	of.get_details();
	cout<<"Enter overtime: ";
	cin>>overtime;
	of.get_hour(overtime);
	
	cout<<"........Enter worker details........"<<endl;
	worker wo;
	wo.get_details();
	cout<<"Enter overtime: ";
	cin>>overtime;
	wo.get_hour(overtime);
	
	cout<<"--------Details of an Officer income----------"<<endl;
	of.put_details();
	cout<<"Overtime income amount: "<<of.overtime()<<endl;
	
	cout<<"--------Details of worker---------"<<endl;
	wo.put_details();
	cout<<"Wages: "<<wo.wages();	
}
