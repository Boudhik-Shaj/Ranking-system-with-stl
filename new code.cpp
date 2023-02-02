#include <map>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
struct Student {
  string name;
  int score;
};

bool compareStudents(const Student &s1, const Student &s2) {
  return s1.score > s2.score;
}

int main() {
  map<string, int> scores;
  scores["301"] = 100;
  scores["302"] = 200;
  scores["303"] = 150;

  vector<Student> students;
  for (const auto &entry : scores) {
    Student student;
    student.name = entry.first;
    student.score = entry.second;
    students.push_back(student);
  }

  sort(students.begin(), students.end(), compareStudents);

  int rank = 1;
  for (const auto &student : students) {
    cout << rank << ". " << student.name << ": " << student.score << '\n';
    rank++;
  }
  
  return 0;
}
