#include<iostream>
using namespace std ;
int main ()
{
    int year;
    cout<< "enter the year = ";
    cin>>year;
    if (year%4==0)
    {
        cout<<"given year is leap year ";
        }
    else
    {
        cout<<"given year is not leap year";
    }
    return 0;

}
