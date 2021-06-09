#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

int main() {

	// logic to find first occurenece of a key in an array.

    int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	cout << "\nEntered array elements are : ";

	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";

	int key, index;

    cout << "Element to search is : " << nline;
    cin >> key;

    int i, found = 0;

    for(i=0; i<size; ++i)
    {
    	if(arr[i] == key)
    	{
    		found = 1;
    		break;
    	}
    }

    if(found == 1)
    {
    	cout << key << " is found at position " << i+1 << nline;
    }
    else
    	cout << key << " is not present." << nline;

	
	return 0;
}

