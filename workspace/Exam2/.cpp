#include <iostream>

int gib(int n)
{
	if(n == 1)
	{
		return(3);
	}
	else if(n == 2)
	{
		return(10);
	}
	else if(n == 3)
	{
		return(83);
	}
	else
	{
		return(0);
	}
	return(gib(n-1) + gib(n-2) + gib(n-3));
}

// void recFunc(int n)
// {
// if(n > 10)
// {
// 	std::cout << n << std::endl;
// recFunc( n-3 );
// }
// else if (n > 5)
// {
// 	recFunc( n-2 );
// 	std::cout << n << std::endl;
// }
// else
// {
// 	std::cout << n << std::endl;
// }
// }
//
int main()
{
	gib(1);
	std::cout << '\n';
	gib(2);
	std::cout << '\n';
	gib(3);
	std::cout << '\n';
	gib(4);
	std::cout << '\n';
	gib(5);
	std::cout << '\n';
	return(0);
}


// /void recFunc(int i)
// {
// 	if(i < 5)
// 	{
// 		recFunc(i+1);
// 		std::cout << i << '\n';
// 	}
// }
//
// double recSum(double arr[], int size)
// {
// 	//base case
// 	if(size <= 0)
// 	{
// 		return(0);
// 	}
// 	else
// 	{
// 		return(arr[size-1] + recSum(arr, size-1));
// 	}
// }
//
// int main()
// {
// 	char seq[] = {'a', 'b', 'a'}; //initial at declaration
// 	const int size = 5;
// 	double* arr = new double[size];
// 	double* arrOffset = arr+1;
//
// 	recFunc(0);
//
// /*
// 	std::cout << "[ ";
// 	for(int i=0; i<size; i++)
// 	{
// 		arr[i] = (i+1)*10.0;
// 		std::cout << arr[i] << ' ';
// 	}
// 	std::cout << "]\n";
// */
// 	return(0);
//}
