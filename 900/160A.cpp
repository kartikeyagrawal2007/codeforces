// CF: 160A
// Idea:
// Greedy problem.
// Sort coins and take largest ones first.
// Keep adding until your sum > remaining sum.
// Count how many coins taken.


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    int temp=0;
    int count=0;
    for(int i=n-1;i>=0;i--){
        temp+=v[i];
        count++;
        if(temp>(sum-temp)){
            cout << count << endl;
            break;
        }
    }  

    return 0;
}