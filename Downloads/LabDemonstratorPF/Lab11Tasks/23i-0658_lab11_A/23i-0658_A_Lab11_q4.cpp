#include<iostream>
using namespace std;

// Function prototype
int quality_points(int average);

int main() {
    int avg;
   
    cout << "Enter student's average: ";
    cin >> avg;

    int points = quality_points(avg);
    cout << "Quality points: " << points << endl;

    return 0;
}

// Function definition
int quality_points(int average) 
{
    if (average >= 90 && average <= 100) 
    {
        return 4;
    } 
    else if (average >= 80 && average <= 89) 
    {
        return 3;
    } 
    else if (average >= 70 && average <= 79) 
    {
        return 2;
    } 
    else if (average >= 60 && average <= 69) 
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}

