#include <iostream>

using namespace std;

class myclass{
private:
  int x,y;

public:
  myclass(int x,int y ){
    this->x=x;
    this->y=y; }
  friend void function(myclass);
};

void function(myclass m){
  cout<<m.x<<endl;
}

int main (){
  myclass m1(10,20);
  function(m1);

  return 0;
}
