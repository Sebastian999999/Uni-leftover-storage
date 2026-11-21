#include <iostream>
#include <cmath>
using namespace std;

int main()
{
// ARRAYS AND Their VALueSSSS
    int points[2][3][3] = {
        {{1, 2, 3},
         {4, 5, 6},
         {7, 8, 9}},

        {{2, 5, 3},
         {4, 5, 6},
         {7, 8, 5}}
    };

    					for (int set = 0; set < 2; ++set)
    {
        cout << "Set " << set + 1 << endl;
        double totalDistance = 0;

       					 for (int point1 = 0; point1 < 3; ++point1)
        {
         				   for (int point2 = point1 + 1; point2 < 3; ++point2)
            {
                int diffX = points[set][point1][0] - points[set][point2][0];
                int diffY = points[set][point1][1] - points[set][point2][1];
                int diffZ = points[set][point1][2] - points[set][point2][2];
                double distance = sqrt(pow(diffX, 2) + pow(diffY, 2) + pow(diffZ, 2));
                totalDistance += distance;
 // displaying distance between pointsss//
                cout << "Distance between Points " << point1 + 1 << " and " << point2 + 1 << " is: " << distance << endl;
            }
        }
      // displaying avergae distance by dividing it by 3
        cout << "Average distance for Set " << set + 1 << ": " << totalDistance / 3 << endl;
    }

    return 0;
}

