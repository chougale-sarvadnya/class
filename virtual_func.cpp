#include<iostream>
using namespace std;
class base{
public:
 virtual void show(){
cout<<"data of base class";
}
};
class derived:public base{
public:
void show()
{
cout<<"data of dervived class";
}
};
int main(){

derived d1;
base *ptr;
ptr=&d1;
ptr->show();
return 0;
}
