#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// struct marks {
//     int id, mark;
 
//     // Constructor
//     marks(int id, int mark)
//     {
//         this->id = id;
//         this->mark = mark;
//     }
// };

// bool cmp(struct marks a, struct marks b)
// {
//     int r1=a.mark;
//     int r2=b.mark;
//     return r1 > r2;
// }
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);
}

// int ranking(struct vector<int>& marks,int n){
  
  
//   return 0;
// }


int main(){
  vector<vector<int>> marks{ {20301, 72},{20302, 56 },{20303, 94 } };// 2d-vector created 
  int n=marks.size();
  // ranking(marks,n); 
  sort(marks.begin(), marks.end(), cmp);

  for (int i = 0; i < marks.size(); i++) {
        for (int j = 0; j < marks[i].size(); j++)
            cout << marks[i][j] << " ";
        cout << endl;
    }
  return 0;
}
