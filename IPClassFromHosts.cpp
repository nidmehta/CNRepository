/* Program Objective: To suggest class IP address to adopt in order to perform networking using given number of hosts
Name of the Author: Nidhi Mehta
Date of First Creation: 01/10/2021
Date of Last Modification: 01/10/2021 */

/*Program 9: Write a program to suggest the user that which class IP address he/she can adopt in order to perform networking (using Classful Addressing)
Input: Number of Hosts
Output: Suggested IP address Class/ Classes.
*/

#include <bits/stdc++.h>
#include <math.h>
using namespace std;

void IPClass(long long int hosts)
{
    if(hosts <= (pow(2, 8) - 2))
       cout << "\n Suggested IP address Class/Classes: Class C ";
    else if(hosts <= (pow(2, 16) - 2))
        cout << "\n Suggested IP address Class/Classes: Class B ";
    else if(hosts <= (pow(2, 24) - 2))
        cout << "\n Suggested IP address Class/Classes: Class A ";
    else
        cout << "\n Invalid number of hosts ";
}

int main()
{
    long long int hosts;
    cout << "\n Enter Number of Hosts: ";
    cin >> hosts;

    IPClass(hosts);

    return 0;
}
