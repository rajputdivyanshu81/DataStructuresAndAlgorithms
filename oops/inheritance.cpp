#include<iostream>
using namespace std;

class Vehicle{

    public:
    string name;
    string model;
    int noOfTyres;

    string getName(){
        return this->name;
    }
    Vehicle(string _name,string _model,int _noOfTyres){
        cout << "hii, i am inside the vehicle ctor" << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

    public:
    void start_engine(){
        cout << "engine is starting" << " " << endl;
    }

    void stop_engine(){
        cout << "engine is stopping" << " " << endl;
    }
};

class Car : public Vehicle{
    public:
    int noOfDoors;
    string transmissionType;


    Car(string _name,string _model,int _noOfTyres,int _noOfDoors,string _transmissionType):Vehicle(_name,_model,_noOfTyres){
        cout << "hii, i am inside the car ctor" << endl;
       
        this->noOfDoors= _noOfDoors;
        this->transmissionType = _transmissionType;
    }

    void startAc(){
        cout << "AC has started of " << name << endl;
    }
};
int main(){

     Car A("maruti 800","LXI",4,4,"manual");
     A.start_engine();
     A.startAc();
     A.stop_engine();


    return 0;
}