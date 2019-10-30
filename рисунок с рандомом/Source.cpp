#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void prob(int i)
{
	for (int k = 0; k < i; k++)
		cout << ' ';
}

void zvezd(int i)
{
	for (int k = 0; k < i; k++)
		cout << '*';
}


int main()
{
	srand(time(NULL));

	int i = 1, g = 0, j = 0, razi = 0, p = 0, sdvig = 0, razmer = 0, otstup = 0, flag = 0, k = 0, cvet = 0;;
	
	for (razi = 0; razi < 1000; razi++)
	{
		razmer = rand() % 7;
		sdvig = rand() % 130;
		otstup=rand() % 30;
		flag = 0;
		k = 0;
		cvet = rand() % 7;
		for (int i = razmer; i <=razmer+2; i++)
		{
			switch (cvet)
			{
				case 0:
				
					if (k % 2 == 0)
					{
						system("color 0D");
					}
					else
					{
						system("color 0B");
					}
					break;
				
				case 1:
				
					if (k % 2 == 0)
					{
						system("color 04");
					}
					else
					{
						system("color 0D");
					}
					break;
				
				case 2:
				
					if (k % 2 == 0)
					{
						system("color 0B");
					}
					else
					{
						system("color 04");
					}
					break;
				
				case 3:
				
					if (k % 2 == 0)
					{
						system("color 0A");
					}
					else
					{
						system("color 0E");
					}
					break;
				
				case 4:
				
					if (k % 2 == 0)
					{
						system("color 03");
					}
					else
					{
						system("color 0E");
					}
					break;
				
				case 5:
			
					if (k % 2 == 0)
					{
						system("color 01");
					}
					else
					{
						system("color 06");
					}
					break;
			
				case 6:
			
					if (k % 2 == 0)
					{
						system("color 0C");
					}
					else
					{
						system("color 03");
					}
					break;
			

				default:
					break;
			}
			k++;
			for (p = 0; p < otstup; p++)
			{
				cout << endl;
			}
			// verh
			for (g = 0; g <= i - 1; g++)
			{
				prob(sdvig);
				prob(i - g);
				zvezd(2 * i + 2 * g);
				prob(2 * i - 2 * g - 1);
				zvezd(2 * i + 2 * g);
				cout << endl;
			}
		// niz
			for (g = 1; g < (i) * 4; g++)
			{
				j = g;
				prob(sdvig);
				prob(j);
				zvezd(8 * i - 2 * j - 1);
				cout << endl;
			}
			Sleep(400);
			system("cls");
			if (i == razmer)
			{
				i=i-2;
				flag = 1;
			}
			if (k == 3)
			{
				i = razmer + 4;
			}

		}
	}

	system("pause");
	return 0;
}