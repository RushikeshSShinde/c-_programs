#include <iostream>
//#incl

using namespace std;

class student{

    int sid;
    string  name;
    string subject;
  public:
    void setdata(){
      cout<<"id"<<endl;
      cin>>sid;
      cout<<"name"<<endl;
      cin>>name;
      cout<<"subject"<<endl;
      cin>>subject;}
    void showdata(){
        cout<<"id:"<<sid<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"subject:"<<subject<<endl;}
};


int main (){
  student s1;
  // s1.sid=002;
  // s1.name="Rishi";
  // s1.subject="cpp";
  s1.setdata();
  s1.showdata();
}
