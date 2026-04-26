// CF: 61A
// Idea:
// Compare two binary strings character by character.
// If characters are same → output '0'
// If different → output '1'
// (This is equivalent to XOR on strings)


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    for(int i = 0; i<a.length(); i++){
        if(a[i] == b[i]) cout << 0;
        else cout << 1;
    }
    return 0;
}