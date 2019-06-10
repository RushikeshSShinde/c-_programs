#include <iostream>
#include <cstring>

using namespace std;

class myclass{
  int a;
  static int b;


public:
  static int objcount;
  myclass( int arg ){a=arg; objcount++;}


  void func1(){
    std::cout << "inside 1" << '\n';}

  static void func4(){
      std::cout << "inside 2sc vsvcisbnc" << '\n';
      //std::cout << a << '\n';//can't access a inside static function
      cout<<b<<endl;
  }



};
int myclass :: b=40;//defined stv
int myclass :: objcount=0;

int main(){
  myclass :: func4();
  myclass m1(10),m2(20);
  m1.func1();
  m1.func4();

  m2.func1();
  std::cout << myclass::objcount << '\n';
  return 0;
}
