#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n-1);
        
        int count = 0;

        for(int i = 0; i < n-1; i++){
            cin >> v[i];
            count += v[i];
        }
        int total = -(count);


        

        cout << total << endl;
    }

    return 0;
}