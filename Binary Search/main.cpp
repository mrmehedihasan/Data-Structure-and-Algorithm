#include <bits/stdc++.h>

using namespace std;

int binary_search(int A[], int len, int x){
    int left = 0;
    int right = len;
    while(left<=right){
        int mid = (right+left)/2;
        if(A[mid]==x){
            return mid;
        }else if(A[mid]<x){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return -1;
}


int main(){
    int arr[5] = {2,4,5,6,7};
    cout << binary_search(arr, 5, 5) << endl;
    return 0;
}
