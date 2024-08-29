//when a function calls itself directly or indirectly

 /*
 magical line says that 1 case hum solve kar lenge baki recirsion sambhal lega

components of recursion
>base case - mandatory
>recursive case
>processing

ye jada space leta hai iterative loop isse kam space or time leta hai chalne k leye
 */

#include<iostream>
using namespace std;



//this is the recursive funx=xtion to find the factorial

// int getFactorial(int n){
//     //base case
//        if (n==0 || n==1   ){
//         return 1;
//     }

//     //recursive call
//     //processing
 
// int recursionKaAns = getFactorial(n-1);
// int finalAns =  n * recursionKaAns;
// return finalAns;

// }



//this is the function to print the counting

// void printCouting(int n){

//     //base case
//     if(n==0){
//         return ;
//     }

//     //processing
//     printCouting(n-1);
//     cout << n<< " ";
//this isd for the printig of the value we will be getting

   
// }


//this is the function to print the pow of 2

// int pow(int n){
//     if(n==0){
//         return 1;
//     }
//     int recKaAns = pow(n-1);
//     int finalAns = 2 * recKaAns;
//     return finalAns;
// }



//this is the function to print the fibonacci sequence

// int fib(int n){
  
//         //base case
//         if(n==0 || n==1){
//             return n;
//         }
        
// those will giv ethe better outcome

//         //recursive relation
//         //fib(n) =fib(n-1) + fib(n-2)
//         //processing

//         int ans = fib(n-1) + fib(n-2);
//         return ans;
    
// }

int main(){

//this is to print the fibonacci sequence

// cout << fib(9)<< endl;

//this the code in main to print the pow function

// cout << pow(5) << endl;


//this is the function in main to print the counting from the 1 to the desired number


// printCouting(5);


    //this is the main part to find the factorial using the recursion

    // int n;
    // cout << "enter the value of n: " << endl;
    // cin >> n;
    // int ans = getFactorial(n);
    // cout << "the answer is of factorial is :" << ans << endl;   
    return 0;
}