// 出生到现在共几天.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int year, month, day, sum = 0, i, e_year, e_month, e_day, qday = 0, sday = 0;
	int a[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	cin >> year >> month >> day >> e_year >> e_month >> e_day;
	if (e_year - year>1)
	{
		sum = (e_year - year - 2) * 365;
		for (i = year + 1; i<e_year; i++)
		{
			if (i % 400 == 0 || i % 100 != 0 && i % 4 == 0)
			{
				sum = sum + 1;
			}
		}
		for (i = 0; i<month; i++)
		{
			qday = qday + a[i];
		}
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 && month<3)
		{
			sum = sum + (366 - qday);
		}
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 && month >= 3)
		{
			sum = sum + (366 - qday - 1);
		}
		else
		{
			sum = sum + (365 - qday);
		}
		for (i = 0; i<e_month; i++)
		{
			sum = sum + a[i];
		}
		if (e_year % 400 == 0 || e_year % 100 != 0 && e_year % 4 == 0 && e_month >= 3)
		{
			sum = sum + e_day + 1;
		}
		else
		{
			sum = sum + e_day;
		}
		printf("已经存在了%d天", sum);
	}
	else
	{
		sum = 0;
		if (e_year - year == 0)
		{
			for (i = 0; i<month; i++)
			{
				qday = qday + a[i];
			}
			if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 && month >= 3)
			{
				qday = qday + day + 1;
			}
			else
			{
				qday = qday + day;
			}
			for (i = 0; i<e_month; i++)
			{
				sday = sday + a[i];
			}
			if (e_year % 400 == 0 || e_year % 100 != 0 && e_year % 4 == 0 && e_month >= 3)
			{
				sday = sday + e_day + 1;
			}
			else
			{
				sday = sday + e_day;
			}
			sum = sday - qday + 1;
		}
		else
		{
			for (i = 0; i<month; i++)
			{
				qday = qday + a[i];
			}
			if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 && month<3)
			{
				sum = sum + (366 - qday);
			}
			if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0 && month >= 3)
			{
				sum = sum + (366 - qday - 1);
			}
			else
			{
				sum = sum + (365 - qday);
			}
			for (i = 0; i<e_month; i++)
			{
				sum = sum + a[i];
			}
			if (e_year % 400 == 0 || e_year % 100 != 0 && e_year % 4 == 0 && e_month >= 3)
			{
				sum = sum + e_day + 1;
			}
			else
			{
				sum = sum + e_day;
			}
		}
		printf("已经存在了%d天", sum);
	}
    return 0;
}

