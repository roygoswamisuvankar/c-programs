//preincrement and post increment operator overload
#include<iostream>
using namespace std;
class integer{
    private:
    int a;
    public:
    void getdata(int x){
        a = x;
    }
    void showdata(){
        cout<<"after preincrement: "<<a;
    }
    void showdata2(){
        cout<<"After post increment: "<<a;
    }
    integer operator ++(){      //preincrement
        integer c;
        c.a = ++a;
        return c;
    }
    integer operator ++(int){
        integer i;
        i.a = a++;
        return i;
    }
};
int main(){
    int a;
    integer c1,c2;
    integer i1, i2;
    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"before increment: "<<a;
    c1.getdata(a);
    c2 = ++c1;
    c2.showdata();
    i1.getdata(a);
    i2 = i1++;
    i2.showdata2();
}
