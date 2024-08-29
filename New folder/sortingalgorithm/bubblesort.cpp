#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for (int i =0;i<v.size();++i){
        cout << v[i] << " ";
    }
    cout << endl;
}


//this is to convert the array into the ascending order
//if want to change this into the decresing order then what we needs to do is to make change into the if statement

void bubbleSort(vector<int> &v){
    int n = v.size();
    for(int i = 0 ; i < n-1 ; ++i){
         for(int j= 0; j <n-i-1;++j){
            if(v[j]>v[j+1]){
                swap(v[j],v[j+1]);
            }
         }
    }
}

int main(){

    //bubble sort is of time complxiety is O(n2)
    //space complxiety is O(1)
    vector<int> v= { 5,4,3,2,1};
    bubbleSort(v);
    print(v);
    return 0;
}