#include <iostream>

using namespace std;

int main(){

  int i=10,j=10;
  int &var=i;
  int &var=j;
  var++;
  var=j;
  j+=10;
  std::cout <<  "var:"<<var<<endl<<"i:"<<i <<endl<<"j:"<<j<< '\n';

  return 0;
}
