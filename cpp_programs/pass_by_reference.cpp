#include <iostream>

using namespace std;

void swap(int &x,int&y){
  int temp;
  temp=x;
  x=y;
  y=temp;
}

int main(){
  int i=10,j=20;
  std::cout <<"i:"<<i <<endl<<"j:"<<j<< '\n';
  swap(i,j);
  std::cout <<"i:"<<i <<endl<<"j:"<<j<< '\n';

  return 0;
}
