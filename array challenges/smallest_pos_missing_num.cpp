#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    bool check[n+1];
    for(int i=0; i<n+1; i++){
        check[i] = false;
    }

    for(int i=0; i<n; i++){
        if(a[i] > 0){
            check[a[i]] = true;
        }
    }

    for(int i=1; i<n+1; i++){
        if(check[i] == false){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
    
}