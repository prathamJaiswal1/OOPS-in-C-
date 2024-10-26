#include<bits/stdc++.h>
using namespace std;
class vehicle{
private:
    int no;
protected:
    int model;
public:
    int tyres;
    vehicle(){
        cout<<"vehicle constructor called"<<endl;
    }
    ~vehicle(){
        cout<<"vehicle destructor called"<<endl;
    }
};
class car:public vehicle{
    public:
    void print(){
        cout<<model<<" ";
    }
    car(){
        cout<<"car constructor called"<<endl;
    }
    ~car(){
        cout<<"car destructor called"<<endl;
    }
};
class car2:public car{
    public:
     car2(){
        cout<<"car2 constructor called"<<endl;
     }
     ~car2(){
        cout<<"car2 destructor called"<<endl;
     }
};
class car3:public car2{
    public:
     car3(){
        cout<<"car3 constructor called"<<endl;
     }
     ~car3(){
        cout<<"car3 destructor called"<<endl;
     }
};
// int main(){
    
//     // constructor called vehicle->car->car2->car3 
//     // destructor called car3->car2->car->vehicle  opposite to constructor

//     // vehicle v;
//     // car c;
//     car3 c;
//     return 0;
// }