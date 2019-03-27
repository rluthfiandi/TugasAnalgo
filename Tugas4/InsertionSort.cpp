/*
Nama Program       : Insertion Sort
Nama               : Raihan Luthfiandi Muhammad
NPM                : 140810170029
Tanggal Pembuatan  : 26 Maret 2019

********************************************************************************************
*/

#include <iostream>
using namespace std;

int data[10],data2[10];
int n;

void tukar(int a, int b)
{
 int t;
 t = data[b];
 data[b] = data[a];
 data[a] = t;
}

void insertion_sort()
{
 int temp,i,j;
 for(i=1;i<=n;i++){
  temp = data[i];
  j = i -1;
  while(data[j]>temp && j>=0)
  {
   data[j+1] = data[j];
   j--;
  }
 data[j+1] = temp;
 }
}

main()
{
 cout<<"Masukkan Jumlah Data : ";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
  cout<<"Masukkan data ke "<<i<<" : ";
  cin>>data[i];
  data2[i]=data[i];
 }

 insertion_sort();
 cout<<"Data Setelah di Sort : ";
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<data[i];
 }
 cout<<"\n\nSorting dengan insertion sort selesai";
}
