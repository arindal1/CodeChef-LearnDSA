#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	if(((N%5)==0 || (N%11)==0))
	{
	   if((N%5)==0 && (N%11)!=0)
	   {
	       cout<<"ONE";
	   }
	   else if((N%11)==0 && (N%5) != 0)
	   {
	       cout<<"ONE";
	   }
	   
	   else if((N%5)==0 && (N%11)==0)
	   {
	       cout<<"BOTH";
	   }
	  
	   
	}
	else
	{
	    cout<<"NONE";
	}
	return 0;
}