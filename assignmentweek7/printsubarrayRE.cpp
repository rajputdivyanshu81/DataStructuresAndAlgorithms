#include<iostream>
#include<vector>
using namespace std;

void printsubArrays_util(vector<int> &nums,int start,int end){
    
//base condition
if(end  == nums.size()){
    return ;
}
    //recusive case
    for(int i=start;i<=end;i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    printsubArrays_util(nums,start,end+1);
}

void printsubArrays(vector<int>&nums){

    for(int start=0;start<nums.size();start++){
        int end =start;
        printsubArrays_util(nums,start,end);
    }
}

int main(){

    vector<int>nums{1,2,3,4,5};
printsubArrays(nums);

    return 0;
}