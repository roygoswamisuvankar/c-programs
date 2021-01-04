/*
    single inheritance, where acount is a class and here programer and manager are two class which are inherite the properti of base class, and those two class
    is derive class.
*/
#include<iostream>
using namespace std;
class account{
    public:
        float salary = 20000;
};
class programer:public account{
    public:
        float bonus = 5000;
};
class manager:public account{
    public:
        float bonus = 6000;
};
int main(){
    account a;
    programer p;
    cout<<"programaer salary: "<<p.salary<<"  and bonus: "<<p.bonus<<endl;
    manager m;
    cout<<"Manager salary: "<<m.salary<<"  and bonus: "<<m.bonus<<endl;
}
