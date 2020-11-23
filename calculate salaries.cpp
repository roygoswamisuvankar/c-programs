/*
Ramesh basic salary is input through the keyboard. His dearness allowance is 40% and house rent allowance is 20%
of basic salary. Write a program to calculate his gross salary.
*/

#include<iostream>
using namespace std;
class salary{
    int b;
public:
    int getdata(int basic){
        b = basic;
         int da, hra, gross;
        da = (b*40)/100;
        hra = (b*20)/100;
        b = da+hra+b;
        return b;
    }
};
int main(){
    int b;
    cout<<"Enter basic salary:";
    cin>>b;
    salary s1;
    cout<<"His salary is: "<<s1.getdata(b);
}
