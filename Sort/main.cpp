#include <bits/stdc++.h>
using namespace std;
int arr[100];
int maximum;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        cin>>n;
        arr[n]++;
        maximum = max(maximum, n);
    }
    cout << "Max: " << maximum << endl;
    for(int i=0; i<=maximum; i++){
        if(arr[i]>0){
            for(int j=1; j<=arr[i]; j++){
                cout << i << endl;
            }
        }
    }
    return 0;
}
