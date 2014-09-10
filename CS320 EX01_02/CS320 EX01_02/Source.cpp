#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	bool c1, c2, c3, IsATriangle;

	//First Step

	do{
		cout << "Enter 3 integers which are sides of a triangle" << endl;
		cin >> a, b, c;
		c1 = ((1 <= a) && (a <= 300));
		c2 = ((1 <= b) && (b <= 300));
		c3 = ((1 <= c) && (c <= 300));
		if (!c1){
			cout << "Value of a is not in the range of permitted values";
		}
		if (!c2){
			cout << "Value of b is not in the range of permitted values";
		}
		if (!c3){
			cout << "Value of c is not in the range of permitted values";
		}
	} while (c1 && c2 && c3);
	cout << "Side A is" << a << endl;
	cout << "Side B is" << b << endl;
	cout << "Side C is" << c << endl;


	//Second Step

	if ((a < b + c) && (b < a + c) && (c < a + b))
		IsATriangle = true;
	else
		IsATriangle = false;
	//Third Step

	if (IsATriangle){
		if ((a = b) && (b = c))
			cout << "Equilateral" << endl;
		else if ((a != b) && (a != c) && (b != c))
			cout << "Scalene" << endl;

	//Fourth Step "Right Triangle"
		
		else if ((a <= b) && (b <= c))
			cout << "Right Triangle" << endl;
		else
			cout << "Isosceles" << endl;
	}

		else
			cout << "Not A Triangle" << endl;
	return 0;
}
