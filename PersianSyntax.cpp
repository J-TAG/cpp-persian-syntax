// PersianSyntax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

// Load Persian Syntax Header File
#include "PersianSyntax.h"

#include "iostream"

استفاده_از_فضای_اسمی std;

کلاس MyClass
{
عمومی:
	MyClass() {};
	مجازی ~MyClass() {};
	
محافظت_شده:


خصوصی:

};

عدد اصلی()
{
	عدد x برابربا 0;
	
	cout << "Please enter a number: ";
    cin >> x;

	اگر(x بزرگترمساوی 10)
	{
		cout << "You Enter a number greater than or equal 10.\n\n";
	}
	دیگر
	{
		cout << "You Enter a number lower than 10.\n\n";
	}

	برای(عدد i برابربا 0; i بزرگتراز 10; i++ )
	{
		cout << i << endl;
	}

	عدد y = 0;


	برای_همیشه
	{
		cout << "Please enter 5 to exit loop: ";
		cin >> y;

		اگر(y مساوی 5)
		{
			بشکن;
		}
	}

	MyClass* pMyObj = جدید MyClass;
	MyClass myObj2;

	اگر(pMyObj مساوی تهی)
	{
		cout << "First Object is Null.\n";
	}
	دیگر اگر(اندازه_ی(pMyObj) مساوی اندازه_ی(myObj2))
	{
		cout << "Objects size are equal.\n";
	}

	حذف pMyObj;

	
	برگشتی 0;
}

