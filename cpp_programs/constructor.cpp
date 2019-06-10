#include <iostream>

using namespace std;

class student{
  private:
    int sid;
    string name;

  public:
    student(int s,string n){
      cout<<"I am the constructor"<<endl;
      sid=s;
      name=n;
    }

    void showdata(){
      cout<<"sid is"<<sid<<endl;
      cout << "name is" <<name <<'\n';}
};

int main(){
  student s1(3,"rishi"),s2(4,"Ialmsl");
  s1.showdata();
  s2.showdata();
  return 0;
}
