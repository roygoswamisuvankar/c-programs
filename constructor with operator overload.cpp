#include<iostream>
using namespace std;
class complex{
    private:
        int a, b;
    public:
        complex(){ }
        complex(int x, int y){
            a = x;
            b = y;
        }
        complex operator+(complex s){
            complex tmp;
            tmp.a = a + s.a;
            tmp.b = b + s.b;
            return tmp;
        }
        void show(){
            cout<<a<<endl;
            cout<<b<<endl;
        }
};
int main(){
    complex c1,c2,c3;
    c1 = complex(3, 6);
    c2 = complex(5,7);
    c3 = c1+c2;
    c3.show();
}
