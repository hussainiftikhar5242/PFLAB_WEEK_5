#include<iostream>
using namespace std;
int main()
{	int price;
	int price1,price2;
	int weight=0;
	string classtype;
	cout<<"enter weight:";
	cin>> weight;
	cout<<"enter class type:";
	cin>> classtype;
	if(classtype=="business" && weight <=40)
	{
		price=weight*15000;
		cout<<"total amount:="<<price;	
	}
	else if(classtype=="business" && weight>=40)
	{	
		price1=40*15000;
		weight=weight-40;
		price2=weight*1000;
		price=price1+price2;
		cout<<"total price :="<<price;
	}
	else if(classtype=="economy" && weight<=25)
	{	
		price=weight*8000;
		cout<<"total price :="<<price;
	}
	else if(classtype=="economy" && weight>=25)
	{	
		price1=25*8000;
		weight=weight-25;
		price2=weight*500;
		price=price1+price2;
		cout<<"total price :="<<price;
	}
	
	else
	{
		cout<<"sorry";
	}
}
