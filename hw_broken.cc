/**
* \file
*/

#include <iostream>
#include <cmath>

/**
* \brief calculates standard deviation
* \param a a dynamic array of integers used to store the data set
* \param n the size of the dynamic array used to store the data set
* \return the standard deviation of the integers in the dynamic array expressed as a double
*/
double deviation(int* a, int n)
{
	double sum = 0.0;
	for(size_t i = 0; i < n; i++)
	{
		sum += a[i];
	} 
	double mean = sum / n;
	double stddev = 0;
	for(size_t i = 0; i < n; i++)
	{
		stddev = stddev + (a[i] - mean) * (a[i] - mean); 
	}
	stddev /= n;
	if (stddev == 0.0)
	{
		std::cout << "Sigma is zero." << std::endl;
	}
	return sqrt(stddev);
}
