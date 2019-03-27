/*
Nama Program       : Selection Sort
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
void selection_sort()
{
 int pos,i,j;
 for(i=1;i<=n-1;i++)
 {
  pos = i;
  for(j = i+1;j<=n;j++)
  {
   if(data[j] < data[pos]) pos = j;
  }
  if(pos != i) tukar(pos,i);
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

 selection_sort();
 cout<<"Data Setelah di Sort : ";
 for(int i=1; i<=n; i++)
 {
  cout<<" "<<data[i];
 }
 cout<<"\n\nSorting dengan selection sort selesai";
}
