//6.	Define a class box with private data members: length and breadth and height.
// Initialize its data members with some fixed values using a constructor.
// Use the object of that class and calculate volume of a box

#include <iostream>
using namespace std;

class Box{
private:
    int length;
    int breadth;
    int height;

public:
    Box(int length, int breadth, int height): length(length), breadth(breadth), height(height){
    }
    void volume(){
        cout<<"Volume is: "<<(length*breadth*height)<<endl;
    }
};

int main(){
    Box box(10, 4, 6);
    box.volume();

}