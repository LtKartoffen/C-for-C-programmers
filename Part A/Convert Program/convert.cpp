// convert.cpp -- converted version of C-program to C++ program
#include <iostream>	// C++ library input and output
#include <vector>	// std::vector objects - alternative to array

// Generic idea - using template functions
template <class summable>
// Short func - we can use inline word
// Setiing the func argument as a reference to type - convinient solution (C++ style)
inline void sum(summable& sum, int size, std::vector<summable> data)	// sum() will take reference to summable-type, size of array and object vector
{																		// and then will calculus sum of array and write one to variable p
	sum = 0;
	for (int i = 0; i < size; i++)
		sum += data[i];
}
// Inline func for fill numeric array by values
template <class numeric>
inline void fill_array(std::vector<numeric>& data, int size)
{
	for (int i = 0; i < size; i++)					
		data[i] = static_cast<numeric> (i);				// safety static cast in C++
}
int main()
{
	int accum;
	const int SIZE = 40;								// size for array
	std::vector<int>data(SIZE);							// creating vector object with 40 elements
	fill_array(data, SIZE);				
	sum(accum, SIZE, data);								// culc sum in accum
	std::cout << "sum is " << accum << std::endl;		// out of result
	return 0;
}
