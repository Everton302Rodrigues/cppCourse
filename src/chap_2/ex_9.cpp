// If you have two fractions, a/b and c/d their sum can  be obtained from the formula
// a/b + c/d = (a*d + b*c) / bd
// For example, 1/4 plus 2/3 is 
// 1/4 + 2/3 = (1*3 + 4*2) / (4*3) = (3 + 8) / 12 = 11/12
// Write a program that encourages the user to enter two fractions,  and then displays
// their sum in fractional form. (You don't need to reduce it to lowest terms.). The interaction with the user might look like this:
// Enter fist fraction: 1/2
	// Enter second fraction: 2/5
	// Sum = 9/10
// You can take advantage of the fact that the extraction operator (>>) can be chainet to read in more than one quantity at once:
// cin >> a >> dummychar >> b;


#include <iostream>

int main() {
  int a, b, c, d;
  char dummy;
  
  std::cout << "Enter first fraction: ";
  std::cin >> a >> dummy >> b;  // Lê: a / b
  
  std::cout << "Enter second fraction: ";
  std::cin >> c >> dummy >> d;  // Lê: c / d
  
  // Fórmula: a/b + c/d = (a*d + b*c) / (b*d)
  int numerador = a * d + b * c;
  int denominador = b * d;
  
  std::cout << "Sum = " << numerador << "/" << denominador << std::endl;
  
  return 0;
}