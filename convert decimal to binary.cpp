#include<iostream>
using namespace std;
int convert_binary(int n){
    int i = 1, binary=0;
    for(int j = n; j>0; j=j/2){
        binary = binary + (n%2) *i;
        i = i *10;
        n = n / 2;
    }
    return binary;
}
int main(){
    int n;
    cout<<"Enter a decimal no: ";
    cin>>n;
    cout<<"The binary of"<<n<<"is : "<<convert_binary(n);
}
