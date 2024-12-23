#include<iostream>
using namespace std;
class num{
int n;//private access specifier
public:
void display(){
cout<<"number is"<<n;
}
};
int main(){
num a;
//private outside the class access hot nahi manun error yeto
a.n=10;//error
a.display();
return 0;
}
