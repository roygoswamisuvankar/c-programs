/*convert tempurature farenhite to centrigrate*/

#include<iostream>
using namespace std;
class temparature{
private:
    float tmp;
public:
    int convert_centrigrate(float t){
        tmp = t;
        float cen;
        cen = (tmp-32)*5/9;
        return cen;
    }
};
int main(){
    float t;
    cout<<"Enter temperature(in Fahrenheit):";
    cin>>t;
    temparature t1;
    cout<<"After converting temperature fahrenheit to centrigrate : "<<t1.convert_centrigrate(t);
}
/*output

Enter temperature(in Fahrenheit):2
After converting temperature fahrenheit to centrigrate : -16
Process returned 0 (0x0)   execution time : 1.141 s
Press any key to continue.
*/
