#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int b, count=0, a[n];
    cin>>b;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
        if (a[i]==b)
        count++;
    }
    
    cout<<count;
    return 0;
}