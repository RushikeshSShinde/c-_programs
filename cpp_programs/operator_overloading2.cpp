# include <iostream>
using namespace std;

class counter{
  int count;

public:
  counter (int count){this->count=count;}

  void display(){
    std::cout << "count:"<<count << '\n';
  }

  void operator++();
};
//=====================================

 void counter:: operator++(){
   this->count+=1; }
//======================================
int main (){
  counter c1(10);
  c1.display();
  ++c1;
  c1.display();

  return 0;
}
