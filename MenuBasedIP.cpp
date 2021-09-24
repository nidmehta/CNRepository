/* Program Objective: To make a menu based IP
Name of the Author: Nidhi Mehta
Date of First Creation: 24/09/2021
Date of Last Modification: 24/09/2021 */

/*Program 7: Write a menu based program to
i) Convert Dotted Decimal Notation IP to Binary Notation IP
ii) Convert Binary Notation IP to Dotted Decimal Notation IP
iii) Display the class of the IP Address
*/

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

void convertIPB(long int first, long int second, long int third, long int fourth)
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

void convertIPD(long int first, long int second, long int third, long int fourth)
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
    int choice;
    long int first, second, third, fourth;
    cout << "";
    cout << "\n 1. Convert Dotted Decimal Notation IP to Binary Notation IP ";
    cout << "\n 2. Convert Binary Notation IP to Dotted Decimal Notation IP ";
    cout << "\n 3. Display the class of the IP Address ";
    cout << "\n 4. Exit ";
    cout << "\n Enter Your Choice (1 - 4): ";
    cin >> choice;

    switch(choice)
    {
        case 1:     cout << "\n To Convert Dotted Decimal Notation IP to Binary Notation IP ";
                    cout << "\n Enter the IP Address in Dotted Decimal Notation: ";
                    cout << "\n Enter First Octet: ";
                    cin >> first;
                    cout << "\n Enter Second Octet: ";
                    cin >> second;
                    cout << "\n Enter Third Octet: ";
                    cin >> third;
                    cout << "\n Enter Fourth Octet: ";
                    cin >> fourth;
                    convertIPB(first, second, third, fourth);
                    break;

        case 2:     cout << "\n To Convert Binary Notation IP to Dotted Decimal Notation IP ";
                    cout << "\n Enter the IP Address in Binary Notation: ";
                    cout << "\n Enter First Octet: ";
                    cin >> first;
                    cout << "\n Enter Second Octet: ";
                    cin >> second;
                    cout << "\n Enter Third Octet: ";
                    cin >> third;
                    cout << "\n Enter Fourth Octet: ";
                    cin >> fourth;
                    convertIPD(first, second, third, fourth);
                    break;

        case 3:     cout << "\n To Display the Class of the IP Address ";
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
                    break;

        case 4:     break;

        default:    cout << "\n Wrong Choice! ";
                    break;

    }

    return 0;
}
