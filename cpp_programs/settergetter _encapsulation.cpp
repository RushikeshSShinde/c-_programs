#include <iostream>
//#incl

using namespace std;

class student{
  private:
    int sid;
    string  name;
    string subject;
  public:
    void showdata(){
        cout<<"id:"<<sid<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;}

    void setname(string temp){name=temp;}
    string getname(){return name;}
    void setsid(int temp){
      if (sid<10)
        std::cout << "less sid" << endl;
      else
        sid=temp;}
    int getsid(){return sid;}
    void setsubject(string temp){name=temp;}
    string getsubject(){return subject;}
};


int main (){
  student s1;
  // s1.sid=002;
  // s1.name="Rishi";
  // s1.subject="cpp";
  s1.setname("Rishi");
  cout<<s1.getname()<<endl;
  s1.setsid(9);
  std::cout << s1.getsid() << '\n';
  s1.showdata();
}
