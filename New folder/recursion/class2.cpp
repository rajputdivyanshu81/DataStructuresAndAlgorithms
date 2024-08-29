#include <iostream>
using namespace std;

// // // Function to print the elements of an array

// // // void printArray(int arr[], int size, int index) {
// //     if (index == size) {
// //         // Base case: array is fully traversed
// //         return;
// //     }

//          this is to print the whoe values oif the array

// //     cout << arr[index] << " ";
// //     printArray(arr, size, index + 1);
// // }

// // Function to search for an element in the array
// // bool searchInArray(int arr[], int size, int index, int target) {
//     // if (index == size) {
// //         // Element not found
// //         return false;
// //     }
// //     if (arr[index] == target) {
// //         // Element found
// //         return true;
// //     }
// //     // Recursive call
// //     bool ans = searchInArray(arr, size, index + 1, target);
// //     return ans;
// // }

// // int max(int a,int b){
// //     if(a>b){
// //         return a;
// //     }
// //     else{
// //         return b;
// //     }
// // }
// // void maxInArray(int arr[], int size, int index, int &maxi) {
// //     if (index == size) {
// //         return;
// //     }
// //     if (arr[index] > maxi) {
// //         maxi = arr[index];
// //     }
// //     maxInArray(arr, size, index + 1, maxi);
// // }

// // void miniInArray(int arr[], int size, int index, int &mini) {
//     if (index == size) {
//         return;
//     }
//     if (arr[index] < mini) {
//         mini = arr[index];
//     }
//     miniInArray(arr, size, index + 1, mini);
// }



// void printAllEven(int arr[], int n, int index) {
//     // Base case
//     if (index == n) {
//         return;
//     }

//     // Check if the element is even
//     if(arr[index] % 2 ==0){
//         cout << arr[index] << " ";
//     }

//     // Recursive call
//     printAllEven(arr, n, index + 1);
// }




// int binarySearchRecursion(int arr[],int n,int s,int e,int target){
//     //base case
//     if(s>e){
//         return -1;
//     }
//     int mid = (s+e)/2;

// //1 case mai dekhunga
// if(arr[mid]== target){
//     return mid;
// }

// //baaki recurion sambhal lega
//     if(target){
//         //right
//         s = mid +1;
//         return binarySearchRecursion(arr,n,s,e,target);
//     }
//     else{
//         e = mid -1;
//         return binarySearchRecursion(arr,n,s,e,target);
//     }
// }


/// this case is same as the palindromic case

///this is for the printing digits

void printDigits(int n){
    if(n == 0){
        return ;
    }
        int newNumber = n / 10;
    printDigits(newNumber);
    
    //1 case to mai hi solve karunga
    int digit = n % 10;
    cout << digit << " ";


}
int main() {

int n = 21478;
printDigits(n);




// int arr[]= {10,20,30,40,50,60,70};
// int size = 7;
// int s = 0;
// int e = size -1;
// int target = 70;
//  having the time compliexiety of O(logn)
// int ans = binarySearchRecursion(arr,size,s,e,target);
// cout << "answer index :" << ans << endl;


//     int arr[] = {10, 20, 30, 40, 50, 60};
//     int size = 6;
//     int index = 0;

// printAllEven(arr, size, index);


    
  
// //     int maxi = INT16_MIN;
// //     maxInArray(arr, size, index, maxi);
// //     cout << "max no.: " << maxi << endl;



// //   int mini = INT16_MAX;
// //     miniInArray(arr, size, index, mini);
//     // cout << "mini no.: " << mini << endl;



//     // int index = 0;
//     // int target = 0;

//     // Uncomment the line below to print the array
//     // printArray(arr, size, index);

//     // cout << searchInArray(arr, size, index, target) << endl;
    return 0;
}
