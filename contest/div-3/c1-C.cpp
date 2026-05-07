#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> gd1, gd2, gd3, gd4;

        for(int i = 0; i < n; i++){
            int x;
            cin >> x;

            bool has2 = (x %2 == 0);
            bool has3 = (x % 3 == 0);

            if(!has2 && !has3) gd1.push_back(x);
            else if(has2 && !has3) gd2.push_back(x);
            else if(!has2 && has3) gd3.push_back(x);
            else gd4.push_back(x); // both
        }

        // print in optimal order
        for(auto x : gd4) cout << x << " ";
        for(auto x : gd2) cout << x << " ";
        for(auto x : gd1) cout << x << " ";
        
        for(auto x : gd3) cout << x << " ";
        

        cout << endl;
    }

    return 0;
}