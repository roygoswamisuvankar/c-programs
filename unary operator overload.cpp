//unary operator overload
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
        cout<<"after overload unary operator: "<<a;
    }
    integer operator-(){
        integer tmp;
        tmp.a = -a;
        return tmp;
    }
};
int main(){
    int a;
    integer i1, i2;
    cout<<"Enter data: ";
    cin>>a;
    i1.getdata(a);
    i2 = -i1;
    i2.showdata();
}
