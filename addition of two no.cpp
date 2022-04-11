#include <iostream>
using namespace std ;
int main ()
{
    
    int a ,b ,sum ,  substration, avg ;
    cout<< "enter the first  two  no = ";
    cin>> a ;
    cin>> b ;
    sum = a +b ;
    avg= sum/2; 
    substration = a-b;
    cout<< "sum of two no are = "<<sum<<endl ;
     cout<< "sum of two no are = "<< avg<<endl ;
    cout<< "sum of two no are = "<< substration<<endl ;
    cout<< "hello world";
    return 0 ;
}
//Print the no that enter by users
#include <iostream>

using namespace std;

int main()
{
  int a;
  cout<< "enter the no = ";
  cin>>a ;
  cout<< "print the no that you are enterd ="<<a ;
  }
//revers the two no 
#include <iostream>

using namespace std;


int main()
{
  int a , b,temp ;
  cout << "enter a first no ="<<endl;
  cin>>a ;
  cout << "enter a second no = "<<endl;
  cin>>b;
  temp=a;
  a=b;
  b=temp;

  cout<<"new value of a is ="<<a;

cout<<"new value of b is="<<b;
  return 0;
}
//find even and odd no 
#include <iostream>

using namespace std;

int main()
{
    int a  ;
  cout << "enter a  no =";
  cin>>a ;
  if (a%2==0  )
  cout<<"given no is even ";
  else if (a%2!=0)
  cout<<"given no is odd " ;
   else if  (a==0 ) 
   cout << "given no is 0";
  return 0;
}




