/*type conversion basic to class type(user define); only use constructor
    class obj;
    int x;
    obj = x; //x:basic; obj : class type
    <here the program of distance convert to feet and inch for example 8ft 7inch.>
*/

#include<iostream>
using namespace std;
class Distance{
    private:
        float ft, inch;
    public:
        Distance(){
            ft = inch = 0;
        }
        Distance(int d){
            ft = d/12;
            inch = d%12;
        }
        void showdata(){
            cout<<"Distance is: "<<ft<<"ft. "<<inch<<"inch."<<endl;
        }
};
int main(){

    float di;
    cout<<"Enter distance: ";
    cin>>di;
    Distance d1;
    d1 = di;
    d1.showdata();
}
/* here d1 is user define(class type)
    di is basic
    we convert basic to user define(class type)

*/
