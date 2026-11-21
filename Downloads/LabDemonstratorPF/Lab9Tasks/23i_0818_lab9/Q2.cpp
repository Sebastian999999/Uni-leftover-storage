#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Waleed";
    int count = 0;
    
    
    for(int i = 0; i < name.length(); ++i) {
        if(name[i] == 'a' || name[i] == 'A') {
            count++;
        }
    }
    
    cout << "The number of 'a's in the name \"" << name << "\" is: " << count << endl;
    
    return 0;
}

