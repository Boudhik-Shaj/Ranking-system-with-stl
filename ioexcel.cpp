#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <iterator>
using namespace std;
// #include <typeinfo>

void read(){
  ifstream fin;
  fin.open("marklist.csv", ios::in);
  int rollno,mark;
  // map<int, int> mp;
  if(fin.fail()){
    cerr<<"Cannot open file"<<endl;
  }
  string temp;
  while (getline(fin,temp,',')){
    
    
    // cout<<typeid(temp).name()<<endl;
    int num;
    while (temp>>num)
    {
      cout<<num<<endl;
    }
    
    // cout<<temp<<endl;
    // int cmpt=stoi(temp);
    // if(cmpt>100){
    //   rollno=cmpt;
    //   cout<<rollno<<endl;
    // }
    // else{
    //   mark=cmpt;
    //   cout<<mark<<endl;
    // }
    // mp.insert(rollno,mark);
    // cout<<temp<<endl;
  }
  // map<int,int>::iterator it =mp.begin();
  // while(it!=mp.end()){
  //   cout<< it->first<<" "<<it->second<<endl;
  //   it++;
  // }
fin.close();
}

int main(){

    read();
    return 0;
}