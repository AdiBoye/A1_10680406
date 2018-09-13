#include <iostream>

using namespace std;
 int factor (int a, int b) { if (a == 0) { return b;}
 else if (b%a == 0) { return a;}
 else {return factor ( a-1 ,b );}
 }
 int main()
 { int a,b;
     cout <<"Enter the least integer of the numbers you want to find the greatest common divisor"<<endl;
     cin>>a;
     cout <<"Enter the greatest integer of the numbers you want to find the greatest common divisor"<<endl;
     cin>>b;
     int d = factor ( a ,b );
     cout << " The greatest common factor of "<< a <<" and "<< b <<" is "<<d<<endl;
     return 0;
 }

