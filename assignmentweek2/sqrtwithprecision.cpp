#include<iostream>
using namespace std;

int mySqrt(int n){
    int s = 0 , e = n;

    int ans = 0;
    while(s<=e){
        int mid = s + (e - s) / 2;
        if(mid*mid <= n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        return ans;

    }
}

// double myPrecisionSqrt(int n){
//     double sqrt = mySqrt(n);
//     int precision = 14;
//     double step = 0.1;
//     while(precision--){
//         double j = sqrt;//stored the value of the number
//         while(j*j <= n){
//             sqrt = j;
//             j+=step;
//         }
//         //after this while loop i got 1 ans according to the precision
//         step /= 10;
//     }
//     return sqrt;
    
// }


double BSPrecision(int n){
    double start = 0;
    double end = n;
    double ans = 0;
    while ((end - start)>0.0000000000001){
        double mid = (start +end )/2;
        double sqr = mid * mid;
        if(sqr<=n){
            ans = mid;
            start = mid + 1;  
        }
        else{
            end = mid - 1;
        }
    }
   return ans;
    
}

int main(){

    int n = 63;
    // double ans= myPrecisionSqrt(n);
    // cout << ans << endl;
    double ans = BSPrecision(n);
    printf("myPrecisionSqrt : %.9f\n",ans);
    
// cout mai hmesha hi 5 precision tak value hoti hai
    return 0;
}

