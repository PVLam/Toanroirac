#ifndef DOTHI_H
#define DOTHI_H
#include <iostream>
#include <fstream>
#include "list.h"
#include "node.h"
using namespace std;


class DoThi
{
private:
	int N;
	int a[100][100];
public:
	DoThi()
	{
		N = 0; 
	};
	DoThi(const char * fileName)
	{
		ifstream fin(fileName);
		fin>>N;
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				fin>>a[i][j];

		fin.close();
	};
	int GetDinh() const
	{
		return N;
	};
	int GetBac(int v) const
	{
		int b = 0;
		for (int i = 1; i <= N; i++)
			if (a[i-1][v-1] == 1)
				b++;
		return b;
	};
	List<int> KeVoiDinh(int v) const
	{
		List<int> r;
		for(int i = 1; i<=N; i++)
			if (a[i-1][v-1] == 1)
				r.Add(i);
		return r;
	};
	bool LienThong()const
	{

	};
	List<int> DFS()const
	{

	};
	bool DuongDiEuler()const 
	{

	};
	List<int> ChuTrinhEuler()const
	{

	};
};

#endif