#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;
    int i , j , k;
    for(int m=0;m<n;m++){
        cin >> i >> j >> k;
        if((i==1&&j==1) || (i==1&&k==1) || (k==1&&j==1)){
            count+=1;
        }
    }
    cout << count;
    return 0;
}