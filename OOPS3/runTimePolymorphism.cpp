#include<bits/stdc++.h>
using namespace std;
// a class having atleast one virtual function with no definition is called as
// abstract class , we cant create an object of abstract class;
class abstractClass{
   public:
   virtual void print()=0;  // pure virtual function
};

// 
class vehicle{
   public:
   virtual void print(){  //virtual fucntion
      cout<<"vehicle"<<endl;
   }
};
class car:public vehicle{
   public:
   void print(){
      cout<<"car"<<endl;
   }
};
int main(){
    car c;
    c.print();

    vehicle *v2=new car;
    v2->print();

    // error
    // abstractClass ac;
    return 0;
}