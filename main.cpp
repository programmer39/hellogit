#include <iostream>
#include <string>
#include "Data.h"
using namespace std;

int main(){
	int a=0;
	float b=0.0;
	Data d1;
	cout<<"Please enter an integer and a floating point number, respectively."<<endl;
	cin>>a; 	//Read input into variable 'a'
	 d1.setX(a);	// - and set a  into X.
	cout<<endl;
	cin>>b;
	 d1.setY(b);	//Read intput into variable 'b'
	cout<<endl;	// - and set b into Y.


	
	cout<<"The data inside of this data vector, X is: "<<d1.getX(); //Output the data that was stored.
	cout<<endl<< " - And the data inside of Y is: "<<d1.setY();

}
