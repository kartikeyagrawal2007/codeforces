#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int maxi = v[0];
    int mini = v[0];
    int min_idx = 0;
    int max_idx = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > maxi){
            maxi = v[i];
            max_idx = i;
        }
        if(v[i] <= mini){
            mini = v[i];
            min_idx = i;
        }
    }
    
    int count = max_idx + (n-1-min_idx);
    if(max_idx > min_idx) count--;
    cout << count << "\n";
    return 0;
}