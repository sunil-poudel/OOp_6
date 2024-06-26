//5.	Program to show the dynamic initialization of an object of class
#include <iostream>
using namespace std;

class myClass {
    int* value;

public:
    myClass()
    {
        *value = 10;
    }

    void display()
    {
        cout<< "Value: " << *value<<endl;
    }
};

int main()
{
    myClass* object1 = new myClass();
    myClass* object2;

    object2 = object1;

    object1->display();
    object2->display();

    delete object1;

    return 0;
}