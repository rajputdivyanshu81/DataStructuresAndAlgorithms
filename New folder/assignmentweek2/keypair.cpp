// class Solution{
// public:	

// // bool twoSum(int arr[],int n,int x){
// //     for(int i =0;i<n;++i){
// //         for(int j= i+1;j<n;j++){
// //             if(arr[i]+arr[j]==x){
// //                 return true;
// //             }
// //         }
// //         return false;
// //     }
// // }


// bool twoPointerApproach(int arr[],int n ,int x){
//     int s= 0;
//     int e=n-1;
//     while(s<e){
//         int csum = arr[s] + arr[e];
//         if(csum == x) return true;
//         else if(csum > x) e--;
//         else s++;
//     }
//     return false;
// }
// 	// Function to check if array has 2 elements
// 	// whose sum is equal to the given value
// 	bool hasArrayTwoCandidates(int arr[], int n, int x) {
// 	    // code here
// 	    sort(arr,arr+n);
// 	    return twoPointerApproach(arr,n,x);
	    
	    
// 	   // bool ans = twoSum(arr,n,x);
// 	   // return ans;
// 	}
// };