// Use for loops to construct a program that displays a pyramid of Xs on the screen. The pyramid should look like this
//		   x
//        xxx
//       xxxxx
//		xxxxxxx
//     xxxxxxxxx
// except that is should be 20 lines hight, instead of the 5 lines shown here. One way to do this
// is to nest two inner loops, one to print spaces and one to print Xs, inside an outer loop that steps down the screen from line to line.

#include <iostream>

int main()
{
    const int total_rows = 20;

    for (int i = 0; i < total_rows; ++i)
    {
        // 1. Print the leading spaces
        // Row 0 needs 19 spaces, Row 1 needs 18, etc.
        for (int j = 0; j < total_rows - i - 1; ++j)
        {
            std::cout << " ";
        }

        // 2. Print the 'x's
        // Row 0 needs 1 'x', Row 1 needs 3 'x's, Row 2 needs 5 'x's...
        // The formula for odd numbers is (2 * i) + 1
        for (int k = 0; k < (2 * i) + 1; ++k)
        {
            std::cout << "x";
        }

        // 3. Move to the next line
        std::cout << "\n";
    }

    return 0;
}
