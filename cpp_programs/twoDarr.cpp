#include <iostream>
#include <string>
using namespace std;

int main()
{
int arr[3][2]={{1,2},{2,3},{3,4}};

for (int i=0;i<3;i++){
for (int j=0;j<2;j++){
  std::cout << arr[i][j] ;
}
std::cout << '\n';}
return 0;
}
