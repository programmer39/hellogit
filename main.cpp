#include <iostream>
#include <string>
#include "Data.h"
#include <vector>
using namespace std;

void bubbleSort (auto& D ){
	for (int i=0; i < D.size(); i++)
	  for (int j=0; j< D.size()-1;j++)
		{
			if (D[j].getX() < D[j+1].getX())
			swap(D[j],D[j+1]);
		}
							}

int main(){
	int a=0;
	int c=0;
	float b=0.0;	
	float e=0.0;
	vector <Data> v;
	v.push_back({7,21.01});
	Data d;
	v.push_back(d);
	cout<<"Please enter an integer and a floating point number, respectively."<<endl;
	cin>>a; 	//Read input into variable 'a'
	 d.setX(a);	// - and set a  into X.
	cout<<endl;
	cin>>b;
	 d.setY(b);	//Read intput into variable 'b'
	cout<<endl;	// - and set b into Y.
	v.push_back(d);

	//My Code Area
	Data d2;
	cout<<"Please enter another pair of integers and float number"<<endl;
	cin>>c;
	d2.setX(c);
	cin>>e;
	d2.setY(e);	
	v.push_back(d2);
	cout<<endl;

	bubbleSort(v);
	
	for (int i=0; i<v.size(); i++){
		cout<<v[i].getX()<<" ";
		cout<<v[i].getY()<<endl;
	
			}	
		

}
