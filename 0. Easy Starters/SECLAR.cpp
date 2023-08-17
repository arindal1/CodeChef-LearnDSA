
#include <bits/stdc++.h>                    
#define ll long long int                    
#define el endl                             
using namespace std;                        
int main (){                                
	vector <ll> t(3) ;                                  
	for(auto &i:t)
	    cin>>i;
	sort(t.begin(),t.end());
	cout<<t[1];
	return 0;                              
}