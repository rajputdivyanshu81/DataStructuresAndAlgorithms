#include<iostream>
using namespace std;


void lasOccLTR(string &s,char x,int i,int &ans){
    //base case
    if(i>=s.size()){
        return ;
    }
    //recursion ka case
    if(s[i] == x){
        ans = i;
    }
    //baki recursion sbamhal lega
    lasOccLTR(s,x,i+1,ans);
}
int main(){
//base case
// ekk case solution
//baki recursion ka kam hai
string s;
cin>>s;
char x;
cin>>x;
int ans = -1;
lasOccLTR(s,x,0,ans);
cout << ans << endl;
    return 0;
}

//if we do not want to use the whole thing we can use a stl function called as strrchr()
// The strchr() function can also be used to check the presence of a character in a string.
//it is in cstring header

