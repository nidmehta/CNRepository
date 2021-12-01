/* Program Objective: To calculate total number of subnets and total number of hosts given subnet mask (dotted decimal notation) as input by the user
Name of the Author: Nidhi Mehta
Date of First Creation: 22/10/2021
Date of Last Modification: 22/10/2021 */

/*Program 10: Write a Program to calculate total number of subnets and total number of hosts given subnet mask (dotted decimal notation) and class IP address as input by the user.
Input: 255.255.240.0
Output: No. of Subnets: 14
	    No. of Hosts: 4094
*/

/*#include <bits/stdc++.h>
#include <sstream>
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
    std::stringstream ss;
    for (int i = 0; i < (sizeof bArr / sizeof bArr [0]); ++i)
        ss << bArr [i];
    int result;
    ss >> result;
    return result;
}

string convertIP(long int first, long int second, long int third, long int fourth)
{
    int f1, ss, tt, f4;
    cout << "\n IP Address in Dotted Decimal Notation: " << first << "." << second << "." << third << "." << fourth;
    if ((0 <= first && first <= 255) && (0 <= second && second <= 255) && (0 <= third && third <= 255) && (0 <= fourth && fourth <= 255))
    {
        //cout << "\n IP Address in Binary Notation: ";
        f1 = dToB(first);
        ss = dToB(second);
        tt = dToB(third);
        f4 = dToB(fourth);
    }
    else
    {
        cout << "\n Invalid Address ";
    }
    string sf1 = to_string(f1);
    string sss = to_string(ss);
    string stt = to_string(tt);
    string sf4 = to_string(f4);
    string str = sf1 + sss + stt + sf4;
    cout << "\n IP Address in Binary Notation: " << str;
    return str;
}

int main()
{
    char c;
    cout << "Enter the CLass IP Address: ";
    cin >> c;

    long int first, second, third, fourth;
    cout << "\n Enter the Subnet Mask in Dotted Decimal Notation: ";
    cout << "\n Enter First Octet: ";
    cin >> first;
    cout << "\n Enter Second Octet: ";
    cin >> second;
    cout << "\n Enter Third Octet: ";
    cin >> third;
    cout << "\n Enter Fourth Octet: ";
    cin >> fourth;

    string str = convertIP(first, second, third, fourth);

    int subnetBits = 0, hostBits = 0;
    for (int i = 0; i < 32; i++)
    {
        if (str[i] == 1)
            subnetBits += 1;
    }
    hostBits = 32 - subnetBits;

    int totalHosts = pow(2, hostBits) - 2;
    cout << "\n Total Hosts: " << totalHosts;

    int subnetIDBits = 0, totalSubnets = 0;
    if (c == 'A')
    {
        subnetIDBits = subnetBits - 8;
    }
    else if (c == 'B')
    {
        subnetIDBits = subnetBits - 16;
    }
    else if (c == 'C')
    {
        subnetIDBits = subnetBits - 24;
    }
    totalSubnets = pow(2, subnetIDBits);
    cout << "\n Total Subnets: " << totalSubnets;

    return 0;
}
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
