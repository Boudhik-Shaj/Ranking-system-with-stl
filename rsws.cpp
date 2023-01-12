#include <iostream>
#include <vector>
#include <algorithm>
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

bool cmp(struct marks a, struct marks b)
{
    int r1=a.mark;
    int r2=b.mark;
    return r1 > r2;
}

int ranking(struct vector<int>& marks,int n){
  sort(marks.begin(), marks.end(), cmp);
  
  return 0;
}

int main(){
  vector<vector<int>> marks{ { 301, 72},{ 302, 56 },{ 303, 94 } };// 2d-vector created 
  int n=marks.size();
  ranking(marks,n); 
  //error  reference of type "std::vector<int, std::allocator<int>> &" (not const-qualified) cannot be initialized with a value of type "std::vector<std::vector<int, std::allocator<int>>, std::allocator<std::vector<int, std::allocator<int>>>>"C/C++(434)
  for (int i = 0; i < marks.size(); i++) {
        for (int j = 0; j < marks[i].size(); j++)
            cout << marks[i][j] << " ";
        cout << endl;
    }
  return 0;
}
