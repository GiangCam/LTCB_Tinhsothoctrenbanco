#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int soO, sothoc=0;
	cout << "nhap so o:"; cin >> soO;
	for (int i = 0; 1 < soO; i++)
	{
		cout << "0 so" << i;
		<<"co so thoc la" << pow(2,i) << endl;
		sothoc += pow(2,i);
	}
	cout << "tong so thoc chua trong" << soO << "la" << sothoc << "hat\n";
	return 0;
}