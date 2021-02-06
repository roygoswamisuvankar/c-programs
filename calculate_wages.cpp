/*
Write a program to calculate employee’s wage. Your program first asks the user to enter the number of hour an employee work in one week (a float value). Then , it calculate this employee’s wages based on the following formula,
a. Hourly pay in $18.25 for the first normal 40.0 hours.
b. An overtime pay rate factor of 1.5 is applied to the overtime hours.
Wages displayed should have 2 digits fraction part because of the money unit. the “if - else” statement is required.
*/
#include<iostream>
using namespace std;
class employee{
	private:
		float hour;
	public:
		float wages,over,total;
		void get_hour(float h){
			hour = h;
		}
		void show_wages(){
			wages = 18.25*40;
			if(hour<=40){
				cout<<"Normal Wages : "<<wages<<endl;
			}else if(hour>=40){
				over = (hour-40)*1.5;
				total = over+wages;
				cout<<"Over time wages : "<<total<<endl;
			}
		}
};
int main(){
	int t;
	cout<<"Enter working hour in a week : ";
	cin>>t;
	employee e;
	e.get_hour(t);
	e.show_wages();
}
