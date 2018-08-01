#include <iostream>
#include <cmath>

using namespace std;

double bsqrt(double n){

    double start = 0;
    double end = n;
    int count = 0;
    while(start<end){
        count++;
        double mid = (start+end)/2;
        if(mid*mid==n){
            return mid;
        }else if(mid*mid<n){
            start=mid;
        }else{
            end=mid;
        }
        if(count==1000){
            return mid;
        }
    }

}

int main(){
    cout << bsqrt(2) << endl;
    cout << sqrt(2) << endl;
    return 0;
}
