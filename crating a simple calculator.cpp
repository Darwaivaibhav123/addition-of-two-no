#include <iostream>

using namespace std;

int add( ){
     int a ,b ,c ;
     cout <<"enter the first numbers:"<<endl;
     cin>>a;
     cout <<"enter the second numbers:"<<endl;
     cin>>b; 
     c = a+b;
     
    
     cout<< "addition of numbers are :"<< c ;
     return c;
  
}
 int sub ()
 {
     
     int a ,b ,c ;
     cout <<"enter the first numbers:"<<endl;
     cin>>a;
     cout <<"enter the second numbers:"<<endl;
     cin>>b; 
     c = a-b;
     cout<< " substration of numbers are :"<< c ;
     return c;
 }
    
   

int  multi()
{
     int a ,b ,c ;
     cout <<"enter the first numbers:"<<endl;
     cin>>a;
     cout <<"enter the second numbers:"<<endl;
     cin>>b; 
     c = a*b;
     cout<< "multiplication  of numbers are :"<< c ;
     return c;
   
}
int division(){
     int a ,b ,c ;
     cout <<"enter the first numbers:"<<endl;
     cin>>a;
     cout <<"enter the second numbers:"<<endl;
     cin>>b; 
     c = a/b;
     cout<< "division of numbers are :"<< c ;
     return c;
    
}

int main()
{
    int ch;
    cout<<"enter your choice";
    cin>>ch;
    switch(ch)
    {
       case 1 :
          add();
          break ;
       case 2 :
          sub();
          break ;
       case 3 :
          multi();
          break;
   
       case 4 :
          division();
          break ;
      
    
    }
    return 0;
     
}

