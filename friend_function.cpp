#include<iostream>
using namespace std;
class B;
class A{
    private:
        int i;
    public:
        void getdata(int a){
            i = a;
        }
        friend int minimum(A, B);
};
class B{
    private:
        int j;
    public:
        void getdata1(int b){
            j = b;
        }
        friend int minimum(A, B);
};
int minimum(A a1, B b1){
    if(a1.i<b1.j){
        return a1.i;
    }else{
        return b1.j;
    }
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    A a;
    B b;
    a.getdata(x);
    b.getdata1(y);
    cout<<"mimimum: "<<minimum(a,b);
}
