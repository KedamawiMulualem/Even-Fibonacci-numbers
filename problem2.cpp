#include<string>
#include <vector>
#include<iostream>
#include<cmath>
using namespace std;
void main() {
	int max = 4000000;
	int num2 = 1;
	int num3;
	int sum = 0;
	int	num1 = 1;
	while (num1<max)
	{
		num3 = num1;
		num1 = num1 + num2;
		num2 = num3;
		if (num1 < max&&num1%2==0) {
			sum += num1;
		}
	}
	cout << sum << endl;

	system("pause");
}