/*
Write a C++ program that accepts sales unit price and sales quantity of various items and compute total sales amount and the average sales quantity.
All input values must greater than or equal to 0 and less than or equal to 1,000, and the number of pairs of sales unit and sales quantity does not exceed 100.
 If a fraction occurs in the average of the sales quantity, round the first decimal place.
*/
#include<iostream>
using namespace std;
int calculate_price(int p, int q){
    int price;
    price = p*q;
    return price;
}
int main(){
    int q,p;
    cout<<"Enter price: ";
    cin>>p;
    cout<<"Enter quentity: ";
    cin>>q;
    if(q>=100){
        cout<<"Quenty does not exeed 100";
    }else{
        cout<<"Price Rs:"<<p<<"/- per items "<<endl;
        cout<<"Quentity is: "<<q<<endl;
        cout<<"The total price is: "<<calculate_price(p,q);
    }
}
