// CF: (1901A)
// Idea:
// We need to find the maximum distance between consecutive points.
//
// Cases:
// 1. Distance from start (0 → arr[0])
// 2. Distance between consecutive elements (arr[i] - arr[i-1])
// 3. Distance from last element to x (but return requires going back → *2)
//
// Answer = maximum of all these distances




#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,x;
        cin >> n >> x;

        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int maxi = arr[0];

        for(int i = 1; i < n; i++){
            int temp = arr[i] - arr[i-1];
            if(temp > maxi){
                maxi = temp;
            }
        }

        if(maxi < ((x - arr[n-1]) * 2)){
            maxi = ((x - arr[n-1]) * 2);
        }

        cout << maxi << endl;
    }

    return 0;
}