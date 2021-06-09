#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

void Bubble_Sort(int arr[], int size)
{
	for(int i=0; i<size; ++i)
	{
		int flag = 0;

		for(int j=0; j<size-i-1; ++j)
		{
			if(arr[j] > arr[j+1])
			{
				flag = 1;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}

	if(flag == 0)
		break;
	}
}

int main() {

	// logic to sort array elements in ascending or descending order {Bubble Sort}.

    int size;
	cout << "Enter the size of array : " << nline;
	cin >> size;

	int arr[size];
	cout << "Enter the array elements : " << nline;

	for(int i=0; i<size; ++i)
		cin >> arr[i];

	cout << "\nEntered array elements are : " << nline;

	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";

	Bubble_Sort(arr, size);

	cout << "\nAfter sorting array elements are : " << nline;

	for(int i=0; i<size; ++i)
		cout << arr[i] << " ";
	
	return 0;
}

