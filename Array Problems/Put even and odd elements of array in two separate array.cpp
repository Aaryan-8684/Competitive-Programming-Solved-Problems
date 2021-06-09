#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

int main() {

    int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	int even[size], odd[size], eIndex=0, oIndex=0;

	for(int i=0; i<size; ++i)
	{
		if(arr[i] & 1)
		{
			odd[oIndex] = arr[i];
			oIndex++;
		}
		else
		{
			even[eIndex] = arr[i];
			eIndex++;
		}
	}

	cout << "Original Array : " << nline;
    
	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";

	cout << nline;

    cout << "Odd Elements : " << nline;

	for(int i=0; i<oIndex; ++i)
		cout << odd[i] << " ";

	cout << nline;

    cout << "Even Elements : " << nline;
    
	for(int i=0; i<eIndex; ++i)
		cout << even[i] << " ";

	return 0;
}

