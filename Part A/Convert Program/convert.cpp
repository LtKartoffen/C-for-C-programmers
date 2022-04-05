// convert.cpp -- converted version of C-program to C++ program
#include <iostream>	// C++ library input and output
#include <vector>	// std::vector objects - alternative to array

// Generic idea - using template functions
template <class summable>
// Short func - we can use inline word
// Setiing the func argument as a reference to type - convinient solution (C++ style)
inline void sum(summable& p, int n, std::vector<summable> d)		// sum() will take reference to summable-type, size of array and object vector
{									// and then will calculus sum of array and write one to variable p
	p = 0;
	for (int i = 0; i < n; i++)
		p += d[i];
}
int main()
{
	int accum;
	const int N = 40;								// size for array
	std::vector<int>data(N);
	for (int i = 0; i < N; i++)							// fill array by values
		data[i] = i;
	sum(accum, N, data);								// culc sum in accum
	std::cout << "sum is " << accum << std::endl;
	return 0;
}
