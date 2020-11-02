#include<iostream>
using namespace std;
class posint{
    private:
        int n;
    public:
    posint(){
        n = 0;
    }
    posint(int x){
        n = x;
    }
    posint operator-(){
        posint tmp;
        tmp.n = -n;
        return tmp;
    }
    void putdata(){
        cout<<n;
    }
};
int main(){
    posint p1,p2(5),p3,p4;
    p3 = -p1;
    p4 = -p2;
    p3.putdata();
    p4.putdata();
}
