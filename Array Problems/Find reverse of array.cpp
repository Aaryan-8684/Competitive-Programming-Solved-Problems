#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

int main() {

	// Logic to print array in reverse order

	int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	cout << "Reversed array elements : " << nline;

	for(int i=size-1; i>=0; --i)
		cout << arr[i] << " ";


	// logic to reverse array elements using another array.

	int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	int  revArr[size], arrIndex = size-1, revIndex = 0;

	for(int j = 0; j < size; ++j)
	{
		revArr[revIndex] = arr[arrIndex];
		revIndex++;
		arrIndex--;
	}

	cout << "Elements of arr are : " << nline

	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";

	cout << nline;

	cout << "Elements of revArr are : " << nline

	for(int i=0; i<size; ++i)
		cout << revArr[i] << " ";
	

    // logic to reverse array elements without using another array.

    int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	int frontIndex = 0, rearIndex = size-1;

	for(int i = 0; i < (size/2) + 1; ++i)
	{
		if(rearIndex > frontIndex)
		{
			int temp = arr[frontIndex];
		    arr[frontIndex] = arr[rearIndex];
	    	arr[rearIndex] = temp;
	    	rearIndex--;
	    	frontIndex++;
		}
    }

    cout << "Elements of arr are : " << nline

	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";

	return 0;
}

