/* Program Objective: To generate LRC for given characters
Name of the Author: Nidhi Mehta
Date of First Creation: 06/09/2021
Date of Last Modification: 06/09/2021 */

/* Program 1: Write a program to generate LRC for given Characters.
Input: Two Characters (Any Letter, digit or symbol) (ASCII value to binary)
(Generate binary (8 bits) according to the ASCII value)
Output: LRC with even/odd parity in 8 bits */

#include <iostream>
#include <algorithm>
using namespace std;

void LRC(int bArr1[], int bArr2[])
{
        int LRCArr[8] = {0};
        for(int i = 0;i < 8; i++)
        {
            if(bArr1[i] != bArr2[i])
                LRCArr[i] += 1;
        }

        cout << "\n LRC with even parity: ";
        for(int i = 0; i < 8; i++)
        {
            cout << LRCArr[i];
        }
}

int dToB(int dec1, int dec2)
{
    int bArr1[8] = {0};
    int bArr2[8] = {0};
    int i = 0;
    while (dec1 > 0)
    {
        bArr1[i] = dec1 % 2;
        dec1 /= 2;
        i++;
    }
    i = 0;
     while (dec2 > 0)
    {
        bArr2[i] = dec2 % 2;
        dec2 /= 2;
        i++;
    }

    int n1 = sizeof(bArr1) / sizeof(bArr1[0]);
    reverse(bArr1, bArr1 + n1);
    int n2 = sizeof(bArr2) / sizeof(bArr2[0]);
    reverse(bArr2, bArr2 + n2);

    cout << "\n Binary Forms: \n ";
    for(int i = 0; i < 8; i++)
    {
        cout << bArr1[i];
    }
    cout << "\n ";
    for(int i = 0; i < 8; i++)
    {
        cout << bArr1[i];
    }

    LRC(bArr1, bArr2);
}

int main()
{
    char ch1, ch2;
    cout << "\n Enter First Character: ";
    cin >> ch1;
    cout << "\n Enter Second Character: ";
    cin >> ch2;
    int temp1 = ch1;
    int temp2 = ch2;
    cout << "\n ASCII Value of " << ch1 << ": " << temp1;
    cout << "\n ASCII Value of " << ch2 << ": " << temp2;

    dToB(temp1, temp2);

    return 0;
}


