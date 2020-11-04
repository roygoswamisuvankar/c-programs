#include<iostream>
using namespace std;
class overload{
    private:
    int n;
    public:
    overload(){n = 0; }
    overload(int x){ n = x; }
    overload operator--(){
        overload tmp;
        tmp.n = --n;
        return tmp;
    }
    overload operator--(int){
        overload tmp;
        tmp.n = n--;
        return tmp;
    }
    void getdata(){
        cout<<n<<endl;
    }
};
int main(){
    overload o1,o2(8),o3;
    o3 = --o1;
    cout<<"Pre decrement : ";
    o3.getdata();
    o3 = o2--;
    cout<<"Post decrement : ";
    o3.getdata();
}
