#include <iostream>

using namespace std;


class rectangle{
  int height;
  int width;

public:
  rectangle(){
    width=0;height=0;
    std::cout << "Default constructor" << '\n';
  }

  rectangle(int w, int h){
    width=w;height=h;
    std::cout << "parameteised constructor" << '\n';
  }

  ~rectangle(){
    std::cout << "Destructor" << '\n';
  }

  void set(int w, int h){
    width=w;
    height=h;
  }

  int area (){return width*height;}

};


int main (){
  rectangle *r=new rectangle;
  r->set(10,20);
  cout<<r->area()<<endl;
  delete r;

  try{
  r=new rectangle[3];}
  catch(bad_alloc xa){
    cout<<"memeoy allocation failed."<<endl;
    return 1;
  }
  r[0].set(90,20);
  r[1].set(20,30);
  r[2].set(40,50);
  for (int i=0;i<3;i++){
    cout<<(r+i)->area()<<endl;
    cout<<r[i].area()<<endl;
  }

  delete [] r;
return 0;
}
