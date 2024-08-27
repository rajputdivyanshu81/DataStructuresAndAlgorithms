#include<iostream>
using namespace std;

int getQuotient(int dividend,int divisor){
    int s = -dividend ;
    int e = dividend;
    int mid = s + (e-s) /2;
    int ans = -1;

    while (s<=e){
        if((divisor*mid) == dividend){
            return mid;
        }
        if((divisor*mid) < dividend){
            //store and compute
           ans = mid;
            s= mid + 1;
        }
        else{
            //left mai chalo aab tum aaye dekhte h
            e = mid -1;
        }
        mid = s +( (e - s)>>1);
}
        return ans;
}


int main(){

    int dividend = 10;
    int divisor = -2;

    //mission is to find the quotient
    int ans = getQuotient(abs(dividend),abs(divisor));
   
   if((dividend < 0 && dividend > 0) || (dividend > 0 && divisor < 0)){
    ans = 0 - ans;
   }
   cout << " final ans :" << ans << endl;


    return 0;
}