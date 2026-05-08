#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {

        int n, k, x;
        cin >> n >> k >> x;

        // 1 available
        if(x != 1) {

            cout << "YES\n";
            cout << n << "\n";

            for(int i = 0; i < n; i++) {
                cout << 1 << " ";
            }

            cout << "\n";
        }

        // 1 not available
        else {

            // no numbers available
            if(k == 1) {
                cout << "NO\n";
            }

            // even n -> use 2s
            else if(n % 2 == 0) {

                cout << "YES\n";
                cout << n / 2 << "\n";

                for(int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }

                cout << "\n";
            }

            // odd n
            else {

                // need 3
                if(k < 3) {
                    cout << "NO\n";
                }

                else {

                    cout << "YES\n";

                    int cnt = 1 + (n - 3) / 2;

                    cout << cnt << "\n";

                    cout << 3 << " ";

                    for(int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }

                    cout << "\n";
                }
            }
        }
    }

    return 0;
}