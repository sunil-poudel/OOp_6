//2.	Program to show constructor overloading
#include <iostream>
using namespace std;
class student{
private:
    string name="sunil poudel";
    int age=21;
    string address="pokhara-19";
public:
    student(){
        cout<<"Default constructor!!"<<endl;
        display();
    }
    student(string name, int age, string address):name(name), age(age), address(address){
        cout<<"Constructor with three arguments!!"<<endl;
        display();
    }
    student(string name):name(name){
        cout<<"Constructor with one argument, other two default values!!"<<endl;
        display();
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<string(50, '-')<<endl;
    }
};
int main(){
    student s1;
    student s2("Ram",20,"Kathmandu");
    student s3("Shyam");
}