#include <iostream>
#include "matran.h"
using namespace std;

int main()
{
	int data[100][100];
	int n;
	//cout<<"Nhap so dinh cua ma tran: \n";cin>>n;
	//NhapMatran(data,n);
	//GhiFile()
	DocFile(data,n);
	//XuatMatran(data,n);
	TimBac(data,n);
	TimBacMax(data,n);
}