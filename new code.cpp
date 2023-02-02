#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Student {
  int rollno;
  int score;
};

bool compareStudents(const Student &s1, const Student &s2) {
  return s1.score > s2.score;
}

int main() {
  vector<Student> students = {
        {20301,10},
        {20302,20},
        {20303,15},
        {20304,25}
 };

  sort(students.begin(), students.end(), compareStudents);
  cout<<"_______________________________"<<endl;
  cout<<"| Rank  |  RollNo.  |  Score  |"<<endl;
  cout<<"-------------------------------"<<endl;
  int rank = 1;
  for (const auto &student : students) {
    cout <<"|   "<< rank << "   |   " << student.rollno << "   |   " << student.score <<   "    |"<<endl; 
    rank++;
  }
cout<<"_______________________________"<<endl;
  
  return 0;
}
