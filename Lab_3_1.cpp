//1.	Program to count number of objects created automatically

#include <iostream>
using namespace std;

class myClass{
private:
    static int count;
public:
    myClass(){
        count++;
        cout<<"object created! Count --> "<<count<<endl;
    }
    void getCount(){
        cout<<"You created "<<count<<" objects using count!"<<endl;
    }

};
int myClass::count;
int main(){
    myClass class1;
    myClass class2;
    myClass class3;
    myClass class4;
    class4.getCount();
}