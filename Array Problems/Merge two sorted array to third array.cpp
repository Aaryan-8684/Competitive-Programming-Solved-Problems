#include<bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n";

int main() {
	int size1, size2;
	cout << "Enter the size of first array : " << nline;
	cin >> size1; //size of first array i.e, arr1

	cout << "Enter the elements of first array : " << nline;
    int arr1[size1];
	for(int i=0; i<size1; ++i)
		cin >> arr1[i];

	cout << "Enter the size of second array : " << nline;
	cin >> size2; //size of second array i.e, arr2

	cout << "Enter the elements of second array : " << nline;
    int arr2[size2];
	for(int i=0; i<size2; ++i)
		cin >> arr2[i];

    //size3 is size of Third array i.e, mergedArray
	int size3 = size1 + size2, mergedArray[size3], index1 = 0, index2 = 0, index3;

	for(index3 = 0; index3 < size3; ++index3)
	{
	   if(index1 >= size1 || index2 >= size2)
			break; 

       if(arr1[index1] <= arr2[index2])
       {
       	  mergedArray[index3] = arr1[index1];
       	  index1++;
       }
       else
       {
       	  mergedArray[index3] = arr2[index2];
       	  index2++;
       }
	}

	while(index1 < size1)
	{
		mergedArray[index3] = arr1[index1];
		index3++;
		index1++;
	}

	while(index2 < size2)
	{
		mergedArray[index3] = arr2[index2];
		index3++;
		index2++;
	}

	for(int i=0; i<size3; ++i)
		cout << mergedArray[i] << " ";
	

	return 0;
}

