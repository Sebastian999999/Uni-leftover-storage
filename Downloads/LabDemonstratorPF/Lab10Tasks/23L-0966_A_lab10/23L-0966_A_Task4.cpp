#include <iostream>
#include <cmath>
using namespace std;

const int DIM = 3; // Dimension of the space

// Function to calculate Euclidean distance between two points
double euclidean_Distance(double point1[DIM], double point2[DIM]) {
    double sum = 0.0;
    for (int i = 0; i < DIM; ++i) {
        sum += (point1[i] - point2[i]) * (point1[i] - point2[i]);
    }
    return sqrt(sum);
}

int main() {
    const int numPoints = 3; // Number of points
    double space[numPoints][DIM]; // 3-dimensional array to represent points in space

    // Initialize points
    cout << "Enter coordinates for " << numPoints << " points:" <<endl;
    for (int i = 0; i < numPoints; ++i) {
        cout << "Point " << i + 1 << ": ";
        for (int j = 0; j < DIM; ++j) {
        cin >> space[i][j];
        }
    }

    // Calculate distance between each pair of points
    double totalDistance = 0;
    for (int i = 0; i < numPoints; ++i) {
        for (int j = i + 1; j < numPoints; ++j) {
            double distance = euclidean_Distance(space[i], space[j]);
            totalDistance += distance;
            std::cout << "Distance between Point " << i + 1 << " and Point " << j + 1 << ": " << distance << endl;
        }
    }

    // Calculate the average distance
    double averageDistance = totalDistance / (numPoints * (numPoints - 1) / 2);
    cout << "Average distance between all pairs of points: " << averageDistance <<endl;

    return 0;
}
