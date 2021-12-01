/* Program Objective: To calculate total number of subnets and total number of hosts given subnet mask (dotted decimal notation) as input by the user
Name of the Author: Nidhi Mehta
Date of First Creation: 22/10/2021
Date of Last Modification: 22/10/2021 */

/*Program 10: Write a Program to calculate total number of subnets and total number of hosts given subnet mask (dotted decimal notation) and class IP address as input by the user.
Input: 255.255.240.0
Output: No. of Subnets: 14
	    No. of Hosts: 4094
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
using namespace std;

string dToB(long int dec)
{
    string s = "";
    int temp[8] = {0};
    int i = 0;
    while (dec > 0)
    {
        temp[i] = dec % 2;
        dec /= 2;
        i++;
    }
    reverse(temp, temp + 8);

    for (int i = 0; i < 8; i++)
        s+=to_string(temp[i]);

    return s;
}

int numberOfOne(string s)
{
    int x = count(s.begin(), s.end(), '1');
    return x;
}

int numberOfZero(string s)
{
    int x = count(s.begin(), s.end(), '0');
    return x;
}

int main()
{
    string s;
    long int first, second, third, fourth;
    cout << "Enter the IP Address in Dotted Decimal Notation: " << endl;
    cout << "Enter First Octet: ";
    cin >> first;
    cout << "Enter Second Octet: ";
    cin >> second;
    cout << "Enter Third Octet: ";
    cin >> third;
    cout << "Enter Fourth Octet: ";
    cin >> fourth;

    string a = dToB(first);
    string b = dToB(second);
    string c = dToB(third);
    string d = dToB(fourth);

    int one, zero;
    if (first == 255)
    {
        if(second == 255)
        {
            if(third == 255)
            {
                one = numberOfOne(d);
                zero = 8 - one;
            }
            else
            {
                one = numberOfOne(c);
                zero = 16 - one;
            }
        }
        else
        {
            one = numberOfOne(b);
            zero = 24 - one;
        }
    }

    cout << "Number of subnets are: " << pow(2, one) << endl;
    cout << "Number of hosts are: " << (pow(2,zero) - 2);

    return 0;
}
