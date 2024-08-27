 #include<iostream>
 #include<vector>
 using namespace std;

// bool checkBool(int arr[],int n,int index){
//     //ba\se case
//     if(index == n-1){
// //single element wala element wala array is always sorted
//         return true;
//     }

//     bool cuuAns = false;
//     bool recursionAns = false;

//     //1st case solve karenge
//     if(arr[index+1] >arr[index]){
//         return true;
//     }
//     recursionAns = checkSorted(arr,n,index);
//     return 
// }

#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str, int i, string output, vector<string>& ans) {
    // Base case
    if (i == str.length()) {
        cout << output << endl;
        ans.push_back(output);
        return;
    }

    char ch = str[i];
    // Include the current character
    printSubsequences(str, i + 1, output + ch, ans);
    // Exclude the current character
    printSubsequences(str, i + 1, output, ans);
}

int main() {


    
//most important pattern of th erecusion i.e.
// include/exclude method
//take /not take method
//lele /mt le method
//pick/not pick method
//very important question

    string str = "xyz";
    string output = "";
    int index = 0;
    vector<string> ans;
    printSubsequences(str, index, output, ans);

    // Print the subsequences stored in 'ans'

    //   this is called as the for each loop
    
    for (const auto& pri : ans) {
        cout << pri << endl;
    }

 




//     int arr[] = {10,20,30,40};
//     int size = 4;
//     int index = 0;
//    bool ans = checkSorted(arr,index,size);

        return 0;
 }