#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for (int i =0;i<v.size();++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &v){
    int n = v.size();
    for (int i = 0; i<n-1;i++){
        int minIndex = i;
        for (int j=i+1;j<n;j++){
if(v[j]< v[minIndex]){
    minIndex = j;
}
        }
        //swap ith and min indx element
        swap(v[i],v[minIndex]);
    }
}

int main(){

    //this is to run the selection sort algorithm
    //step 1 : sbse phale min index ko define kr lenge 
     //step 2: uske bad swap krna start shuru krdenge
     vector<int> v = {44,55,33,22,11};

     selectionSort(v);
     print(v);
         return 0;
}