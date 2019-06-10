#include <iostream>

using namespace std;


class student{
  int sid;
  string name;

public:
  student(int x,string n){
    sid=x;
    name=n;
  }

  void display();
};
//===============================================
inline void student::display(){
  std::cout <<"I am display:::"<< "sid "<<sid<<"\t name"<<name << '\n';
}
//=============================================
inline int max(int x,int y){
  return x>y?x:y;
}
//======================================================
int main(){
  std::cout <<max(10,20)<< '\n';


  student  s1 (10,"Madhav");
  s1.display();
  return 0;
}
