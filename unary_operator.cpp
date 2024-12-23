#include<iostream>
using namespace std;
class data{
public:
int num1;
 data(int n){
num1=n;
}
void data::operator-(data t1)
{
num1= -num1;
return num1;
}
void display()
{
cout<<"value="<<num1;
}
};
int main(){
data t1(10),r(0);
r=-t1;
r.display();
return 0;
}
