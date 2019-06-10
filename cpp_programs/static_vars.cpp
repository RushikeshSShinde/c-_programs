#include <iostream>
#include <cstring>

using namespace std;

class student{
  private:
    int sid;
    string name;
    static string teachername;//declared stv

  public:
    static int teacherage;//declared stv
    student(){cout<<"I am the empty constructor"<<endl;}

    student(int s,string n){
      cout<<"I am the constructor"<<endl;
      sid=s;
      name=n;
    }

    void showdata(){
      cout<<"sid is"<<sid<<endl;
      cout << "name is" <<name <<'\n';
      cout << "teachername is" <<teachername <<'\n';
      }

    void teacher(string t) {
      teachername=t;
    }
};
string student :: teachername="anita";//defined stv
int student :: teacherage=40;//defined stv

int main(){
  cout << student :: teacherage<<endl;
  student s1(3,"rishi"),s2(4,"Ialmsl");
  s1.showdata();
  s2.showdata();
  s1.teacher("govind");
  s1.showdata();
  s2.showdata();
  return 0;
}
