/*
these all can be find out by the different methods
1.naive method
2.sqrt method
3.sieve of eratosthenes
4.segmented sieve

3rd case is used to find out the prime numbers between some numbers
 

 class Solution {
public:

bool isPrime(int n){

    
    if(n<=1) return false;
    int sqrtN = sqrt(n);
    for(int i =2;i<n;i++){
          if(n%i==0){
        return false;
    }
}
return true;
    }
  



    //naive approach

//     if(n<=1) return false;
//     for(int i =2;i<n;i++){
//           if(n%i==0){
//         return false;
//     }
// }
// return true;
//     }
  
    int countPrimes(int n) {




         

        //naive approach

        int c = 0;

        for(int i =0;i<n;i++){
            if(isPrime(i)){
                ++c;
            }
        }
        return c;
    }
};




by the 3rd algo


class Solution {
public:
  
    int countPrimes(int n) {
        if(n == 0) return 0;

        vector<bool> prime(n,true);//all are maked prime already
        prime[0] = prime[1] = false;
    int ansa = 0;

    for(int i =2;i<n;i++){
        if(prime[i]){
            ans++;

            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
    }
    return ans;
    }

};

GCD/HCF
greatest common divisior 
highest common factor


gcd(72,24)
isme se bda kon sa h
jo bda h usme se chote wala minus krte rho jb tak ekk zero na ho jaee
gcd(48,24)
gcd(24,24)
gcd(0,24)



fast exponentiation method 
to find the a to the power b

time compxiety is equals to O(b)

class Solution{
public:
    long long int ans = 1;
    while(n>0){
    if(n%1){
    ans = (ans * x) % M;
    }
    x=(x*x)%M;
    n>>=1;
    }
    return ans % M;
};


more optimisation of the 3rd algoritm




advanced topics of mathematics that are covered into the c.p. scope 

1.pigeon hole
2.catalan number (bst)
3. inclusion - exclusion principle
4.chinese reminder theorem
5.lucas theorem
6.fermat's theorem
7.probability concepts

*/