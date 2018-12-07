#include "complex.h"

int main() {

	complex c1(1, 3);
	complex c2(0, 0, 5, 90);

	cout << c1.getReal() << endl << c1.getImag() << endl << c1.getRadius() << endl << c1.getArgument() << endl;
	cout << c2.getReal() << endl << c2.getImag() << endl << c2.getRadius() << endl << c2.getArgument() << endl;

	return 0;
}