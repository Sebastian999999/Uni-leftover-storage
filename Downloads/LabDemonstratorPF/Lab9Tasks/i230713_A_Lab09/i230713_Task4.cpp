#include <iostream>
using namespace std;

int main() 
{
    int upper_count = 0, lower_count = 0;
    char name[20];
    int a = 0, e = 0, i_count = 0, o = 0, u = 0;

    cout << "Enter a string : ";
    cin.getline(name, 20);

for (int i = 0; i<20 && name[i] != '\0'; i++) {
        if (name[i] >= 65 && name[i] <= 91)
            upper_count++;
        else if (name[i] >= 97 && name[i] <= 123)
            lower_count++;
    }
for (int i = 0; i<20 && name[i] != '\0'; i++) {
        switch (name[i]) {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i_count++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }
    for (int i = 0; i<20&& name[i]!='\0' ; i++)
    {
        if(name[i]==' ')
        name[i+1]=name[i+1]-32;
    }
    cout << "Upper Case = " << upper_count << endl;
    cout << "Lower Case = " << lower_count << endl;
    cout << "Number of a = " << a << endl;
    cout << "Number of e = " << e << endl;
    cout << "Number of i = " << i_count << endl;
    cout << "Number of o = " << o << endl;
    cout << "Number of u = " << u << endl;
    cout<<name;

    return 0;
}
