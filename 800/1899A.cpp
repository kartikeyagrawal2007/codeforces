// CF: Game with Integers
// Idea:
// Work in modulo 3.
// Players can move +1 or -1.
// If n % 3 == 0 → First loses
// Else → First can force a win


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n%3==0){
            cout << "Second" << endl;
        }
       else{
        cout << "First" << endl;       
        }
    }
    return 0;   

}