/* Program Objective: To convert IP address in Binary notation to Dotted Decimal Notation
Name of the Author: Nidhi Mehta
Date of First Creation: 24/09/2021
Date of Last Modification: 24/09/2021 */

/*Program 6: Write a program to convert IP address provided by the user in Binary notation to Dotted Decimal Notation entered by the user.
Sample Input:
Enter the IP Address in Dotted Decimal Notation:
Enter the Binary for first octet: 10001001
Enter the Binary for second octet: 01111011
Enter the Binary for third octet: 10000000
Enter the Binary for fourth octet: 11111011
Sample Output: The given IP address is: 137.123.128.251 */

#include <iostream>
using namespace std;

void bToD(long int bin)
{
    long int dec = 0;
    long int base = 1;
    while (bin > 0)
    {
        int lastDigit = bin % 10;
        bin /= 10;
        dec += lastDigit * base;
        base *= 2;
    }
    cout << dec;
}

void convertIP(long int first, long int second, long int third, long int fourth)
{
    cout << "\n IP Address in Binary Notation: " << first << " " << second << " " << third << " " << fourth;
    if ((00000000 <= first && first <= 11111111) && (00000000 <= second && second <= 11111111) && (00000000 <= third && third <= 11111111) && (00000000 <= fourth && fourth <= 11111111))
    {
        cout << "\n IP Address in Dotted Decimal Notation: ";
        bToD(first);
        cout << ".";
        bToD(second);
        cout << ".";
        bToD(third);
        cout << ".";
        bToD(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}
int main()
{
    long int first, second, third, fourth;
    cout << "\n Enter the IP Address in Binary Notation: ";
    cout << "\n Enter First Octet: ";
    cin >> first;
    cout << "\n Enter Second Octet: ";
    cin >> second;
    cout << "\n Enter Third Octet: ";
    cin >> third;
    cout << "\n Enter Fourth Octet: ";
    cin >> fourth;

    convertIP(first, second, third, fourth);
    return 0;
}


