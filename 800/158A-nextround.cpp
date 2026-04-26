#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int n , k;
    cin >> n >> k;
    int arr[60];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int score = arr[k-1];
    for(int i=0;i<n;i++){
        if(arr[i]>=score && arr[i]>0){
            count+=1;
        }
    }
    cout << count;
    return 0;

}