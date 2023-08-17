
#include <bits/stdc++.h>                    
#define ll long long int                    
#define el endl                             
using namespace std;                        
int main (){                                
	ll t , c = 0 ;                                  
	cin >> t ;
	ll s [ t ] ;
	for ( ll i = 1 ; i <= t ; i++ )
	    if ( t % i == 0 )   {
	        s [ c ] = i ;
	        c++ ;
	    }
	cout << c << el ;
	for ( ll i = 0 ; i < c ; i++ )  cout << s [ i ] << " " ;
	return 0;                              
}