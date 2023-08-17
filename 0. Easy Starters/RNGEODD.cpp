
#include <bits/stdc++.h>                    
#define ll long long int                    
#define el endl                             
using namespace std;                        
int main (){                                
	ll a , b ;                                  
	cin >> a >> b ;                              
	if(a%2==0)  a++;
	for(;a<=b;a+=2)
	    cout<<a<<" ";
	return 0;                              
}