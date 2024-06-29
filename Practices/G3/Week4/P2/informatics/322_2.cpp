#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    double maxDist = 0;

    int max_x = 0, max_y = 0;
    
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        double dist = sqrt(x * x + y * y);
        if(maxDist < dist) {
            maxDist = dist;
            max_x = x;
            max_y = y;
        }
    }
    
    cout << max_x << " " << max_y << endl;
   
    return 0;
}