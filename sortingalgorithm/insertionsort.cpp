#include<iostream>
#include<vector>
using namespace std;
void print(vector<int> &v){
    for (int i =0;i<v.size();++i){
        cout << v[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector<int> &v){
    int n = v.size();
    //i=0 ,ko chod deta hu
    for (int i =1;i<n;i++){
        int key = v[i];
        int j = i-1;

        //move lements of array arr[0,i-1] that are greater than 1
        //key to one position ahead of their current element
        while(j>= 0 && v[j]>key){
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
}
int main(){
vector<int> v = {5,3,4,2,1};
insertionSort(v);
print(v);

    return 0;
}