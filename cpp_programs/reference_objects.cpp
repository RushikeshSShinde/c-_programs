#include <iostream>

using namespace std;

class myclass{
public:
  int x,y;

  myclass(int x, int y){
    this->x=x;
    this->y=y;
    std::cout << "I am parameterized constructor" << '\n';}

  void display(){
  cout<<x<<y<<endl;}

  void function1(myclass &m){
     m.x*=m.x;
     m.y*=m.y;  }
};

int main (){
  myclass m1(10,20);
  myclass &m2=m1;

  m2.x+=10;
  m2.y+=50;
  m1.display();
  m2.display();

  myclass m3(5,6);
  m3.function1(m3);
  m3.display();


  return 0;
}
