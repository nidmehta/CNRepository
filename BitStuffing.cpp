/* Program Objective: To bit stuff binary data
Name of the Author: Nidhi Mehta
Date of First Creation: 17/09/2021
Date of Last Modification: 17/09/2021 */

/* Program 3: Write a program to bit stuff the given binary data.
Algorithm for Bit−Stuffing
1. Start
2. Initialize the array for transmitted stream with the special bit pattern 0111 1110 which indicates the beginning of the frame.
3. Get the bit stream to be transmitted in to the array.
4. Check for five consecutive ones and if they occur, stuff a bit 0
5. Display the data transmitted as it appears on the data line after appending 0111 1110 at the End.
6. For de−stuffing, copy the transmitte
6. For de−stuffing, copy the transmitted data to another array after detecting the stuffed bits.
7. Display the received bit stream.
8. Stop
INPUT/OUTPUT:
Enter the bit string (space for each byte) 11111111 01111110 00111110
After stuffing: 01111110 111110111011111010001111100 01111110 */

#include <iostream>
#include <string>
using namespace std;

void bitStuffing(string str, string flag)
{
    int countOne = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            countOne++;
        else if (str[i] == '0')
            countOne = 0;
        else
        {
            str.erase(str.begin() + i);
            i--;
        }
        if (countOne == 5)
        {
            str.insert(i + 1, "0");
            countOne = 0;
        }
    }
    str = flag + ' ' + str + ' ' + flag;
    cout << str;
}

int main()
{
    string str;
    cout << "Enter a Bit String: ";
    getline(cin, str);

    string flag = "01111110";
    bitStuffing(str, flag);

    return 0;
}
