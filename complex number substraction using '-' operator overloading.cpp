#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        void getdata(int x, int y){
            a = x;
            b = y;
        }
        void showdata(){
            cout<<"Real part: "<<a<<endl;
            cout<<"Imaginary part: "<<b<<endl;
        }
        complex operator -(complex c){
            complex tmp;
            tmp.a = a-c.a;
            tmp.b = b-c.b;
            return tmp;
        }
};
int main(){
    int a,b;
    complex c1,c2,c3;
    cout<<"Enter real part: ";
    cin>>a;
    cout<<"Enter imaginary part: ";
    cin>>b;
    c1.getdata(a,b);
    cout<<"Enter real part: ";
    cin>>a;
    cout<<"Enter imaginary part: ";
    cin>>b;
    c2.getdata(a,b);
    c3 = c1-c2;
    c3.showdata();
}
