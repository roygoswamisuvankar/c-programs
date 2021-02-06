#include<iostream>
using namespace std;
class tempurature{
	private:
		float tmp;
	public:
		void getdata(int t){
			tmp = t;
		}
		void show_data(){
			if(tmp>90){
				cout<<"Visit a neighbor"<<endl;
			}else if(tmp<=90 && tmp>80){
				cout<<"Turn of air condition"<<endl;
			}else if(tmp<=80 && tmp>70){
				cout<<"Do nothing"<<endl;
			}else if(tmp<=70 && tmp>55){
				cout<<"Turn on heat"<<endl;
			}else{
				cout<<"Visit a neighbor<"<<endl;
			}
		}
};
int main(){
	float tp;
	cout<<"Enter tempurature in feranhite: ";
	cin>>tp;
	tempurature t1;
	t1.getdata(tp);
	t1.show_data();
}
