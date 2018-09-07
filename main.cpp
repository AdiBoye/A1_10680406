#include <iostream>

using namespace std;

int main()
{int marks;
string answer;
string affirmative;
affirmative = "yes";
char name[10];
cout <<" hello, enter your name"<<endl;
cin>> name;
cout << name <<" what your total marks after the exam"<<endl;
cin>> marks;
cout<< "Did you say your marks is "<< marks <<" answer with a yes or no and make sure you caps lock is off"<<endl;
cin>> answer;
if (answer == affirmative){}
else {cout << name <<" re-enter your CORRECT exam score"<<endl; cin>> marks;}
if (marks <45) {cout<< name <<" you had F"<<endl;}
else if (marks < 50) {cout<< name <<" you had E"<<endl;}
else if (marks < 55) {cout<< name <<" you had D"<<endl;}
else if (marks < 60) {cout<< name <<" you had D+"<<endl;}
else if (marks < 65) {cout<< name <<" you had C"<<endl;}
else if (marks < 70) {cout<< name <<" you had C+"<<endl;}
else if (marks < 75) {cout<< name <<" you had B"<<endl;}
else if (marks < 80) {cout<< name <<" you had B+"<<endl;}
else {cout << name <<" you had A"<<endl;}
return 0;
}
