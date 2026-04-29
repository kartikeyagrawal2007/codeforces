 // CF: 236A - Boy or Girl
// Idea:
// Count number of distinct characters in the username.
// If distinct count is even → "CHAT WITH HER!"
// If distinct count is odd → "IGNORE HIM!"

#include <iostream>
#include <map>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    map<char,int> m;
    for(int i = 0; i < n; i++){
        m[s[i]]++;
    }
    int count = m.size();

    if(count%2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}   