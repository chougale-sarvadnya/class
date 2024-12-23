#include<iostream>
using namespace std;
class teacher{
int id;
char name[25];
public:
    void data()
    {
    cout<<"enter id=";
    cin>>id;
    cout<<"enter name=";
    cin>>name;
    }
void display(){
cout<<"\n id no="<<id;
cout<<"\t name="<<name;
}
};
class student:public teacher{
void s_data()
{
void data();
void display();
}
};
int main(){
teacher t1,t2;
student s1,s2;
t1.data();
t2.data();
s1.data();
s2.data();
t1.display();
t2.display();
s1.display();
s2.display();
return 0;
}
