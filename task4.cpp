
#include<iostream>
using namespace std;
main()
{
    int price=0;
    string brand;
    cout<<"enter a cost:";
    cin>>price;
    cout<<"enter brand name:";
    cin>> brand;
    if(price<1500 && brand=="MTJ")
    {
       cout<<"you will buy the dress:";
    }
    else 
    {
        cout<<"sorry you cann't buy:";
    }
}