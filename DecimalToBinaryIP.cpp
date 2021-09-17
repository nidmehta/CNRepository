/* Program Objective: To generate LRC for given characters
Name of the Author: Nidhi Mehta
Date of First Creation: 17/09/2021
Date of Last Modification: 17/09/2021 */

/*Program 4: Write a program to convert Dotted Decimal Notation IP to Binary Notation IP
Sample input by user:
Enter the IP in Dotted Decimal Notation:
Enter first octet: 126
Enter second octet: 7
Enter third octet: 89
Enter fourth octet: 76
You entered in Dotted Decimal Notation: 126.7.89.76
Sample output:
IP in Binary Decimal Notation:
01111110 00000111 01011001 01001100 */

#include <iostream>
#include <algorithm>
using namespace std;

int dToB(long int dec)
{
    int bArr[8] = {0};
    int i = 0;
    while (dec > 0)
    {
        bArr[i] = dec % 2;
        dec /= 2;
        i++;
    }

    int n = sizeof(bArr) / sizeof(bArr[0]);
    reverse(bArr, bArr + n);

    for(int i = 0; i < 8; i++)
    {
        cout << bArr[i];
    }
    cout << " ";
}

void convertIP(long int first, long int second, long int third, long int fourth)
{
    cout << "\n IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        cout << "\n IP Address in Binary Notation: ";
        dToB(first);
        dToB(second);
        dToB(third);
        dToB(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}
int main()
{
    long int first, second, third, fourth;
    cout << "\n Enter the IP Address in Dotted Decimal Notation: ";
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
