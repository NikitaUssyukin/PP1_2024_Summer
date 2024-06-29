#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    double maxDist = 0;

    pair<int, int> max_coordinates = make_pair(0, 0);
    
    for(int i = 0; i < n; i++){
        pair<int, int> coordinates;
        cin >> coordinates.first >> coordinates.second;
        double dist = sqrt(coordinates.first * coordinates.first + coordinates.second * coordinates.second);
        if(maxDist < dist) {
            maxDist = dist;
            max_coordinates = coordinates;
        }
    }
    
    cout << max_coordinates.first << " " << max_coordinates.second << endl;
   
    return 0;
}