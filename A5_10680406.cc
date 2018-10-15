# include <iostream>

# include <fstream>

using namespace std;

int main()

{

struct student {string id; string name; string age; string gender;int score; string grade;};

// ask for the details

student person[5];


for (int i=0; i<4; i++){student person[i]; cout<<"Enter id number"<<endl <<"Enter name"<<endl <<"Enter Age"<<endl <<"Enter Gender"<<endl<<"Enter Score"<<endl<<"Enter Grade"<<endl;

cin>> person[i].id;
cin>> person[i].name;
cin>> person[i].age;
cin>> person[i].gender;
cin>> person[i].score;

if (person[i].score<40) person[i].grade = "F"; else if (person[i].score<50) person[i].grade= "E"; else if (person[i].score<60) person[i].grade ="D"; else if (person[i].score<70) person[i].grade ="C"; else if (person[i].score<80) person[i].grade ="B"; else person[i].grade ="A";



ofstream output;

output.open("results.txt");

output << "        ID number                Name          Age             Gender            Score                 Grade"<<endl;

for (int j=0; j<4; j++)

 {output <<   j+1 <<".      "<< person[i].id <<"        "<<person[i].age<<"     "<<person[i].gender<<"      "<<person[i].score<<"          "<<person[i].grade<<endl;

}
 output.close();
}
return 0;
}
