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
        {20303,5,6,9},
        {20304,6,8,7},
        {20305,8,6,7},
        {20306,9,8,9},
        {20307,9,8,7},
        {20308,6,5,8},
        {20309,10,9,9},
        {20310,8,7,9} 
      
 };

  sort(students.begin(), students.end(), compareStudents);
  int sel,rank = 1;
  char loopbreak='y';
  while(loopbreak=='y'){
    cout<<"Enter from list below\n1.Rank list\n2.Marklist for specific student"<<endl;cin>>sel;
  switch(sel){
      case 1:  cout<<"__________________________________________________________________"<<endl;
            cout<<"| Rank  |  RollNo.  |  Sem1  |  Sem2  |  Sem3  |  CGPA  |  Grade |"<<endl;
             cout<<"------------------------------------------------------------------"<<endl;
  
            for (const auto &student : students) {
             cout <<"|   "<< rank << "   |   " << student.rollno << "   |   "<<student.sem1<<"    |    "<<student.sem2<<"  |   "<<student.sem3<<"    |    " << student.CGPA <<   "    |    "<< grade(student.CGPA)<<"   |"<<endl; 
                 rank++;
             }
            cout<<"___________________________________________________________________"<<endl;break;
    case 2: int checkRoll;
            cout<<"Enter rollno. : ";
            cin>>checkRoll;
            rank=1;
            for (const auto &student : students) {
             if(student.rollno==checkRoll){
             cout <<"\nStudent Rollno: "<< student.rollno <<"\nRank          : "<<rank<<"\nSemester 1    : "<<student.sem1<<"\nSemester 2    : "<<student.sem2<<"\nSemester 3    : "<<student.sem3<<"\nCGPA          : " << student.CGPA <<"\nGrade         : "<< grade(student.CGPA)<<endl;
        
            }
            else if(student.rollno!=checkRoll){
            rank++;
            continue;
            }
            else{
            cout<<"student rollno incorrect"<<endl;
            }
            }break;
  default:cout<<"number is not in the menu";break;
    }

    cout<<"enter 'y' to continue"<<endl;
    cin>>loopbreak;
    clrscr();
  }
  return 0;
}
