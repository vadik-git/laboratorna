#include "Header.h"
#include <iostream>
#include <fstream>
vopros* vopross;
int countviktoruna = 0;
void addvopros()

{

	ofstream fout;
	fout.open("quiz.txt", fstream::app);

	bool isopen = fout.is_open();
	int countvopros = 5;
	if (isopen == true) {
		cout << "fileopen" << endl;

		viktoruna* temp = new viktoruna[countviktoruna + 1];

		cout << "enter kilkist viktoryn" << endl;
		cin >> countviktoruna;
		for (int i = 0; i < countviktoruna; i++) {

			//temp[i] = vopross[i];

			for (int i = 0; i < countvopros; i++) {
				cout << i + 1 << ".) " << "enter vopros" << endl;
				cin >>vopross[countvopros].vopros

			}


		}






	}
	else {

		cout << "not open file" << endl;

	}
}

void viktoryna()
{
}
