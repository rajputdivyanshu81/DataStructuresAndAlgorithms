#include<iostream>
using namespace std;

//eponential search
//doubling search
//galloping search
// stranile search 

int bs(int a[],int start,int end,int x){
    while(start<=end){
        int mid = start + (end - start)/2;
        if(a[mid]== x){
            return mid;
        }
        else if(x>a[mid]){
            start = mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int expoSearch(int a[],int n,int x){
    if(a[0] == x) return 0;

    int i =1;
    while(i<n && a[i]<=x){
        i= i*2;
    } 
    return bs(a,i/2,min(i,n-1),x);
}

int main(){
    int a[] ={3,4,5,6,7,11,23,34,45,67};
    int n = sizeof(a)/sizeof(int);
    int x = 34;
    int ans = expoSearch(a,n,x);
    cout << ans << endl;
    return 0;
}

//applications 
//1. search in infinite array
//2. to find the element if array is present at the starting and the arrray is too long to be traversed
