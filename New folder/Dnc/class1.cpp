#include <iostream>
#include <vector>
using namespace std;

// Function to merge 2 sorted arrays


// void mergeSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int>& ans) {
//     int i = 0;
//     int j = 0;


//       agar b mai ajda values hai a se kto vo bachi hue vakues ko transfer kr do

//     while (i < sizeArr && j < sizeBrr) {
//         if (arr[i] < brr[j]) {
//             ans.push_back(arr[i]);
//             i++;
//         } else {

//       agar a mai ajda values hai a se kto vo bachi hue vakues ko transfer kr do

//             ans.push_back(brr[j]);
//             j++;
//         }
//     }

//     // If we reach here, there might be remaining elements in either array
//          agr kuch elements bach gye ho


//     while (i < sizeArr) {
//         ans.push_back(arr[i]);
//         i++;
//     }
//     while (j < sizeBrr) {
//         ans.push_back(brr[j]);
//         j++;
//     }
// }





void merge(int arr[],int s,int e,int mid){


// lets take an example
// 10 20 30 40 50 60 70
    int leftLength = mid-s+1 ;
    int rightLength = e - mid;

    int *leftArr = new int[leftLength];
    int *rightArr = new int[rightLength];

    //fill and copy the left and the right arrys
    // copy original arrys 

    int index = 0;
    for(int i =0;i<leftLength;i++){
        leftArr[i] = arr[index];
        index++;
    }
// ..cpoying into the right array 
    index = mid + 1;
    for(int i =0;i<rightLength;i++){
        rightArr[i] = arr[index];
        index++;
    }

    //merge logic

    int i = s;
    int j =0;
    int mainArrayIndex = s;

    while(i< leftLength && j<rightLength){
        if(leftArr[i] < rightArr[j]){
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        }
        else{
            arr[mainArrayIndex] == rightArr[j];
            j++;
            mainArrayIndex;
        }

    while(i< leftLength){
            arr[mainArrayIndex] = leftArr[i];
            i++;
            mainArrayIndex++;
        }
    while(i< rightLength){
            arr[mainArrayIndex] = rightArr[j];
            i++;
            mainArrayIndex++;
        }
    }

}


void mergeSort(int arr[],int s ,int e){
    //base case
    if(s>e || s==e){
        return ;
    }

    //or we can use this thing

    // if(s==e){
    //     return ;
    // }

    int mid = s + (e-s)/2;
    //left part ko recusion se solve karao
    mergeSort(arr,s,mid);
    //right part ko recusion se solve karao
    mergeSort(arr,mid+1,e);

    merge(arr,s,e,mid);

}
int main() {






    // int arr[] = {10, 30, 50, 70};
    // int sizeArr = 4;

    // int brr[] = {20, 40, 60, 80, 90};
    // int sizeBrr = 5;

    // vector<int> ans;
    // // mergeSortedArrays(arr, sizeArr, brr, sizeBrr, ans);

    // // Print the merged result

    //m  this is the case
    // for (int num : ans) {
    //     cout << num << " ";
    // }
    // cout << endl;

    return 0;
}
