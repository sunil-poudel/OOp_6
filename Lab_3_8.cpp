//8.	WAP to add and swap private data of two different classes. Use separate function for add and swap

#include <iostream>
using namespace std;

class class1{
private:
     int data;
public:
    void setData(int myData){
        data = myData;
    }
    int getData(){
        return data;
    }
};
class class2{
private:
    int data;
public:
    void setData(int myData){
        data = myData;
    }
    int getData(){
        return data;
    }
};

void add(class1 c1, class2 c2){
    int sum = c1.getData()+c2.getData();
    cout<<"The sum of private data of two classes is: "<<c1.getData()<<"+"<<c2.getData()<<"="<<sum<<endl;
}
void swap(class1 c1, class2 c2){
    cout<<"Before swap: private data of: class 1 = "<<c1.getData()<<", class 2 = "<<c2.getData()<<endl;
    int temp = c1.getData();
    c1.setData(c2.getData());
    c2.setData(temp);
    cout<<"After swap: private data of: class 1 = "<<c1.getData()<<", class 2 = "<<c2.getData()<<endl;
}
int main(){
    class1 c1; class2 c2;
    c1.setData(25);
    c2.setData(35);
    add(c1, c2);
    swap(c1, c2);
}