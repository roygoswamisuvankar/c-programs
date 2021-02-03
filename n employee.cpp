#include<iostream>
using namespace std;
class employee{
	private:
		string emp_id, name;
		float basic, da, ta, net;
	public:
		void get_emp_details(int i){
			cout<<"Enter Employee Id: ";
			cin>>emp_id;
			cout<<"Enter Employee name: ";
			cin>>name;
			cout<<"Enter Basic salary: ";
			cin>>basic;
		}
		void show_emp_details(){
			cout<<"\n\n\n";
			cout<<"Details of 	: "<<name<<endl;
			cout<<"\n";
			cout<<"Employee id	: "<<emp_id<<endl;
			cout<<"Basic Salary	: "<<basic<<endl;
			da = ((basic*20)/100);
			cout<<"DA			: "<<da<<endl;
			ta = ((basic*10)/100);
			cout<<"TA			: "<<ta<<endl;
			net = basic+da+ta;
			cout<<"Net salary	: "<<net<<endl;
		}
};
int main(){
	employee emp[10];
	int i, num;
	cout<<"How many employee? ";
	cin>>num;
	cout<<"\n\n::::::::::::::::::Inserting Data::::::::::::::::::::"<<endl;
	for(i=0;i<num;i++){
		emp[i].get_emp_details(i);
	}
	cout<<"\n\n::::::::::::::::::Displaying Data::::::::::::::::::::"<<endl;
	for(i=0;i<num;i++){
		emp[i].show_emp_details();
	}
}
