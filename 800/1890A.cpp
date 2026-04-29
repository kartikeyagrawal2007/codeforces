// CF: Doremy’s Paint 3
// Idea:
// Given condition: b[i] + b[i+1] = constant
// ⇒ b[i] = b[i+2] ⇒ array must be alternating (x y x y ...)
//
// Cases:
// - If more than 2 distinct elements → NO
// - If only 1 distinct element → YES
// - If exactly 2 elements → their frequencies must match
//   positions of alternating pattern (odd/even slots)
//
// In short:
// Check if array can be rearranged into alternating form

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        map<int,int> freq;
        for(int x : v){
            freq[x]++;
        }

        // Case 1: more than 2 distinct values
        if(freq.size() > 2){
            cout << "NO\n";
            continue;
        }

        // Case 2: only 1 distinct value
        if(freq.size() == 1){
            cout << "YES\n";
            continue;
        }

        // Case 3: exactly 2 distinct values
        auto it = freq.begin();
        int c1 = it->second;
        it++;
        int c2 = it->second;

        int odd = (n + 1) / 2;
        int even = n / 2;

        if((c1 == odd && c2 == even) || (c2 == odd && c1 == even)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}