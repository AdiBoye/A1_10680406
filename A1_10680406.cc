# include <iostream>

using namespace std;

int main ()

{

    int n, a;
    
bool optimus = true;
 
   cout<<"hello, enter a positive number"<<endl;
 
   cin>>n;
  
  int b = n/2;
  
  for (a=2; a<=b; ++a) 
{
     
   if(n % a == 0) {
optumus = false;
 break;
}

    }

    if (optimus) cout<< n <<" is a prime number"<<endl;

    else cout << n <<" is not a prime number"<<endl;
 
   return 0;

}