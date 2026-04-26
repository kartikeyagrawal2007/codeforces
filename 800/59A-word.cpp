// CF: 59A
// Idea:
// Count lowercase and uppercase letters.
// If uppercase > lowercase → convert whole string to uppercase.
// Else → convert to lowercase.

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int lower = 0, upper = 0;

    for(int i = 0; i < s.length(); i++){
        if(islower(s[i])){
            lower++;
        }
        else{
            upper++;
        }
    }
    if(upper > lower){
        for(int i = 0; i < s.length(); i++){
            s[i] = toupper(s[i]);
        }
        cout<<s<<endl;  
    }
    else{
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        cout<<s<<endl;
    }

    return 0;
}