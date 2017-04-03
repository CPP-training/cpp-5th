#include "stdafx.h"
#include <iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
	srand(time(0));
	
	for (int a = 1; a <= 25; a++) {

		cout << 1 + (rand() % 6) << endl;

	}

	getch();
}
