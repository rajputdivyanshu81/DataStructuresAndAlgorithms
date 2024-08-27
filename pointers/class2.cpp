#include<iostream>
using namespace std;


// void solve(int* arr,int size){
//     cout << sizeof(arr) << endl;
// }


int main(){

    //2d array using the heap

    // 2d array-> stack memory
    int arr[2][4] = {
        {2,3,4,5},
        {3,45,6,7}
    };
    // 2d array -> heap memmory
    // 4 -> row count
    // 3 -> column count
    int** brr = new int*[4];
    for(int i = 0;i<4;i++){
        brr[i] = new int[3];
    }

    //taking input
    for(int i =0;i<4;i++){
        for(int j =0;j<3;j++){
            cin>> arr[i][j];
        }
    }

      cout << "printing the 2d array" << endl;
        for(int i =0;i<4;i++){
        for(int j =0;j<3;j++){
            cin>> brr[i][j];
        }
        cout << endl;
    }

    //array->satack
    // int arr[5] = {0};
    // cout << arr[0] << arr[1] << endl;


    // //array->heap
    // int* brr = new int[5];
    // cout << brr[0] << brr[1] << endl;




    // integer-> satck memory
    // int a =5 ;
    // cout << a << endl;

    // //interger -> heap memory
    // int* p = new int;
    // *p =5;
    // cout << *p << endl;

    // //memory free kara di delete ka use krk
    // delete p;


    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // solve(arr,size);

    //jab bhi array function k andr pass hoga to vo pointer k form mai pass hoga


    //stack is small memory 
    //heap is a big memory that helps to create or store data 

    //new and delete keyword are being stored to create a heap memory
     


    //  int *ptr = new int;
    //stack           heap
    //  inske bad vo dabba banega jisme pointer store hoga vo bnega stack mai or jo new k dwara bana h vo heap mai rheaga


    return 0;
}