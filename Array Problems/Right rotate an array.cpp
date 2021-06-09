#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

int main() {

    int size, rotate;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

    cout << "No. of times to rotate (R->L) : " << nline;

    cin >> rotate;

    rotate = rotate % size;

    for(int i=1; i<=rotate; ++i)
    {
        int temp = arr[size-1];
        for(int j=size-1; j>=0; --j)
        {
            arr[j] = arr[j-1];
        }
        arr[0] = temp;
    }

    cout << "Array after rotation : " << nline;

    for(int i=0; i<size; ++i)
    {
        cout << arr[i] << " ";
    }    
	return 0;
}

