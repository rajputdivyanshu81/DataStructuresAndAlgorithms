// // class Solution {
// // public:
// // int getPivotIndex(vector<int>& nums){
// //     int s= 0;
// //     int n = nums.size();
// //     int e = n-1;
// //     while(s<=e){
// //         int mid = s+(e-s)/2;
// //         if(mid+1<n && nums[mid]>nums[mid+1]){
// //             return mid;
// //         }
// //         if (mid -1 >=0 && nums[mid]<nums[mid-1]){
// //             return mid-1;
// //             //kab left jana h or kab right jana h
// //         }
// //         if(nums[s]>nums[mid]){
// //             e=mid-1;
// //         }
// //         else{
// //             s=mid+1;
// //         }
// //         mid = s+(e-s)/2;
// //     }
// //     return -1;
// // }
// // int binarySearch (int s, int e ,int target, vector<int> nums){
// //     while(s<=e){
// //         int mid = s + (e-s)/2;
// //         if(nums[mid]== target){
// //             return mid;
// //         }
// //         if (target > nums[mid]){
// //             s= mid + 1;
// //         }
// //         else{
// //             e= mid - 1;
// //         }
// //         mid = s + (e-s)/2;
// //     }
// //     return -1;
// // }
// //     int search(vector<int>& nums, int target) {
// //         int pivotIndex = getPivotIndex(nums);
// //         //now i have twp lines and in which i have values from 0 to pivot index and 
// //         //line b from which i have index from pivotindex +1 to n-1

// //         //if target lies inside line a then seach in a and if in b then search in b
// //         if(target >nums[0] && target < nums[pivotIndex]){
// //              //bs search apply kr do
// //         int ans = binarySearch(0,pivotIndex,target,nums);
// //         return ans;
// //         }
// //         else(target >nums[pivotIndex +1] && target < n-1)
// //         //bs apply
// //         int ans = binarySearch(pivotIndex+1,n-1,target,nums);
// //         return ans;
    
// //     }
// // };





// // find peak index in a mountain array

// // class Solution {
// // public:
// //     int peakIndexInMountainArray(vector<int>& arr) {

// //     auto it = max_element(arr.begin(),arr.end());
// //         return distance(arr.begin(), it);
        
// //     }
   
//     //binary search approach or actual approach

//         //  int s = 0;
//         // int n = arr.size();
//         // int e = n - 1;
//         // int ansIndex = -1;
//         // while(s<=e)
//         // {
//         //    int  mid = s+(e-s)/2;
//         //     if(arr[mid]<arr[mid +1]){
//         //          s= mid+1; 
//         //     }
//         //     else{
//         //         //may or may not be it is an answer
//         //         ansIndex = mid;
//         //         e= mid -1;
//         //     }
//         //     mid = s+(e-s)/2;
//         // }
//         // return ansIndex;
           
//         // }





//         //normal binary search algorithm
//     //     int s = 0;
//     //     int n = arr.size();
//     //     int e = n - 1;
//     //     while (s < e) {
//     //         int mid = s + (e - s) / 2;
//     //         if (arr[mid] < arr[mid + 1]) {
//     //             s = mid + 1;
//     //         } else {
//     //             e = mid;
//     //         }
//     //     }
//     //     return mid;
//     // }


//     //non useful case of the algorithm
//     //this is a algorithm having complxiety of O(N)
    
//        //brute force approach

//         // int max = INT_MIN;
// //         int maxIndex = -1;
// // for(int i = 0;i<arr.size();i++){
// //     if(arr[i]>max){
// //         max = arr[i];
// //         maxIndex = i;
// //     }
// // }
// // return maxIndex;
// //     }

// };
// //this can gave an error due to the use of mid and this can be resolved by using any other name exceot that

