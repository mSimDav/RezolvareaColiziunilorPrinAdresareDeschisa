#include<iostream>
#define M 10
using namespace std;

int T[M];

void init() {
	for (int k = 0; k < M; k++)
		T[k] = -1;
}

//verificare liniara

int h1(int k) {
	return k % M;
}

int h(int k, int i) {
	return (h1(k) + i) % M;
}

//verificare patratica

/*int c1 = 0, c2 = 1;
int h1(int k) {
	return k % M;
}

int h(int k, int i) {
	return (h1(k) + c1 * i + c2 * i * i) % M;
}*/

//dispersia dubla

/*int h1(int k) {
	return k % M;
}

int h2(int k) {
	return 1 + (k % (M - 1));
}

int h(int k, int i) {
	return (h1(k) + i * h2(k)) % M;
}*/


void inserare(int k) {
	int i = 0;
	bool gasit = false;
	do {
		int j = h(k, i);
		if (T[j] == -1) {
			T[j] = k;
			gasit = true;
		}
		else
			i = i + 1;
	} while (i < M && !gasit);
	if (i == M)
		cout << "Tabela este plina " << endl;
}

void afisare() {
	for (int k = 0; k < M; k++) {
		if (T[k] != -1)
			cout << "Pozitia: " << k << " Element: " << T[k] << endl;
		else
			cout << "Pozitia: " << k << " Element: Null" << endl;
	}
}

bool cautare(int k) {
	int i = 0, j;
	bool gasit = false;
	do {
		j = h(k, i);
		if (T[j] == k)
			gasit = true;
		else
			i = i + 1;
	} while (T[j] != -1 && 1 < M && !gasit);
	return gasit;
}

int main() {
	int k, n;
	init();
	int optiune;
	do {
		cout << "Alegeti optiunea: " << endl;
		cout << "1. Inserare " << endl;
		cout << "2. Cautare " << endl;
		cout << "3. Terminare " << endl;
		cin >> optiune;

		switch (optiune)
		{
		case 1: {
			cout << "Numarul de elemente pe care doriti sa le inserati in tabela de dispersie: ";
			cin >> n;
			if (n > M) {
				cout << "Introduceti un numar mai mic decat " << M << ": ";
				cin >> n;
			}
			for (int i = 1; i <= n; i++) {
				cout << "Introduceti elemntul " << i << ": ";
				cin >> k;
				inserare(k);
				cout << endl;
			}
			afisare();
			cout << endl;
		}break;
		case 2: {
			cout << "Cheia elementului de cautat in tabela de dispersie: ";
			cin >> k;
			if (cautare(k) != false)
				cout << "Elementul se afla in tabela de dispersie" << endl;
			else
				cout << "Elementul nu se afla in tabela de dispersie" << endl;
			cout << endl;
		}break;
		case 3:break;
		default:cout << "Introduceti un numar valid de optiune (1->3)! " << endl;
		}
	} while (optiune != 3);
	system("pause");
	return 0;
}