#include "4.h"

double sqrtN(double a, double b)
{
	double n = pow((a - b), 0.33333);
	return n;
}

double sinN(double a, double b)
{
	double n = (a * a) + (a - b) / sin(a * b);
	return n;
}

double (*OptionOfN(double a, double b))(double a, double b)
{
	if (a >= b)
	{
		return sqrtN;
	}
	if (a < b)
	{
		return sinN;
	}
}

double sqrtM(double a, double b, double n)
{
	double m = (n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n));
	return m;
}

double tgM(double a, double b, double n)
{
	double m = (b * b) + sin(n * a) / cos(n * a);
	return m;
}

double m3(double a, double b, double n)
{
	double m = (b * b * b) + n * a * a;
	return m;
}

double (*OptionOfM(double a, double b, double n))(double a, double b, double n)
{
	if (n < b)
	{
		return sqrtM;
	}
	if (n == b)
	{
		return tgM;
	}
	if (n > b)
	{
		return m3;
	}
}