#include<iostream>
using namespace std;

int x = 2;//glob; variable

int main(){

    x = 4;
    //global variable
    
    int x = 20;//local varible
    cout << x << endl;

    // the priority of the local varibale is more than the global variable]
    // we can access the global variable by using the :: specs

    cout << ::x << endl;//accessing the global varible

    return 0;
}