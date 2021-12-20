#include<iostream>
using namespace std;
int main()
{
    string day;
    float purchase;
    cout<<"enter amount:";
    cin>> purchase;
    cout<<"enter days:";
    cin>> day;
    float discount=0;
    int price=0;
    if(day == "sunday" && purchase >= 5000 )
    {
        discount=(purchase*10)/100;
        
    }
    price=purchase-discount;
    cout<<"payable amount:"<<price;
}