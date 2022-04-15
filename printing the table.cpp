//print the tables  by value enterd by users 
#include <iostream>
using namespace std;
int main (){
    int a ,num;
    cout<< "enter the numbers for prating the table = ";
    cin>>a;
    for ( int i=1; i<=10;i++)
    
    {   
        num =a*i;
        cout<<"\n"<<a <<"*"<<i<<"="<< a*i<<"\n"; 
        cout<< "print the value num is ="<<num <<"\n";
        
        
    }
    return 0;
}
