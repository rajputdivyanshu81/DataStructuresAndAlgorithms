#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main(){

    vector<int> arr;
    //the values should be inn the monotonic function

    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    // int target = 400;

     //this helps to find out the first greator to a value in sorted array
auto it = upper_bound(arr.begin(),arr.end(),35);
cout << *it << endl;
//it always gives the greater value it did'nt give the equal values at any codt it always prefer the greater values


    //the case of the lower bound
    //this helps to find out the first greator or equal to a value in sorted array

    //this is to print the least smallest element in the array

    // auto it = lower_bound(arr.begin(),arr.end(),35);
    // cout << *it << endl;

//to serach using the bianry search 

    // bool it = binary_search(arr.begin(), arr.end(),target);
    // cout << it << " " << endl;

    return 0;
}