#include <iostream>
#include <vector>
using namespace std;

struct marks {
    int id, mark;
 
    // Constructor
    marks(int id, int mark)
    {
        this->id = id;
        this->mark = mark;
    }
};

int main(){
  vector<vector<int> > marks{ { 301, 72},{ 302, 56 },{ 303, 94 } };// 2d-vector created 

  return 0;
}
