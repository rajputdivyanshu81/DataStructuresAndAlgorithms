#include<iostream>
using namespace std;


//we can resolve so many problems by the use of the runtime polymorphism we can use virtual keyword by deffering binding decision to runtime
// we use upcasting and downcasting methods

class Shape{
    public:
    virtual void draw(){
        cout << "generic drawing " << endl;

    }
};

//draw is polymorphic it changes it shape at the runtime
class Circle : public Shape{
    public:
     void draw() override{
         cout << " circle is drawing..." << endl;
     }

};
class Rectangle : public Shape{
    public:
     void draw() override{
         cout << " Rectangle is drawing..." << endl;
     }

};
void ShapeDrawing(Shape *s){
    s->draw();
}
int main(){

    Circle c;
    Rectangle r;

    ShapeDrawing(&r);
    return 0;
}