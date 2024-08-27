// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void solve(stack<int>& s, vector<int>& arr, vector<int>& ans) {
//     for(int i = arr.size() - 1; i >= 0; i--) {
//         int element = arr[i];
//         // Check the stack for the current element
//         while(!s.empty() && s.top() >= element) {
//             s.pop();
//         }
//         // Ensure the stack is not empty before accessing the top element
//         if(!s.empty()) {
//             ans.push_back(s.top());
//         } else {
//             ans.push_back(-1); // or any other value indicating no greater element
//         }
//         s.push(element);
//     }
// }

// int main() {
//     // Input vector
//     vector<int> v = {8, 4, 6, 2, 3};

//     stack<int> s;
//     s.push(-1);

//     vector<int> ans;
//     solve(s, v, ans);
//     reverse(ans.begin(), ans.end());

//     for(int i = 0; i < ans.size(); i++) {
//         cout << ans[i] << " ";
//     }

//     return 0;
// }



// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>

// using namespace std;

// void prevSmallerElement(int arr[], int n, vector<int>& ans) {
//     stack<int> s;
//     s.push(-1);

//     for(int i = 0; i < n; i++) {
//         int element = arr[i];
//         while(s.top() > element) {
//             s.pop();
//         }

//         // Ensure the stack is not empty before accessing the top element
//         ans.push_back(s.top());
//         s.push(element);
//     }
// }

// int main() {
//     int arr[] = {8, 5, 6, 2, 3};
//     int n = 5;
//     vector<int> ans;

//     prevSmallerElement(arr, n, ans);

//     for(auto i : ans) {
//         cout << i << " ";
//     }

//     return 0;
// }

// largest rectangle in histogram

// leetcode 84