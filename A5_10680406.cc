# include <iostream>

# include <fstream>

using namespace std;

int main()

{

struct student {string id; string name; string age; string gender; int score; string grade;};

// ask for the details

student person[5]; // declaration of variable in a array form


for (int i=0; i<5; i++)
{
  student person[4];
   cout<<"Enter id number"<<endl;
                   cin>> person[i].id;
   cout <<"Enter name"<<endl;
                   cin>> person[i].name;
   cout   <<"Enter Age"<<endl;
                   cin>> person[i].age;
   cout     <<"Enter Gender"<<endl;
                   cin>> person[i].gender;
   cout      <<"Enter Score"<<endl;
                 cin>> person[i].score;








if (person[i].score<40) person[i].grade = "F"; else if (person[i].score<50) person[i].grade= "E"; else if (person[i].score<60) person[i].grade ="D"; else if (person[i].score<70) person[i].grade ="C"; else if (person[i].score<80) person[i].grade ="B"; else person[i].grade ="A";



ofstream output;

output.open("results.txt");

output << "        ID number                Name          Age             Gender            Score                 Grade"<<endl;



 output <<"1.      "<< person[0].id <<"        "<<person[0].age<<"     "<<person[0].gender<<"      "<<person[0].score<<"          "<<person[0].grade<<endl;
output <<"2.       "<<person[1].id<<"          "<<person[1].age<<"     "<<person[1].gender<<"      "<<person[1].score<<"          "<<person[1].grade<<endl;
output <<"3.       "<<person[2].id<<"          "<<person[2].age<<"     "<<person[2].gender<<"      "<<person[2].score<<"          "<<person[2].grade<<endl;
output <<"4.       "<<person[3].id<<"          "<<person[3].age<<"     "<<person[3].gender<<"      "<<person[3].score<<"          "<<person[3].grade<<endl;
output <<"5.       "<<person[4].id<<"          "<<person[4].age<<"     "<<person[4].gender<<"      "<<person[4].score<<"          "<<person[4].grade<<endl;
 output.close();
}
return 0;
}
