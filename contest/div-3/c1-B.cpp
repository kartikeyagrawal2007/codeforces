#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int open = 0, close = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '(') open++;
            else close++;
        }

        if(open == close)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}