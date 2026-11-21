#include<iostream>
using namespace std;

int main()
{
    const int n = 20;
    char str[n];

    int upper = 0, lower = 0;
    int vowel[5] = {0}; // Initialize vowel array elements to zero
    
    cout << "Enter the sentence of (max 19 characters) : ";
    cin.get(str, n);

    // Loop until the end of string ('\0' character)
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            upper++;
        if (str[i] >= 97 && str[i] <= 122)
            lower++;

        if (str[i] == 'A' || str[i] == 'a')
            vowel[0]++;
        if (str[i] == 'E' || str[i] == 'e')
            vowel[1]++;
        if (str[i] == 'I' || str[i] == 'i')
            vowel[2]++;
        if (str[i] == 'O' || str[i] == 'o')
            vowel[3]++;
        if (str[i] == 'U' || str[i] == 'u')
            vowel[4]++;

        // Check if current character is a letter and the previous character is a space or the start of string
        if ((i == 0 || str[i - 1] == ' ') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] -= 32; // Convert to uppercase
    }

    cout << "Number of uppercase letters: " << upper << endl;
    cout << "Number of lowercase letters: " << lower << endl;

    cout << "Vowel frequency:" << endl;
    cout << "  a: " << vowel[0] << endl;
    cout << "  e: " << vowel[1] << endl;
    cout << "  i: " << vowel[2] << endl;
    cout << "  o: " << vowel[3] << endl;
    cout << "  u: " << vowel[4] << endl;

    cout << "Capitalized sentence: " << str << endl;

    return 0;
}
