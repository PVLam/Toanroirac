#ifndef MATRAN_H
#define MATRAN_H
#include <iostream>
#include <fstream>
using namespace std;

void NhapMatran(int data[100][100], int &n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout<<"Dinh "<<i+1<<" co noi den dinh "<<j+1<<": ";
			cin>>data[i][j];
		}
		cout<<endl;
	}
}

void GhiFile()
{
	int n, data[100][100];
	ofstream file("data.txt");
	file<<n<<endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			file<<data[i][j]<<" ";
		}
		file<<endl;
	}
	file.close();
}

void DocFile(int data[100][100], int &n)
{
	ifstream file("data.txt");
	file>>n;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			file>>data[i][j];
		}
	}
	file.close();
}

void XuatMatran(int data[100][100], int &n)
{
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cout<<data[i][j]<<" ";
		}
		cout<<"\n";
	}
}

void TimBac(int data[100][100], int &n)
{
	for (int i = 0; i<n; ++i)
	{
		int s = 0;
		for (int j = 0; j<n; ++j)
		{
			 int t = data[i][j];
			 s = s + t;
		}
		cout<<"Bac cua dinh "<<i+1<<" la: "<<s<<endl;
	}
}

void TimBacMax(int data[100][100], int &n)
{
	int a[100];
	for (int i = 0; i<n; ++i)
	{
		int s = 0;
		for (int j = 0; j<n; ++j)
		{
			 int t = data[i][j];
			 s = s + t;
		}
		a[i] = s;
	}
	int max = 0;
	for (int i = 0; i<n; ++i)
	{
		if (max<a[i])
		{
			max = a[i];
		}
	}
	for (int i = 0; i<n; ++i)
	{
		if (max == a[i])
		{
			cout<<"Bac co dinh cao nhat la: "<<i+1<<endl;
		}
	}
}

void KTlienthong()
{

}


#endif