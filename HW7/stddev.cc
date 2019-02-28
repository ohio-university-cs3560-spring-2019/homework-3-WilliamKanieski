//Standard deviation function implementation file
//Takes the standard deviation of a set of variables using variadic functions
//Requires iostream, cstdarg, and cmath

#include "stddev.h"

double stddev(int n, ...)
{
	//Calculates the average of the data values
	double sum = 0.0;
	double item;
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		item = va_arg(args, int);
		sum += item;
	}
	double average = sum / n;
	va_end(args);

	//Calculates the variance of the data and returns its square root
	va_list args2;
	va_start(args2, n);
	double variance = 0.0;
	double squared_deviation;
	for (int i = 0; i < n; i++)
	{
		item = va_arg(args2, int);
		squared_deviation = (item - average) * (item - average);
		variance += squared_deviation;
	}
	variance /= n;
	va_end(args2);
	return sqrt(variance);
}

