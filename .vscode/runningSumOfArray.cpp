#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    int runningSum[n];
    int sum=0;

    for(int i = 0; i<n; i++){
        cin>>array[i];
        sum += array[i];
        runningSum[i] = sum;

        cout<<runningSum[i]<<" ";
    }

    return 0;
}