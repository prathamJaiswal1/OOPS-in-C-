#include<bits/stdc++.h>
using namespace std;
// #include "inheritence2.cpp"

// compile time polymorphism
// 1.function overloading
int test(){
    return 1;
}
int test(int a){
    return a;
}
int test(int a,int b){
    return a+b;
}
// 2.operator overloading

// 3.method overriding
class vehicle{
   public:
   void print(){
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
    // vehicle v;
    // v.print();
    // vehicle *v;
    // v=&c;
    // v->print();

    vehicle *v=new vehicle;
    v->print();
    return 0;
}