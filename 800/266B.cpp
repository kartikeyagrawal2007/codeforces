// CF: 266B
// Idea:
// Simulation problem.
// For each second (t times), scan the string from left to right.
// If we see "BG", swap them and skip next index.
// Repeat this process t times to simulate movement.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n , t;
    cin >> n >> t;
    string s;
    cin >> s;

    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }

    cout << s << endl;
    return 0;

}