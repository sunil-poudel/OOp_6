//4.	The program should have conversion function to convert 12 hr to 24 hr system
#include <iostream>
using namespace std;

void timeConversion(int hour, int minute, string ap);
int main(){
    timeConversion(3, 23, "pm");
    timeConversion(5, 45, "am");
}

void timeConversion(int hour, int minute, string ap){
    cout<<"In 24 hour format, time: "<<hour<<":"<<minute<<" "<<ap<<" is: ";
    if(ap=="AM"||ap=="am")
        cout<<hour<<":"<<minute<<endl;
    else
        cout<<(hour+12)<<":"<<minute<<endl;
}