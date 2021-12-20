#include<iostream>
using namespace std;
int main()
{
    string day;
    string month;
    float purchase;
    cout<<"enter month:";
    cin>> month;
    cout<<"enter days:";
    cin>> day;
    cout<<"enter amount:";
    cin>> purchase;
    float discount=0;
    int price=0;
    if(day == "sunday" && month == "march" || day == "sunday" && month == "october" )
    {
        discount=(purchase*10)/100;
        
    }
    if(day == "monday" && month == "november" || day == "monday" && month == "december" )
    {
        discount=(purchase*5)/100;
        
    }
    price=purchase-discount;
    cout<<"payable amount:"<<price;
}