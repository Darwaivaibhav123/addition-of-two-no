#include <iostream>

using namespace std;

int main()
{
   int a, b, c ; 
   cout <<"enter the first no = ";
   cin>>a;
   cout <<"enter the second no = ";
   cin>>b;
   cout <<"enter the third no = ";
   cin>>c;
   if (a>b & a>c )
   cout<<"a is greter than b and c ";
   else if (b>a & b>c)
    cout<<"b is greter than a and c ";
    else 
     cout<<"c is greter than b and a";

    return 0;
}
