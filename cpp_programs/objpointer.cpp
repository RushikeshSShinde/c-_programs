
#include <iostream>
#include <cstring>

using namespace std;

class box{
  int length,breadth,height;

public:
  box(int l,int b,int h){
    std::cout << "I am the constructor" << '\n';
    length=l;
    breadth=b;
    height=h;
  }


  void calvolume(){
    std::cout << "/* volume: */" <<length*breadth*height<< '\n';
  }
};

int main(){
  box b1(1,2,3),b2(3,4,5);
  box *p;
  p= &b1;
  b1.calvolume();
  p -> calvolume();
  return 0;
}
