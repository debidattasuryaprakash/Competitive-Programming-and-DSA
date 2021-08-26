

#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int arr[n];
int i;
for(i = 0; i < n; i++)
{
cin >> arr[i];
}
cout << "array reversed:\n"
for(i = n-1; i >= 0; i–)
{
cout << arr[i] << " ";
}
cout << endl;
return 0;

}