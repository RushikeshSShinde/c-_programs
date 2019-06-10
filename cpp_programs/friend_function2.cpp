#include <iostream>

using namespace std;
//=====================================================
class myclass2;
class myclass{
private:
  int x,y;

public:
  myclass(int x,int y ){
    this->x=x;
    this->y=y; }
  friend void function(myclass,myclass2);
};
//==========================================================
class myclass2{
private:
  int x,y;

public:
  myclass2(int x,int y ){
    this->x=x;
    this->y=y; }
  friend void function(myclass,myclass2);
};
//==================================================
void function(myclass m1,myclass2 m2){
  cout<<m1.x+m2.x<<endl;
}
//=====================================
int main (){
  myclass m1(10,20);
  myclass2 m2(30,40);
  function(m1,m2);

  return 0;
}
