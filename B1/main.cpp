#include <iostream>
using namespace std;
#include "dothi.h"

int main()
{
	DoThi dt("dothi.txt");
	cout<<dt.GetBac(2)<<endl;
	for (int i = 1; i <= dt.GetDinh(); i++)
		cout<<i<<": "<<dt.GetBac(i)<<endl;
	cout<<dt.KeVoiDinh(3)<<endl;
	cout<<dt.DFS()<<endl;
	cout<<dt.LaLienThong()<<endl;
	cout<<dt.SoMienLienThong()<<endl;
	cout<<dt.BFS()<<endl;
	return 0;
}
