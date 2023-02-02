#include <string>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct Student {
  int name;
  int score;
};

bool compareStudents(const Student &s1, const Student &s2) {
  return s1.score > s2.score;
}

int main() {
  vector<Student> students = {
        {301,10},
        {302,20},
        {303,15},
        {304,25}
 };

  sort(students.begin(), students.end(), compareStudents);
  cout<<"_______________________________"<<endl;
  cout<<"| Rank  |  RollNo.  |  Score  |"<<endl;
  int rank = 1;
  for (const auto &student : students) {
    cout <<"|   "<< rank << "   |    " << student.name << "    |   " << student.score <<   "    |"<<endl; 
    rank++;
  }
cout<<"_______________________________"<<endl;
  
  return 0;
}
