#include <iostream>
using namespace std;

int main(){



// this is the code to sort the zeros and ones in an is_array



// int sortZeroOne(int arr[], int n ){
//     int zeroCount = 0 ;
//     int oneCount = 0;
//     for (int i = 0 ;i < n ; i++){
//         if(arr[i] == 0){
//             zeroCount++;
//         }
//         if(arr[i] == 1){
//             oneCount++;
//         }
//     }

// //now we start insertion
// int i = 0;
// for(;i<zeroCount;i++){
//     arr[i] = 0;
// }
// for (;i<n;i++){
//     arr[i] = 1;
// }



    //this is the program to aort zeros and ones into an array



//  int arr[] = {1,0,1,0,1,1};
//  int size = 6;
//  sortZeroOne(arr,n);

//  for (int i = 0 ; i < size ; i++){
//     cout <<arr[i] << " ";
//  }



    
// 136 leetcode find the unique element in an array



// int printUniqueNumber(int arr[] , int size){
//     int ans = 0;
//     //to find the unique number we need tp traverse into all the ements in an array
//     for (int i = 0 ; i < size ; i++){
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }


    // a leetcode question for an array
    // int arr[] = {2,4,1,4,1,3};
    // int size = 5;
    // int ans = printUniqueNumber(arr,size);
    // cout << " the unique number is :" << ans << endl;




//this is the unique step towards this but thia is not a good approach like the xor does have
//complxiety for sorting is nlogn




    // this is the function to run the code below wichis of the printing for extreme of the numbers

    // void extremePrint(int arr[] , int n){
    //     int i = 0;
    //     int j = n-1;

    //     while (i<=j)
    //     {
    //  if (i == j){
    //     cout << i << " ";
    //     i++;
    // }else{
    //      cout << arr[i] << " ";
    //       i++;
    //       cout << arr[j] << " ";
    //        j--;
    //      }
    //     }

    // }

    // this is the required code to print the extereme means ekk sarting ka number or ekkk last ka jnumbber

    //  int arr[] = {2,3,4,5,6,7};
    //  int n = 6;
    //  extremePrint(arr,n);

    //     this is the function to run the code below which is to count appearance of 0's and 1's into an is_array

    // int printZerosAndOnes(int arr[], int n){
    //      int countZeros = 0 ;
    //      int countones = 0;

    //      //treverse into the aaray and strats looping
    //      for (int i = 0; i < n ; i++){
    //       int currentElement = arr[i];
    //       if(currentElement == 0){
    //         countZeros++;
    //       }
    //       if(currentElement == 1){
    //         countones++;
    //       }
    //      }
    //     cout << "total 0's are : " << countZeros << endl;
    //     cout << " total 1's are :" << countones << endl;
    // }

    // this code is to fid the number of 1's and number of 0's into an array

    //  int arr[100];
    //     int n;
    //     cout << "enter the valUe of size : ";
    //     cin >> n;

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << "enter the input value foer the index " << i << endl;
    //         cin >> arr[i];
    //     }

    //     int ans = printZerosAndOnes(arr,n);






    // this is the function to run the code below

    //     int findMax(int arr[], int size)
    // {
    //     int maxAns = INT16_MAX;
    //     for (int i = 0; i  size; i++)
    //     {
    //         if (arr[i] > INT16_MAX)
    //         {
    //             INT16_MAX == arr[i];
    //             // there is an inbuilt function to find the maximum among the two numbers
    //             //  maxAns = max(maxAns, arr[i]);
    //         }
    //     }
    //     return maxAns;
    // }

    // code to find the maximum inn an array

    // int arr[100];
    // int size;
    // cout << "enter the valUe of size : ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "enter the input value for the index " << i << endl;
    //     cin >> arr[i];
    // }

// code to find the maximum number in an array

   // int ans = findMax(arr, size);
   // cout << " the maimum value among the values we gaver it in the input is :" << findMax << endl;

    

    //     this is the required code of function to ttraverse an array by the linear search 


    // bool findTarget(int arr[] , int size , int target) {
    //             for(int i = 0;i  < size ; i++ ){
    //                 int currentElement = arr[i];
    //                 if( currentElement == target ){
    //                     //found
    //                     return true;
    //                 }
    //             }
    //           //agr elemet nhi mila to fLSE RETURN KRNA H
    //             return false;
    //         }

    // linear search algorith of the array

    //     int arr[] = {10,20,30,40,50};
    //     int size = 5;
    //    int target = 60;
    //    bool ans = findTarget(arr,size,target);
    //    cout << "ans: " << ans;

    // the array follows the prinxiple of pass by reference it does not follows the rule of pass by value

    //     function to write the code below

    //     int solve(int arr[],int size){
    //     cout << "the value inside the array is "<< arr[0] <<  " " << arr[1]<< endl;
    // }

    //     this is the code to call the above function to do some of the tasks...

    // int arr[4]={3,5,3,4};
    // solve(arr,size);

    // this is the function to run the code below

    //     void print(int arr[], int size){
    //     for(int index = 0; index < size ; index++ ){
    //         cout << arr[index] <<" ";
    //     }
    // }

    // more understanding towards the array

    // int arr[]={3,5,4,7,5};
    // int size = 5;
    // print( arr , size );

    // which is correct to print the value at the index which is __glibcxx_requires_cond

    // we can use both arr[index] or on the other hand we can use index[arr]

    // hwy we initialzie the value of arr from the zero index

    // because the value assign at arr is equals to thevalue at the  (base address +size*i )

    // how to initialize an array

    // int arr[5];

    // wrong way to initialize an array
    // this will not run

    // int brr[];

    // method to assign values while we are declaring an array

    // int crr[5]={2,4,5,6,7};
    // cout << crr[3];

    // how to fill the values in an array using the fill function

    // int arr[5];
    // fill(arr,arr+6,15);
    // cout << arr[0] << endl  << arr[1] << endl << arr[2] << endl << arr[3] << endl << arr[4] << endl;

    // code to take input with the help of the for loop
    //     int arr[5];
    //     cout << "enter te value of integers in an array" << endl;
    //     for (int i = 0; i < 5; i++){
    //         cin >> arr[i];
    //         cout << endl ;
    //     }
    // cout << arr[0] << " " << arr[1] << " "<< arr[2] <<  " " << arr[3] <<  " "<< arr[4] << " ";
    // cout << endl;

    // how to find the no of values cannot be find in an array we can only calculate how many boxes are being assigned to an array

    //     int noofvariablesInAnArray = sizeof(arr)/sizeof(int);
    //     cout << "the no of values in array : " << noofvariablesInAnArray << endl;

    // basic code to see the structure of arrays in the cpp

    // int arr[10];
    // // this is the method to take input from the user
    // for (int index=0; index<10; index++){
    //     cout << " enter the value for the box index" << endl;
    //     cin >> arr[index];
    // }
    // //printing the numbers what we have taken from the user
    // for (int index= 0; index < 10;index ++){
    //     cout << arr[index] << " ";
    // }
    return 0;
}