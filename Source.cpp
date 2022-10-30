#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
	double bas;
	double heig;
	
	triangle ob0, ob1, ob2, ob3, ob4,ob5 ;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the base of the triangle :";
		cin >> bas;
		cout << "Enter the height of the triangle :";
		cin >> heig;
		if (i == 0)
		{
			ob0.ba = bas;
			ob0.he = heig;
			ob0.init(ob0.ba, ob0.he);
			ob0.area=ob0.calculatearea(bas, heig);
		}
		if (i == 1)
		{
			ob1.ba = bas;
			ob1.he = heig;
			ob1.init(ob1.ba, ob1.he);
			ob1.area = ob1.calculatearea(bas, heig);
		}
		if (i == 2)
		{
			ob2.ba = bas;
			ob2.he = heig;
			ob2.init(ob2.ba, ob2.he);
			ob2.area = ob2.calculatearea(bas, heig);
		}
		if (i == 3)
		{
			ob3.ba = bas;
			ob3.he = heig;
			ob3.init(ob3.ba, ob3.he);
			ob3.area = ob3.calculatearea(bas, heig);
		}
			if (i == 4)
			{
				ob4.ba = bas;
				ob4.he = heig;
				ob4.init(ob4.ba, ob4.he);
				ob4.area = ob4.calculatearea(bas, heig);

			}
	}
          
		  
	if (ob0.area > ob1.area && ob0.area > ob2.area&& ob0.area > ob3.area&& ob0.area > ob4.area)
	{
		ob0.display(ob0.ba, ob0.he);
		cout << "The greatest area is : " << ob0.area << endl;
	}
	if (ob1.area > ob0.area && ob1.area > ob2.area&& ob1.area > ob3.area&& ob1.area > ob4.area)
	{
		ob1.display(ob1.ba, ob1.he);
		cout << "The greatest area is : " << ob1.area << endl;
	}
	if (ob2.area > ob1.area && ob2.area > ob0.area&& ob2.area > ob3.area&& ob2.area > ob4.area)
	{
		ob2.display(ob2.ba, ob2.he);
		cout << "The greatest area is : " << ob2.area << endl;
	}if (ob3.area > ob1.area && ob3.area > ob2.area&& ob3.area > ob0.area&& ob3.area > ob4.area)
	{
		ob3.display(ob3.ba, ob3.he);
		cout << "The greatest area is : " << ob3.area << endl;
	}if (ob4.area > ob1.area && ob4.area > ob2.area&& ob4.area > ob3.area&& ob4.area > ob0.area)
	{
		ob4.display(ob4.ba, ob4.he);
		cout << "The greatest area is : " << ob4.area << endl;
	}
	system("pause");
	return 0;
}