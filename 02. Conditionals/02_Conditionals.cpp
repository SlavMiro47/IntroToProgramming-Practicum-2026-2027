#include <iostream>

int main()
{
    // 1
	//int a, b;
	//std::cin >> a >> b;
	//int smallerNumber = (a < b) ? a : b;
	//std::cout << smallerNumber << std::endl;


	// 2
	//unsigned year;
	//std::cin >> year;
	//if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//	std::cout << "yes" << std::endl;
	//else
	//	std::cout << "no" << std::endl;


	// 3
	//double a, b, c;
	//std::cin >> a >> b >> c;
	//if (a + b > c && a + c > b && b + c > a) 
	//	std::cout << "yes" << std::endl;
	//else 
	//	std::cout << "no" << std::endl;


	// 4 
	//double x, y;
	//std::cin >> x >> y;
	//if (x == 0 || y == 0) {
	//	std::cout << "On axis" << std::endl;
	//}
	//else if (x > 0 && y > 0) {
	//	std::cout << "First" << std::endl;
	//}
	//else if (x < 0 && y > 0) {
	//	std::cout << "Second" << std::endl;
	//}
	//else if (x < 0 && y < 0) {
	//	std::cout << "Third" << std::endl;
	//}
	//else if (x > 0 && y < 0) {
	//	std::cout << "Fourth" << std::endl;
	//}


	// 5
	//int month;
	//std::cin >> month;
	//switch (month) {
	//case 1:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 2:
	//	int year;
	//	std::cout << "Year: ";
	//	std::cin >> year;
	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//		std::cout << 29 << std::endl;
	//	else
	//		std::cout << 28 << std::endl;
	//	break;
	//case 3:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 4:
	//	std::cout << 30 << std::endl;
	//	break;
	//case 5:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 6:
	//	std::cout << 30 << std::endl;
	//	break;
	//case 7:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 8:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 9:
	//	std::cout << 30 << std::endl;
	//	break;
	//case 10:
	//	std::cout << 31 << std::endl;
	//	break;
	//case 11:
	//	std::cout << 30 << std::endl;
	//	break;
	//case 12:
	//	std::cout << 31 << std::endl;
	//	break;

	//}

	
	// 6
	//unsigned a, b;
	//std::cin >> a >> b;
	//unsigned concatenatedNumber = a * 100 + b;
	//unsigned firstDigit = concatenatedNumber / 1000;
	//unsigned secondDigit = (concatenatedNumber / 100) % 10;
	//unsigned thirdDigit = (concatenatedNumber / 10) % 10;
	//unsigned lastDigit = concatenatedNumber % 10;
	//if (firstDigit < secondDigit && secondDigit < thirdDigit && thirdDigit < lastDigit)
	//	std::cout << concatenatedNumber << " - YES" << std::endl;
	//else
	//	std::cout << concatenatedNumber << " - NO" << std::endl;


	// 7
	//unsigned a;
	//double x, y;
	//std::cin >> a >> x >> y;
	//int col = x / a;
	//int row = y / a;
	//if ((col + row) % 2 == 0) {
	//	std::cout << "black" << std::endl;
	//}
	//else {
	//	std::cout << "white" << std::endl;
	//}


	// 8 
	//std::cout << "1. Събиране\n2. Изваждане\n3. Умножение\n4. Деление\n5. Остатък при деление\nИзбор:\n";

	//int cmd, a, b;
	//std::cin >> cmd >> a >> b;

	//switch (cmd) {
	//case 1: 
	//	std::cout << a + b << std::endl; 
	//	break;
	//case 2: 
	//	std::cout << a - b << std::endl; 
	//	break;
	//case 3: 
	//	std::cout << a * b << std::endl; 
	//	break;
	//case 4:
	//	if (b == 0) std::cout << "Division by zero" << std::endl;
	//	else std::cout << (double)a / b << std::endl;
	//	break;
	//case 5:
	//	if (b == 0) std::cout << "Division by zero" << std::endl;
	//	else std::cout << a % b << std::endl;
	//	break;
	//default:
	//	std::cout << "Invalid option" << std::endl;
	//	break;
	//}


	// 9
	//double a, b, c;
	//std::cin >> a >> b >> c;
	//if (!(a + b > c && a + c > b && b + c > a))
	//{
	//	std::cout << "Not a triangle" << std::endl;
	//	return 0;
	//}
	//if (a == b && b == c)
	//	std::cout << "Equilateral, ";
	//else if (a == b || a == c || b == c)
	//	std::cout << "Isosceles, ";
	//else
	//	std::cout << "Scalene, ";
	//double longestSide,sideA,sideB;
	//if (a >= b && a >= c)
	//{
	//	longestSide = a;
	//	sideA = b;
	//	sideB = c;
	//}
	//else if (b >= a && b >= c)
	//{
	//	longestSide = b;
	//	sideA = a;
	//	sideB = c;
	//}
	//else
	//{ 
	//	longestSide = c;
	//	sideA = a;
	//	sideB = b;
	//}
	//double longestSideSquared = longestSide * longestSide;
	//double sumOfSquares = (sideA * sideA) + (sideB * sideB);
	//if (longestSideSquared == sumOfSquares)
	//	std::cout << "Right" << std::endl;
	//else if (longestSideSquared < sumOfSquares)
	//	std::cout << "Acute" << std::endl;
	//else
	//	std::cout << "Obtuse" << std::endl;

	// BONUS
	//unsigned day, month, year;
	//std::cin >> day >> month >> year;
	//int daysInMonth = 0;
	//switch (month) {
	//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
	//		daysInMonth = 31;
	//		break;
	//	case 4: case 6: case 9: case 11:
	//		daysInMonth = 30;
	//		break;
	//	case 2:
	//		daysInMonth = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
	//		break;
	//}
	//if (month < 1 || month > 12 || day < 1 || day > daysInMonth) {
	//	std::cout << "Invalid date" << std::endl;
	//	return 0;
	//}
	//day++;
	//if (day > daysInMonth) {
	//	day = 1;
	//	month++;
	//	if (month > 12) {
	//		month = 1;
	//		year++;
	//	}
	//}
	//if (day<10)
	//{
	//	std::cout << "0" << day << ".";
	//}
	//else
	//{
	//	std::cout << day << ".";
	//}
	//if (month < 10)
	//{
	//	std::cout << "0" << month << ".";
	//}
	//else
	//{
	//	std::cout << month << ".";
	//}
	//std::cout << year << std::endl;

	return 0;
}

