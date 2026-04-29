// CF: Don't Try to Count
// Idea:
// Operation: x = x + x (string doubles each time).
// After each operation, check if s is a substring of x.
// If found → return number of operations.
// If not found after few doublings → impossible → -1.
// (Small constraints → brute force is safe)

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int ops = 0;

        while(ops <= 6){  // safe limit
            if(x.find(s) != string::npos){
                cout << ops << "\n";
                break;
            }
            x += x;
            ops++;
        }

        if(x.find(s) == string::npos){
            cout << -1 << "\n";
        }
    }

    return 0;
}