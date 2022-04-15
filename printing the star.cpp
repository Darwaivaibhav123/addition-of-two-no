// printing the star  in  single line 
#include <iostream>

using namespace std;
int main (){
    int a;
    cout<< "enter the numbers for prating the value of star = ";
    cin>>a;
    for ( int i=1; i<=5;i++)
    
    {   
       
        cout <<"*"  ;
        
    }
    return 0;
}
// print star in ascending order
#include <iostream>

using namespace std;
int main (){
    int a;
    cout<< "enter the numbers for prating the value of star = ";
    cin>>a;
    for ( int i=0; i<a;i++)
    { 
        for ( int j =0  ; j <=i ; j++){
             
            cout <<"*"  ;
        }
       
        cout <<"\n";
        
    }
    return 0;
}
