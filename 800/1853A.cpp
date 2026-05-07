#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        bool sorted = true;

        for(int i = 0; i < n-1; i++){
            if(a[i] > a[i+1]){
                sorted = false;
                break;
            }
        }

        if(!sorted){
            cout << 0 << "\n";
            continue;
        }

        int mn = INT_MAX;

        for(int i = 0; i < n-1; i++){
            mn = min(mn, a[i+1] - a[i]);
        }

        cout << (mn / 2) + 1 << "\n";
    }

    return 0;
}