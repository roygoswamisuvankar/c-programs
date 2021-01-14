#include<iostream>
using namespace std;
class employee{
    protected:
        int emp_id;
        string name;
    public:
        void get_details(){
            cout<<"Enter Employee id:: ";
            cin>>emp_id;
            cout<<"Enter Employee Name:: ";
            cin>>name;
        }
        void put_details(){
            cout<<"Employee Id: "<<emp_id<<endl;
            cout<<"Employee Name: "<<name<<endl;
        }
};
class qualification{
    protected:
        string high_gen, high_pro;
    public:
        void get_qualification(){
            cout<<"Enter highest genaral qualification:: ";
            cin>>high_gen;
            cout<<"Enter highest professional qualification:: ";
            cin>>high_pro;
        }
        void put_qualification(){
            cout<<"Highest genaral qualification of officer: "<<high_gen<<endl;
            cout<<"Highest professional qualification of officer: "<<high_pro<<endl;
        }
};
class officer:public employee, public qualification{
    public:
        char grade;
        string department;
        float salary;
        void getdata(){
            cout<<"Enter Grade of officer: ";
            cin>>grade;
            cout<<"Enter Department of officer: ";
            cin>>department;
            cout<<"Enter salary of officer: ";
            cin>>salary;
        }
        void showdata(){
            cout<<"Grade: "<<grade;
            cout<<"Department: "<<department;
            cout<<"Salary: "<<salary;
        }

};
int main(){

    officer of1,of2;
    cout<<"............Enter officer details................"<<endl;
    of1.get_details();
    of1.get_qualification();
    of1.getdata();
    of2.get_details();
    of2.get_qualification();
    of2.getdata();
    cout<<".............The details of officers................"<<endl;
    of1.put_details();
    of1.put_qualification();
    of1.showdata();
    cout<<"\n\n";
    of2.put_details();
    of2.put_qualification();
    of2.showdata();
}
