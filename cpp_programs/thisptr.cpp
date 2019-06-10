
#include <iostream>
#include <cstring>

using namespace std;

class box{
  int length,breadth,height;

public:
  box(int length,int breadth,int height){
    std::cout << "I am the constructor" << '\n';
    this->length=length;
    this->breadth=breadth;
    this->height=height;
  }


  void calvolume(){
    std::cout << "/* volume: */" <<this->length*this->breadth*this->height<< '\n';
  }
  void showbox(){
    std::cout << length<<breadth<<height << '\n';
  }

  static void function1(){
    std::cout << "I am static function" << '\n';
  }
};

int main(){
  box b1(1,2,3),b2(3,4,5);
  b1.calvolume();
  b2.calvolume();

  return 0;
}
