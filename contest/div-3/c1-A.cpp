#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int x , y;
        cin >> x >> y;
            if(x%2==0 && y%2==0){
                cout << "YES" << endl;
            }
            else if(((x+1)%2==0 && y%2==0) || ((x%2==0 && (y+1)%2==0))){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    return 0;
}