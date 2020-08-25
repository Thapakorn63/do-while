#include <iostream>
using namespace std;
int main(){
	int money , b1000, b500,b100;
	    cout<<"Enter money :";
		cin>>money;
		do{
		if(money<100 || money>20000)
			cout<<"Sorry, plaease enter money (100 - 20000) : ";
			cin>>money;
		
	

	}
	while (money<100 || money>20000);
	      cout<<"total bank note"<<endl;
		b1000 =money/1000;
		money =money%1000;
		b500 =money/500;
		money=money%500;
		b100 =money/100;
		money=money%100;
		
		cout<<"Bank 1000 :"<<b1000<<endl;
		cout<<"Bank 500 :"<<b500<<endl;
		cout<<"Bank 100 :"<<b100<<endl;
	


	return(0);

}