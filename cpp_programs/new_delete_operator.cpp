# include <iostream>

using namespace std;


int main(){

  int *p = new int;
  *p=10;
  std::cout << *p << '\n';
  delete p;
  std::cout << *p << '\n';


  int nostu,avg=0,sum=0;
  std::cout << "Enter # students in class" << '\n';
  cin>>nostu;
  int *q= new int [nostu];
  for (int i=0;i<nostu;i++){
    std::cout << "enter marks for"<<(i+1) << '\n';
    cin>>*(p+i);
  }

  for (int i=0;i<nostu;i++){
    sum +=*(p+i);
  }
  delete [] q;
  avg=sum/nostu;
  std::cout << "average of the class is:"<<avg << '\n';
  return 0;
}
  
