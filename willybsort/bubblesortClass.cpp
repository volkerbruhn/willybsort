#include "bubblesortClass.h"
#include <iostream>

void bubblesortClass::bubblesort() {
	int i, j;
	for (i = 0; i < liste.size() - 1; ++i) {

		for (j = 0; j < liste.size() - i - 1; ++j) {
			if (liste[j] > liste[j + 1]) {
				int tmp = liste[j];
				liste[j] = liste[j + 1];
				liste[j + 1] = tmp;
			}
		}
	}
}
void bubblesortClass::listeEingeben() {
	int i = 1;
	while (i!=0){
		std::cin >> i;
		liste.push_back(i);
	}
}
void bubblesortClass::listeAusgeben() {
		for (int i = 0; i < liste.size(); i++) {
		std::cout << liste[i] << ", ";
	}
	std::cout << std::endl;
}
