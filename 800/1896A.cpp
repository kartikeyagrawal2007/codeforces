// CF: Jagged Swaps
// Idea:
// Only peaks can be swapped (move right).
// Instead of complex pattern → simulate operations.
// Keep swapping valid peaks until no change.
// Then check if array becomes sorted.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool changed = true;
        while(changed){
            changed = false;
            for(int i = 1;i<n-1;i++){
                if(arr[i-1] < arr[i] && arr[i+1] < arr[i]){
                    swap(arr[i],arr[i+1]);
                    changed = true;
                };
            }
        }
        bool sorted = true;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                sorted = false;
                break;
            }
        }
        if(sorted){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
