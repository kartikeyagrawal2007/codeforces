#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> nums;

    // extract numbers
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '+'){
            nums.push_back(s[i] - '0');
        }
    }

    // sort
    sort(nums.begin(), nums.end());

    // print
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i];
        if(i != nums.size() - 1){
            cout << "+";
        }
    }

    return 0;
}