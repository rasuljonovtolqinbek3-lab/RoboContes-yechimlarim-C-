#include <iostream>
using namespace std;
int main(){
	int a , b , c ;
	cin >> a >> b >> c ;
	if( a % 2 == 0)
	  a = a / 2;
	else 
	  a = ( a / 2 ) + 1;
	
	if( b % 2 == 0 )
	  b = b / 2;
	else 
	  b = ( b / 2 ) + 1;
	  
	if( c % 2 == 0 )
	  c = c / 2;
	else 
	  c = (c / 2 ) + 1;
	  
	cout << a + b + c ;
	return 0 ; 
}
