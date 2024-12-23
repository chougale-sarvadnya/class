#include<iostream>
using namespace std;
class stock{
int i,q,p,c;
public:
    void get();
    void put();
};
void stock::get(){
cout<<"\n enter item no quantity,price";
cin>>i>>q>>p;
}
void stock::put(){
c=q*p;
cout<<"\n"<<i<<"\t\t"<<q<<"\t\t"<<p<<"\t\t"<<c;
}
int main(){
int b;
stock s[1];
for(b=0;b<1;b++)
s[b].get();
cout<<"\n item no"<<"\t"<<"quantity"<<"\t"<<"price"<<"\t"<<"amount";
for(b=0;b<1;b++)
s[b].put();
return 0;
}
