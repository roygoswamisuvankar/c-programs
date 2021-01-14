#include<iostream>
using namespace std;
class semister{
    protected:
        string de;
    public:
        void get_semister(){
            cout<<"Entet semister: ";
            cin>>de;
        }
        void show_semister(){
            cout<<"semister is: "<<de<<endl;
        }
};
class internal:virtual public semister{
    protected:
        int int_marks;
    public:
        void get_marks(){
            cout<<"Enter Internal semister marks: ";
            cin>>int_marks;
        }
        void show_marks(){
            cout<<"Internal semister marks is: "<<int_marks<<endl;
        }
};
class finalsem:virtual public semister{
    protected:
        int final_marks;
    public:
        void get_final_marks(){
            cout<<"Enter Final semister marks: ";
            cin>>final_marks;
        }
        void show_final_marks(){
            cout<<"Final semister marks is: "<<final_marks<<endl;
        }
};
class student:public internal, public finalsem{
    protected:
        double enroll;
        string name;
    public:
        void get_details(){
            cout<<"Enter Enrollment No. : ";
            cin>>enroll;
            cout<<"Enter Name: ";
            cin>>name;
        }
        void show_details(){
            cout<<"Enrollment No. : "<<enroll<<endl;
            cout<<"Student Name: "<<name<<endl;
        }
        int get_total(){
            return (int_marks+final_marks);
        }
};
int main(){
    student s1,s2;
    cout<<"...........Enter students details..........."<<endl;
    s1.get_details();
    s1.get_semister();
    s1.get_marks();
    s1.get_final_marks();

    cout<<"...............Details of students...................."<<endl;
    s1.show_details();
    s1.show_semister();
    s1.show_marks();
    s1.show_final_marks();
    cout<<"Total marks(internal+final) : "<<s1.get_total();
}
