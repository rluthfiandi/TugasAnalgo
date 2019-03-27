/*
Nama Program       : Bubble Sort
Nama               : Raihan Luthfiandi Muhammad
NPM                : 140810170029
Tanggal Pembuatan  : 26 Maret 2019

********************************************************************************************
*/

#include<iostream>
using namespace std;

main()
{
	int n, i, arr[50], j, temp;
	cout<<"Masukkan total elemen yang akan diurutkan: ";
	cin>>n;
	cout<<"Masukan "<<n<<" angka:\n";
	for(i=0; i<n; i++){
		cout<<"Masukan angka ke-"<<i+1<<": ";
		cin>>arr[i];
	}

	for(i=0; i<(n-1); i++)	{
		for(j=0; j<(n-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	cout<<"Data terurut dari hasil Bubble Sort::\n";
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}
