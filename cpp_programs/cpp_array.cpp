#include <iostream>
#include <string>
using namespace std;

int main()
{
string stunames[3];
int arr[5]={1,2,3,4,5};
int avg=0,sum=0,max=0;
for (int i=0;i<3;i++){
  stunames[i] = to_string((i+1)*10);
}

for (int i=0;i<3;i++){
  sum = sum + stoi(stunames[i]);
}
avg=sum/3;

for (int i=0;i<3;i++)
  if (max < stoi(stunames[i])) max=stoi(stunames[i]);

  for (int i=0;i<5;i++){
    std::cout << arr[i]<< '\n';
  }
std::cout << avg <<max<< '\n';
  return 0;
}
