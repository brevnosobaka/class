#include "AEROFLOT.h"
#include <iostream>
#include <fstream>
#include "Myarr.h"
#include "Sort.h"
#include "sortcomp.h"
using namespace std;
const int n = 7;
template <class T>
void printArr(T* a, int n) {
	for (int i = 0; i < n; i++)
		std::cout << a[i] << " ";
}
int main()
{
	Myarr<AEROFLOT> arr;
	ifstream in("text1.txt");
	if (!in)cout << "\n file not open \n";

	in >> arr;
	cout <<"do:\n\n" << arr<<"\n\n\n";    //до

	arr.sort(AEROFLOT::compNumber); //по номеру
	std::cout << "flight_number:\n\n" << arr <<"\n\n\n";

	arr.sort(AEROFLOT::compDestination); //по названию пункта
	std::cout << "destinaton:\n\n" << arr <<"\n\n\n";

	ofstream outbin("aerof.bin", ios_base::binary);
	arr.writeBin(outbin);
	ifstream inbin("aerof.bin", ios_base::binary);
	Myarr<AEROFLOT> mass;
	mass.readBin(inbin);
	cout << "\n\n\nbinary:\n\n" << mass;
	if (outbin, inbin)cout << "\n gotovo\n";
}
	
	
