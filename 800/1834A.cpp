#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int neg = 0, pos = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == -1) neg++;
            else pos++;
        }

        int ops = 0;

        // make sum non-negative
        while(pos - neg < 0) {
            pos++;
            neg--;
            ops++;
        }

        // make negatives even
        if(neg % 2 != 0) {
            ops++;
        }

        cout << ops << "\n";
    }

    return 0;
}