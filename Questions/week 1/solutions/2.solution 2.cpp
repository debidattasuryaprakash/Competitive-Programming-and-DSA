#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    int n, count=0, a[m];
    cin>>n;
    for (int i=0; i<m; i++)
    {
        cin>>a[i];
        if (a[i]==n)
        count++;
    }
    
    if(count>=1)
    cout<<"true";
    else
    cout<<"false";
    return 0;
}