/* Program Objective: To generate LRC for given characters
Name of the Author: Nidhi Mehta
Date of First Creation: 17/09/2021
Date of Last Modification: 17/09/2021 */

/*Program 5: Write a program to display the class of the IP Address entered by the user.
Sample Input:
Enter the IP Address in Dotted Decimal Notation: 193.90.74.125
Enter the first octet: 193
Enter the second octet: 90
Enter the third octet: 74
Enter the fourth octet: 125
Sample Output: It is Class C address */

#include <iostream>
using namespace std;

void classIP(int first, int second, int third, int fourth)
{
    cout << "\n IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        if (0 <= first && first <= 127)
        {
            cout << "\n It is a Class A Address ";
        }
        else if (128 <= first && first <= 191)
        {
            cout << "\n It is a Class B Address ";
        }
        else if (192 <= first && first <= 223)
        {
            cout << "\n It is a Class C Address ";
        }
        else if (224 <= first && first <= 239)
        {
            cout << "\n It is a Class D Address ";
        }
        else if (240 <= first && first <= 255)
        {
            cout << "\n It is a Class E Address ";
        }
    }
    else
    {
        cout << "\n Invalid Address ";
    }
}
int main()
{
    int first, second, third, fourth;
    cout << "\n Enter the IP Address in Dotted Decimal Notation: ";
    cout << "\n Enter First Octet: ";
    cin >> first;
    cout << "\n Enter Second Octet: ";
    cin >> second;
    cout << "\n Enter Third Octet: ";
    cin >> third;
    cout << "\n Enter Fourth Octet: ";
    cin >> fourth;

    classIP(first, second, third, fourth);
    return 0;
}

