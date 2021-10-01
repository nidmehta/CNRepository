/* Program Objective: To find out the Class, Network Address and Broadcast Address of the IP address
Name of the Author: Nidhi Mehta
Date of First Creation: 01/10/2021
Date of Last Modification: 01/10/2021 */

/*Program 8: Write a program to find out the Class, Network Address and Broadcast Address of the IP address provided by the user
(in classful Addressing)
*/

#include <iostream>
using namespace std;

char classIP(int first, int second, int third, int fourth)
{
    char c = '\0';
    cout << "\n IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        if (0 <= first && first <= 127)
        {
            c = 'A';
            cout << "\n It is a Class A Address ";
        }
        else if (128 <= first && first <= 191)
        {
            c = 'B';
            cout << "\n It is a Class B Address ";
        }
        else if (192 <= first && first <= 223)
        {
            c = 'C';
            cout << "\n It is a Class C Address ";
        }
        else if (224 <= first && first <= 239)
        {
            c = 'D';
            cout << "\n It is a Class D Address ";
        }
        else if (240 <= first && first <= 255)
        {
            c = 'E';
            cout << "\n It is a Class E Address ";
        }
    }
    else
    {
        cout << "\n Invalid Address ";
    }
    return c;
}

void NetworkAndBroadcastAddress(long int first, long int second, long int third, long int fourth)
{
    char ch = classIP(first, second, third, fourth);
    if (ch == 'A')
    {
        cout << "\n Network Address: " << first << ".0.0.0";
        cout << "\n Broadcast Address: " << first << ".255.255.255";
    }
    else if (ch == 'B')
    {
        cout << "\n Network Address: " << first << "." << second << ".0.0";
        cout << "\n Broadcast Address: " << first << "." << second << ".255.255";
    }
    else if (ch == 'C')
    {
        cout << "\n Network Address: " << first << "." << second << "." << third << ".0";
        cout << "\n Broadcast Address: " << first << "." << second << "." << third << ".255";
    }
    else
    {
        cout << "\n Network Address: Not Applicable";
        cout << "\n Broadcast Address: Not Applicable";
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

    NetworkAndBroadcastAddress(first, second, third, fourth);

    return 0;
}


