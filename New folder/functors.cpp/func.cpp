#include<iostream>

using namespace std;
class functorOne{
    public:
    bool operator()(int a,int b){
        //descending order me compare karna chate h
    //if a>b -> true a should be placedbefore b
       
        return a>b;
    }
};
int main(){

   // functors is for the functions objects
    //these are being used as the argumentsto te stl algorithms


    // it is used to define the costome things to do work during the seaching or sorting algorithm


    functorOne cmp;
    if(cmp(10,5) == true){
        cout << "10 is greater than 5" << endl;
    }
    else{
    cout << "10 is less than 5";
    }

    return 0;
}