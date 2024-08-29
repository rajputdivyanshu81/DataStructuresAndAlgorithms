#include <iostream>
#include<unordered_map>
#include<vector>

using namespace std;


// //functon to find the 2's compliment of the array

// vector<int> findCompliment (vector<int>binary){
//     int n = binary.size();
//     vector<int>twosComp(n,0);
    
//     //step 1 is to flip the all bits
//     for(int i = 0; i<n;i++){
//         if(binary[i]==0)
//         twosComp[i]=1;
//         else if (twosComp[i]==1)
//         twosComp[i]=0;
//     }

//     //step 2 to add 1 to get the required result
//      int carry = 1;
//      for(int i = twosComp.size()-1;i>=0;i--){
//         int sum = twosComp[i] + carry;
//         twosComp[i] = sum % 2;
//         carry = sum /2;
//         if(carry == 0){
//             //this is an optimistion
//             break;
//         }
//      }
//     return twosComp; 
// }




//this is the function to run code to print the square root of the given
//   int mySqrt(int n){
//     int s =0,e=n;
//     int ans=0;
//     while(s<=e){
//         int mid = (e+s)>>1;
//         if(mid*mid <=n){
//             ans = mid;
//             s=mid+1;//go right
//         }
//         else{
//             e=mid - 1;//lef moved
//         }
// } 
// return ans;
//  }

// double myPrecisionSqrt(int n){
//     double sqrt = mySqrt(n);
//     int precision = 13;
//     double step = 0.1;
//     while(precision--){
//         double j = sqrt;
//         while(j*j <= n){
//             sqrt = j;
//             j+=step; 
//         }
//         //after this while loop i got 1 precison answer
//         step/=10;
//     }
//     return sqrt;
// }

int main(){






 //to find the square root of the given 
// int n = 63;
// double ans =  myPrecisionSqrt(n);
// //cout << ans << endl;
// //jo apka cout hota h it can only print upto 5 precision
// printf("Precision Sqrt : %.13f\n",ans);
  





//2's compliment into the binary number
//phale 1's compliment nikalte h and then add kr dete h 1 usme hi 
// 1's compliment and then add 1

//1's compliment ka mtlb hota h sari bits ko flip kr do

// vector<int> binary = { 0,0,0,0};
// vector<int> twosComp = findCompliment(binary);

// for(int i =0;i<twosComp.size();i++){
//     cout << twosComp[i] << " ";
// }
// cout << endl; 



 



    //basics to form the hashmap to use these things into the questions of arrays


    //   unordered_map<int,int> desk_map;

    //   //insertion 
    //   desk_map[1] = 53;
    //   desk_map[2] = 54;
    //   desk_map[3] = 55;


    // desk_map[2] = 57;//reassgn quki key hmesha unique rhege

   
    //    //another syntax
    //    //for each
    //    for(auto it : desk_map){
    //     int key = it.first;
    //     int value = it.second;
    //     cout<< "key :" << key << "value :" << value << endl;
    //    }

    //    if(desk_map.find(2) != desk_map.end()){//synatx tp find the key into the unorederd map
       
    //     //found
    //     int value =desk_map[2];
    //     cout << "value found :" <<value << endl;
    //    }
    //    else{
    //     //not found
    //     cout << "value not found :";
    //    }

    // desk_map.erase(2);
    // cout << "after erase:";

    //       //iterate
    // //   i have to iterta eover three entries  
    //    unordered_map<int,int>::iterator it;
    //    for(it = desk_map.begin();it!=desk_map.end();it++){
    //     int key = it->first;
    //     int value = it->second;
    //     cout << "key:" << key << " " << "Value:" << value << endl;
    //    }

          return 0;
}