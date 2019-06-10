# include <iostream>

using namespace std;


int main(){

  int p=11, n=1;
  int flag=1;
  while(flag){
    cout<<n<<endl;
    if ((n%2==1) && (n%3==2) && (n%4==3) && (n%5==4) && (n%6==5) && (n%7==6) && (n%8==7) && (n%9==8) && (n%10==9) && (n%11==10)){
      cout<<"the final number is :"<<n<<endl;
      flag=0;
      break;
    }
    n++;
   }
  return 0;
}
