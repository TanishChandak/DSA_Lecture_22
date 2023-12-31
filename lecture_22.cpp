#include <iostream>
#include <string>
using namespace std;
// Counting the maximum no of letter present in the string:
char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // Creating an array of count of character:
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // finding the maximum and minimum
    int maxi = -1;
    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
// to Lower case:
char toLowerCase(char name)
{
    if (name >= 'a' && name <= 'z')
    {
        return name;
    }
    else
    {
        char temp = name - 'A' + 'a';
        return temp;
    }
}
// Check Palindrome:
bool isPalindrome(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (toLowerCase(name[start]) != toLowerCase(name[end]))
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
// Reverse the string:
void reverse(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
// Find the length of the string:
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    // Creating an character array:
    char name[20];
    cout << "Enter your name: ";
    cin >> name; // Taking string as an input
    // name[2] = '\0'; // This is NULL character it will stop/end the string to print it full or half
    cout << "Your Name is: ";
    cout << name << endl; // Giving Out as an input

    // Finding Length:
    int len = getLength(name);
    cout << "Length of the string is: " << len << endl; // Give the length of the string

    // Reversed Function:
    reverse(name, len);
    cout << "Your Reversed Name is: ";
    cout << name << endl;

    // Checking Palindrome:
    cout << "Palindrome or not: " << isPalindrome(name, len) << endl;

    // to lower case:
    cout << "Character is to lower case: " << toLowerCase('C') << endl;

    // Counting the maximum no of letter is present in the string:
    // Creating an string:
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << "The maxi no of char is present is: " << getMaxOccCharacter(s);
}