﻿// EX05_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

// 20/20

template <typename T>
void shuffle(vector<T>& v)
{
	srand(time(0));

	int size = v.size();
	//PT -- If you think about how a real shuffle works, this doesn't model it. In a real shuffle, you
	//      split the deck almost in half, then merge the two decks back into one. Could you implement that?
	for (int i = 0; i < size; i++)
	{
		int random = (rand() % size) - 1;
		int temp = v[i];
		v[i] = v[random];
		v[random] = temp;
	}
}

int main()
{
	vector<int> v1 = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	const int Vsize = 10;
	int num = 0;

	shuffle(v1);

	for (int i = 0; i < Vsize; i++)
		cout << v1[i] << endl;

    return 0;
}

