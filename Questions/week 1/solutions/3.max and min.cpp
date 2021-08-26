#include <iostream>

using namespace std;

int main() {
    int n,min,max;
    cin >> n;
    min = n;
    max = n;

    int i,x;
    for (i = 1; i <=n; ++i) {
        cin >> x;

        if ( x < min ) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
    }
    cout << min <<" "<< max;
    return 0;
}