/*
The distance between two cities (in km.) is input through the keyboard. Write  a program to convert and print this distance
in meter, feet, inches, and centemeter.
*/
#include<iostream>
using namespace std;
class dista{
private:
    float d;
public:
    float m,f,i,cen;
    void getdata(float dis){
        d = dis;
        m = d*1000;
        f = d*3280.84;
        i = d*39370.1;
        cen = d*100000;
    }
    void putdata(){
        cout<<"Distance in kilometer : "<<d<<" Km."<<endl;
        cout<<"Distance in meter: "<<m<<" m."<<endl;
        cout<<"Distance in feet : "<<f<<" ft."<<endl;
        cout<<"Distance in inch. : "<<i<<" inch."<<endl;
        cout<<"Distance in centimeter: "<<cen<<" cen."<<endl;
    }
};
int main(){
    float d;
    cout<<"Enter Distance(Kilo meter): ";
    cin>>d;
    dista d1;
    d1.getdata(d);
    d1.putdata();
}
