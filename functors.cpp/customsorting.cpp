#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class comaprator{
    public:
    bool operator()(int a,int b){
        return a>b;
    }
};
int main(){

    //what are the advantages of using the functors
    //it provides a more flexible way to costomise behavior compared to function pointers or a function objects.. 
        vector<int> arr;
    arr.push_back(20);
    arr.push_back(10);
    arr.push_back(15);

    sort(arr.begin(),arr.end(),comaprator());

    //to write it in teh decresing order we have to define the cudtom competetors


    //for printing
    for(int a : arr){
        cout << a << " ";
    }
    cout <<  endl;
    return 0;

}
