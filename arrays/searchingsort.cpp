#include <iostream>
#include <algorithm>
using namespace std;



int main()
{

    


    //to findthe total number of occurences into an array
    //last occurence - first occurence + 1 kr do total number of elements aa jayega

    


//this is the code to find the first and the last ocurence in an array of an element

// class Solution {
// public:
//     void findFirstOccurence(vector<int>& arr, int n, int target, int& ansIndex) {
//         int s = 0;
//         int e = n - 1;
//         while (s <= e) {
//             int mid = s + (e - s) / 2; // Calculate mid only once
//             if (arr[mid] == target) {
//                 ansIndex = mid;
//                 // Check if the element repeats earlier
//                 e = mid - 1; // Move to the left
//             } else if (target > arr[mid]) {
//                 s = mid + 1; // Move to the right
//             } else {
//                 e = mid - 1; // Move to the left
//             }
//                   mid = s+(e-s)/2;
//         }
//     }

//     void findLastOccurence(vector<int>& arr, int n, int target, int& ansIndex) {
//         int s = 0;
//         int e = n - 1;
//         while (s <= e) {
//             int mid = s + (e - s) / 2; // Calculate mid only once
//             if (arr[mid] == target) {
//                 ansIndex = mid;
//                 // Check if the element repeats later
//                 s = mid + 1; // Move to the right
//             } else if (target > arr[mid]) {
//                 s = mid + 1; // Move to the right
//             } else {
//                 e = mid - 1; // Move to the left
//             }
//             mid = s+(e-s)/2;
//         }
//     }

//     vector<int> searchRange(vector<int>& arr, int target) {
//         int n = arr.size();
//         int firstOccIndex = -1;
//         findFirstOccurence(arr, n, target, firstOccIndex);
//         int lastOccIndex = -1;
//         findLastOccurence(arr, n, target, lastOccIndex);
//         vector<int> temp(2);
//         temp[0] = firstOccIndex;
//         temp[1] = lastOccIndex;
//         return temp;
//     }
// };



    //this is the code to function to run the code below


//     void findLastOccurence(int arr[], int n, int target, int &ansIndex)
// {
//     int s = 0;
//     int e = n - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2; // Calculate mid only once
//         if (arr[mid] == target)
//         {
//             ansIndex = mid;
//             // Check if the element repeats earlier
//             s = mid + 1; // Move to the right
//         }
//         else if (target > arr[mid])
//         {
//             s = mid + 1; // Move to the right
//         }
//         else
//         {
//             e = mid - 1; // Move to the left
//         }
//     }
// }



    //this is the code to find the last occurence of an element into an array


    // int arr[] = {20,20,20,20,20,30, 40, 50,60};
    // int n = 8;
    // int target = 20;
    // int ansIndex = -1;
    // // binaru search lagane ja rha hu  to pakka pta h ki arrary sorted hoga hi hoga
    // findLastOccurence(arr, n, target, ansIndex);
    // //but remember one thing that the number is monotonically incresing
    // cout << " the last occurence is at index :" << ansIndex << endl;




    // this is the code to run the function below

    //     void findFirstOccurence(int arr[], int n, int target, int &ansIndex)
    // {
    //     int s = 0;
    //     int e = n - 1;
    //     while (s <= e)
    //     {
    //         int mid = s + (e - s) / 2; // Calculate mid only once
    //         if (arr[mid] == target)
    //         {
    //             ansIndex = mid;
    //             // Check if the element repeats earlier
    //             e = mid - 1;
    //         }
    //         if (target > arr[mid])
    //         {
    //             s = mid + 1;
    //         }
    //         else
    //         {
    //             e = mid - 1;
    //         }
    //     }
    // }

    // find teh first occurence

    // int arr[] = {20, 20, 20, 20, 30, 40, 50, 60};
    // int n = 8;
    // int target = 20;
    // int ansIndex = -1;
    // // binaru search lagane ja rha hu  to pakka pta h ki arrary sorted hoga hi hoga
    // findFirstOccurence(arr, n, target, ansIndex);
    // cout << " the first occurence is at index :" << ansIndex << endl;

    // binary search using the stl functions thatis preinbuilt functions are presemnt there we use them to solve such things

    // int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // int n = 9;
    // int target = 70;
    // bool ans = binary_search(arr, arr + n, target);
    // cout << ans << endl;

    // there are diferet type of seaeching algorithms but the best one is the binary search algorithm it takes time complixiety of o(logN) and space complixiety of o(1)
    // before we have dtudyded about the linear search which is also a very good algo and hv time compleixity of 0(N)
    //  there is a condition that the binary search only works under the monotonic functions which were strictly increasing and stricty decresing

    //      class Solution {
    // public:
    //     int search(vector<int>& nums, int target) {
    //         int n = nums.size();
    //         int s = 0;
    //         int e = n - 1;
    //         while (s <= e) {
    //             int mid = s + (e - s) / 2; // Calculate mid only once
    //             if (nums[mid] == target) {
    //                 return mid;
    //             }
    //             if (target > nums[mid]) {
    //                 s = mid + 1;
    //             } else {
    //                 e = mid - 1;
    //             }
    //         }
    //         return -1; // Element not found
    //     }
    // };

    //         this is the required code to apply for the binary search method

    return 0;
}