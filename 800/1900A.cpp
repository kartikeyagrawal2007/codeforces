// CF: Cover in Water
// Idea:
// Look for any segment of 3 consecutive '.' → chain reaction possible
// → only 2 operations needed
// Else → no chain possible → fill all '.' individually
// → answer = total dots


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    string s;
    while(n--){
        cin >> a >> s;
        int count=0;
        bool found = false;
        for(int i=0;i<a-2;i++){
            if(s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                found = true;
                break;
            }
        }
            if(found){
                cout << 2 << endl;
            }
            else{
                for(int j = 0; j < a; j++){
                    if(s[j] == '.'){
                        count++;
                    }
                }
                cout<<count<<endl;
            }
          
        
        
    }
    return 0;

}