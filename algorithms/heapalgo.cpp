#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){

    vector<int> arr;
    arr.push_back(22);
    arr.push_back(11);
    arr.push_back(55);
    arr.push_back(56);
    arr.push_back(44);

    make_heap(arr.begin(),arr.end());

    //this is known as for each loop

    for(int a:arr){
        cout << a << endl;
    }

    cout  << endl;

    arr.push_back(99);

    //if we don't push heap then the value we push in it after the creation of the heap is seeing before bt the true fact is that it is inserted in the last so it should be viewed at the first

    push_heap(arr.begin(),arr.end());

    for(int a:arr){
        cout << a << endl;
    }


//isme pop bhi easily nhi hota h and this can be done with the by passsing vector in it 

pop_heap(arr.begin(),arr.end());
arr.pop_back();

cout << endl;

for(int a:arr){
     cout << a << endl;
    }

cout << endl;

sort_heap(arr.begin(),arr.end());

for(int a : arr){
    cout << a << endl;
}
    return 0;
}