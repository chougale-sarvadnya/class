#include<iostream>
using namespace std;
class complex{
int r,i;
public:
complex(){
r=0;
i=0;
}
complex(int real,int img){
r=real;
i=img;
}
void display(){
cout<<r<<"+"<<i<<"i";
}
complex operator+(complex c);
};
complex complex::operator+(complex c){
complex c1;
c1.r=c.r+r;
return(c1);
}
int main(){
complex c1(5,3);
complex c2(7,6);
complex c3;
c3=c1+c2;
c3.display();
return 0;
}
