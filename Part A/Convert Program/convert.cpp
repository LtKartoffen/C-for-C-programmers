// convert.cpp -- converted version of C-program to C++ program
#include <iostream>	// C++ library input and output
#include <vector>	// std::vector objects
// short func - we can use inline word
inline void sum(int* p, int n, std::vector<int> d)
{
	*p = 0;
	for (int i = 0; i < n; i++)
		*p += d[i];
}
int main()
{
	int accum;
	const int N = 40;
	std::vector<int>data(N);
	for (int i = 0; i < N; i++)
		data[i] = i;
	sum(&accum, N, data);
	std::cout << "sum is " << accum << std::endl;
	return 0;
}
