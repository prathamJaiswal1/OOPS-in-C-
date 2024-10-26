#include<bits/stdc++.h>
using namespace std;
class vehicle{
private:
    int no;
protected:
    int model;
public:
    int tyres;
};
class car:public vehicle{
    public:
    void print(){
        cout<<model<<" ";
    }
};
class car2:private vehicle{
     
};
class car3:protected vehicle{

};
int main(){
    // car c;
    // c.tyres=18;
    // cout<<c.tyres<<" ";
    // c.print();

    // car2 c;
    // cout<<c.no<<" ";
    // cout<<c.model<<" ";
    // cout<<c.tyres<<" ";

    car3 c;
    cout<<c.no<<" ";
    cout<<c.model<<" ";
    cout<<c.tyres<<" ";

    return 0;
}