

#include <iostream>
using namespace std;

int main() {
    const int size = 20;
    char arr[size];
    
    cout << "Enter a sentence: ";
    cin.getline(arr, size);  // Use cin.getline() to read a line of input
    
    int countUpper = 0;
    int countLower = 0;
    int v1 = 0; 
    int v2 = 0; 
    int v3 = 0; 
    int v4 = 0; 
    int v5 = 0; 
    /*for (int i = 0; arr[i] != '\0'; i++) {
    if arr[i]=' ';
    {
    arr[i+1] = arr[i+1-32];
    }
    }*/
    
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            countUpper++;
        } else if (arr[i] >= 'a' && arr[i] <= 'z') {
            countLower++;
        }
        
       
        if(arr[i]=='a'){
v1++;}
else if(arr[i]=='e'){
v2++;}
else if(arr[i]=='i'){
v3++;}
else if(arr[i]=='o'){
v4++;}
else if(arr[i]=='u'){
v5++;}
    }
    
    cout << "Number of uppercase characters: " << countUpper << endl;
    cout << "Number of lowercase characters: " << countLower << endl;
    cout << "Frequency of 'a': " << v1 << endl;
    cout << "Frequency of 'e': " << v2 << endl;
    cout << "Frequency of 'i': " << v3 << endl;
    cout << "Frequency of 'o': " << v4 << endl;
    cout << "Frequency of 'u': " << v5 << endl;

    return 0;
}





