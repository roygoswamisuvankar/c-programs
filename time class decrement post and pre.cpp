#include<iostream>
using namespace std;
class time{
private:
    int h, m, s;
public:
    void gettime(int hr, int mi, int se){
        h = hr;
        m = mi;
        s = se;
    }
    time operator--(){
        time tmp;
        tmp.h = --h;
        tmp.m = --m;
        tmp.s = --s;
        return tmp;
    }
    time operator--(int){
        time tmp;
        tmp.h = h--;
        tmp.m = m--;
        tmp.s = s--;
        return tmp;
    }
    void showtime(){
        cout<<h<<":"<<m<<":"<<s<<endl;
    }
};
int main(){
    int h,m,s;
    cout<<"Enter hour: ";
    cin>>h;
    cout<<"Enter minute: ";
    cin>>m;
    cout<<"Enter second: ";
    cin>>s;
    time t1,t2,t3,t4;
    t1.gettime(h, m, s);
    t2.gettime(h,m,s);
    t3 = --t1;
    t4 = t2--;
    cout<<"Post decrement time:"<<endl;
    t3.showtime();
    cout<<"Pre decrement time: "<<endl;
    t4.showtime();
}
