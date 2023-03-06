#include <ctime>
#include <iostream>
double sizefoo(int *sizearr);
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int play = 1;
	while (play == 1)
	{
		int* sizearr;
		cout << "введите размер массива" << endl;
		cin >> (* sizearr);
		sizefoo(sizearr);
	}
}
double sizefoo(int* sizearr)
{
	double* arr = new double[( * sizearr)];
	return arr[0];
}
double arrfoo(one)
{

}