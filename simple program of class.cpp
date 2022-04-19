
#include <iostream>
#include <string>
using namespace std;
class myclass
{
	public:
    int a;
    string mystring ;
    
};
int main()
{
	myclass myobj;
	myobj.a =14 ;
	myobj.mystring= "Some text";
  	cout << myobj.a << "\n";
    cout << myobj.mystring;
    return 0;
}
                             
