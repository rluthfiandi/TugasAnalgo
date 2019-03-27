/*
Nama Program       : Merge Sort
Nama               : Raihan Luthfiandi Muhammad
NPM                : 140810170029
Tanggal Pembuatan  : 26 Maret 2019

********************************************************************************************
*/

#include <iostream>
 
using namespace std;
 
// Fungsi untuk melakukan penggabungan kedua bagian menjadi data yang terurut.
void Merge(int *a, int low, int high, int mid)
{
	// Menyortir rendah ke sedang dan menengah +1 ke tinggi.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Gabungkan kedua bagian menjadi temp [].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
 
	// Masukkan semua nilai yang tersisa dari i hingga pertengahan ke temp [].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Masukkan semua nilai yang tersisa dari j ke tinggi ke temp [].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
 
	// Tetapkan data yang diurutkan disimpan dalam temp [] ke a [].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
 
// Suatu fungsi untuk membagi array menjadi dua bagian.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Membagi data menjadi dua bagian
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		
		// Gabungkan mereka untuk mendapatkan hasil yang diurutkan.
		Merge(a, low, high, mid);
	}
}
 
int main()
{
	int n, i;
	cout<<"\nMasukkan jumlah data yang akan di urutkan: ";
	cin>>n;
 
	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Masukkan elemen ke-"<<i+1<<": ";
		cin>>arr[i];
	}

	MergeSort(arr, 0, n-1);
 
	// Mencetak data terurut.
	cout<<"\nData Terurut: ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];
 
	return 0;
}
