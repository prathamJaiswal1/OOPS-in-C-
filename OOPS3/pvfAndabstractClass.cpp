#include<bits/stdc++.h>
using namespace std;
class employee{
    public:
    //  virtual void calsalary(){
    //     cout<<"empSalary"<<endl;
    //  }

    // pvf
    virtual void calsalary()=0;
};
class hr:public employee{
    public:
     void calsalary(){
        cout<<"hrSalary"<<endl;
     }
};
class engineer:public employee{
    public:
     void calsalary(){
        cout<<"engineerSalary"<<endl;
     }
};
class others:public employee{
     public:
     void calsalary(){
        cout<<"othersSalary"<<endl;
     }
};
int main(){
    engineer e1;
    //employee *e=new employee;//error 
    // e=&e1;
    // e->calsalary();
    return 0;
}