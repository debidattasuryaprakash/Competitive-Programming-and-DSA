#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, max, min;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sort(a, a+n);
    }
    for(int i=0; i<n; i++){
    if(n%2==0){
        max=a[k];
        min=a[k-1];
        }
        else{
        max=a[n-k];
        min=a[k-1];
        }
    }
    cout<<max<<" ";
    cout<<min;
    return 0;
}