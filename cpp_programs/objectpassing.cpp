#include <iostream>
//#incl

using namespace std;

class complex{
  private:
    int real;
    int img;
  public:
    void showcomplex(){
        cout<<real<<"+"<<img<<"i"<<endl;}

    void setcomplex(int r,int i){
      real=r;
      img=i;}

    complex addcomplex(complex c){
    //  cout<<real<<"+"<<img<<"i"<<endl;
      complex temp;
      temp.real = real+c.real;
      temp.img =img+c.img;
      return temp;
    }
    //string getcomplex(){return name;}

};


int main (){
  complex c1,c2,c3;
  c1.setcomplex(3,4);
  c2.setcomplex(4,5);
  c1.showcomplex();
  c2.showcomplex();
  c3=c1.addcomplex(c2);
  c3.showcomplex();
}
