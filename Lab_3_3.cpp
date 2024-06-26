//3.	Program that creates a class which represent time measurement in 12 hr system.
#include <iostream>
using namespace std;
class myTime{
private:
    int hours;
    int minutes;
    string ap;
public:
    myTime(int hours, int minutes):hours(hours), minutes(minutes){

    }
    void display(){
        if(hours<=12 && hours>=1){
            cout<<hours<<":"<<minutes<<" am"<<endl;
        } else if(hours==0||(hours>12&&hours<24)){
            if(hours==0)
                cout<<"12:"<<minutes<<" am"<<endl;
            else
                cout<<(hours-12)<<":"<<minutes<<" pm"<<endl;
        }
    }
};
int main(){
    myTime t1(1, 23);
    myTime t2(0, 30);
    myTime t3(21, 45);
    t1.display();
    t2.display();
    t3.display();
}