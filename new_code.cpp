#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Student {
  int rollno;
  int sem1;
  int sem2;
  int sem3;
  int CGPA= (sem1+sem2+sem3)/3;
};

bool compareStudents(const Student &s1, const Student &s2) {
  return s1.CGPA > s2.CGPA;
}
char* grade(int a){
    char* grad="F";
    switch(a){
        case 1: grad="F" ;break;
        case 2: grad= "F";break;
        case 3: grad= "F";break;
        case 4: grad= "F";break;
        case 5: grad= "P";break;
        case 6: grad= "D";break;
        case 7: grad= "C";break;
        case 8: grad= "B";break;
        case 9: grad= "A";break;
        case 10: grad= "O";break;
    }
    return grad;
}

int main() {
  vector<Student> students = {
        {20301,10,9,9},
        {20302,8,7,6},
        {20303,5,6,9}
      
 };

  sort(students.begin(), students.end(), compareStudents);
  cout<<"__________________________________________________________________"<<endl;
  cout<<"| Rank  |  RollNo.  |  Sem1  |  Sem2  |  Sem3  |  CGPA  |  Grade |"<<endl;
  cout<<"------------------------------------------------------------------"<<endl;
  int rank = 1;
  for (const auto &student : students) {
    cout <<"|   "<< rank << "   |   " << student.rollno << "   |   "<<student.sem1<<"    |    "<<student.sem2<<"  |   "<<student.sem3<<"    |    " << student.CGPA <<   "    |    "<< grade(student.CGPA)<<"   |"<<endl; 
    rank++;
  }
cout<<"___________________________________________________________________"<<endl;
int checkRoll;
cout<<"Do you want get grade for specific student?\nEnter rollno. : "<<endl;
cin>>checkRoll;
for (const auto &student : students) {
    if(student.rollno==checkRoll){
         cout << student.rollno << "   |   "<<student.sem1<<"    |    "<<student.sem2<<"  |   "<<student.sem3<<"    |    " << student.CGPA <<   "    |    "<< grade(student.CGPA)<<"   |"<<endl;
        
    }
    else if(student.rollno!=checkRoll){
        continue;
    }
    else{
        cout<<"student rollno incorrect"<<endl;
    }
}
  return 0;
}
