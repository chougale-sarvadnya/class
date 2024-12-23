#include<iostream>
using namespace std;
class weight{
int kilogram,gram;
public:
    void getdata();
    void putdata();
    void sum_weight(weight,weight);
};
void weight::getdata(){
cout<<"\n kilogram";
cin>>kilogram;
cout<<"\n gram";
cin>>gram;
}
void weight::putdata(){
cout<<kilogram<<"\t"<<gram;
}
void weight::sum_weight(weight w1,weight w2){
gram=w1.gram+w2.gram;
kilogram=gram/1000;
gram=gram%1000;
kilogram=kilogram+w1.kilogram+w2.kilogram;
}
int main(){
weight w1,w2,w3;
cout<<"\n weight1:";
w1.getdata();
cout<<"\n weight2:";
w2.getdata();
w3.sum_weight(w1,w2);
cout<<"\n weight";
w1.putdata();
cout<<"\n weight2";
w2.putdata();
cout<<"Total weight";
w3.putdata();
return 0;
}
