/*
If the marks obtain by a student in five subjects are inputed through the keyboard, find out the agerage marks and percentage marks
obtain by the students. assume that the maximum marks cnnot obtain by a student in each subject is 100
*/
#include<iostream>
using namespace std;
class grade{
private:
    float sub1, sub2, sub3, sub4, sub5;
public:
    float sum, avg;
    void getdata(){
        cout<<"Enter marks subject1 (out of 100) : ";
        cin>>sub1;
        cout<<"Enter marks subject2 (out of 100) : ";
        cin>>sub2;
        cout<<"Enter marks subject3 (out of 100) : ";
        cin>>sub3;
        cout<<"Enter marks subject4 (out of 100) : ";
        cin>>sub4;
        cout<<"Enter marks subject5 (out of 100) : ";
        cin>>sub5;
    }
    void showdata(){
        sum = sub1+sub2+sub3+sub4+sub5;
        avg = sum/5;
        cout<<"Total marks is: "<<sum<<"/500"<<endl;
        cout<<"There are "<<avg<<"% score by the syudent";
    }
};
int main(){
    cout<<"Please enter marks each subject out of 100:"<<endl;
    grade g;
    g.getdata();
    g.showdata();
}

/*output

Please enter marks each subject out of 100:
Enter marks subject1 (out of 100) : 87
Enter marks subject2 (out of 100) : 55.6
Enter marks subject3 (out of 100) : 91
Enter marks subject4 (out of 100) : 68.3
Enter marks subject5 (out of 100) : 66
Total marks is: 367.9/500
There are 73.58% score by the syudent
Process returned 0 (0x0)   execution time : 15.798 s
Press any key to continue.
*/
