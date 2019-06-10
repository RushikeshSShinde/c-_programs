#include <iostream>
//#incl

using namespace std;

class student{
public:
    int sid;
    string  name;
    string subject;
    void dance(int num,string temp){cout<<num<<": dances on "<<temp<<endl;}
    void nodance(string temp,string sub){cout<<temp<<"dance on"<<sub<<endl;}
};


int main (){
  student s1;
  s1.sid=002;
  s1.name="Rishi";
  s1.subject="cpp";
  s1.dance(s1.sid,s1.name);
}
