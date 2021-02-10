#include<iostream>
using namespace std;
int main(){
	int arr[5],i,tmp,j,sum;
	cout<<"Enter array : ";
	for(i=0;i<5;i++){
		cin>>arr[i];
	}
	for(i=0;i<5;i++){
		for(j=0;j<5-1;j++){
			if(arr[j]>arr[j+1]){
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	
	for(i=0;i<5;i++){
		sum = arr[0]+arr[4];
	}
	cout<<sum;
}
