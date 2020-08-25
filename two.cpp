#include <iostream>
#include <string>
using namespace std;
int main(){
	int num,num1;
	string bin;
	cout<<"Enter Decinal Number :";
	cin>>num;
	while(num!=0)
	{
	     num1=num%2;
		 bin = to_string(static_cast<long long>(num1))+bin;
		 num = num/2;
			 
	}
	cout<<"Binary :"<<bin<<endl;
	system("pause");

	return(0);
}