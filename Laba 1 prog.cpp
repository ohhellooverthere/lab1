
#include "pch.h"
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;



	
	int main()
	{
		//4. Реалізувати переведення числа з системи числення з основою m&lt;10 у десяткову.
		setlocale(LC_ALL, "rus");
		int c, m, n, s, i, v, k;
		cout << "ведите целое положительное число и систему счисления этого числа" << endl;
		cin >> c >> m;
		if (m >= 10) cout << "система счисления больше за 10" << endl;
		else {
			n = 0;
			s = 0;
			k = c;//присваеваем значение с 
			while (k > 0)// считаем сколько чисел в числе
			{
				k = k / 10; n = n + 1;
			}
			for (i = 0; i < n; i++)
			{
				v = c % 10;
				if (v >= m) {// если система счисления 6, а число >=6 то прекратить
					cout << "не верная система счисления" << endl;
					return 0;
				}
				s = s + v * pow(m, i);
				c = c / 10;
			}
			cout << "число в десятичной системе счисления " << s << endl;
			system("pause");
		}
	}

