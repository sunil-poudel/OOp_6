//7.	Define a class named Distance with meter and centimeter as private members.
// Use appropriate member functions to read and display data members.
// Use class Distance to read two objects of distance class and add them
// by passing this object to the function and display the result.

#include <iostream>
using namespace std;
class Distance{
private:
    int distanceM;
    int distanceCm;
public:
    void setDistanceM(int d){
        distanceM=d;
    }
    void setDistanceCm(int d){
        distanceCm=d;
    }
    int getDistanceM(){
        return distanceM;
    }
    int getDistanceCm(){
        return distanceCm;
    }

};

void addDistance(Distance d1, Distance d2){
    int metres = d1.getDistanceM()+d2.getDistanceM();
    int centimetres = d1.getDistanceCm()+d2.getDistanceCm();
    cout<<"Added distances from centimetres: "<<centimetres<<endl;
    cout<<"Added distances from metres: "<<metres<<endl;
}
int main(){
    Distance d1, d2;

    d1.setDistanceCm(20); d1.setDistanceM(25);
    d2.setDistanceCm(15); d2.setDistanceM(40);

    addDistance(d1, d2);
}