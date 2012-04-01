//****************************
// Chris Engstrom            *
// Project Euler - Problem 6 *
//*******************************************************************
// Find the difference between the sum of the squares of the first  *
//  one hundred natural numbers and the square of the sum.          *
//*******************************************************************

#include <iostream>

using namespace std;

int main() {

    int maxNum = 100,
        sumOfSquares = 0,
        squareOfSum = 0;

    // Find the sum of squares
    for(int i = 1; i < (maxNum + 1); i++)
    {
        // Hold the sum of the numbers to use later
        squareOfSum += i;

        // Calculate the sum of the squares as we iterate
        sumOfSquares += (i *i);
    }

    // Find the square of the sum
    squareOfSum = (squareOfSum * squareOfSum);

    cout << "The difference between the sum of the squares and the square of the sum is: " << endl
         << squareOfSum - sumOfSquares << endl << endl;

    return 0;
}