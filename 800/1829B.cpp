#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int cnt = 0;
        int len = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            if(a[i] == 0){
                cnt += 1;
            }
            else{
                cnt = 0;
            }
            len = max(len,cnt);
        }
        cout << len << endl;
    }
    return 0;
}