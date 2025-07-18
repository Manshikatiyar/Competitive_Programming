#include <iostream>
#include <cmath> // for abs

using namespace std;

int main() {
    int t;
    cin >> t; // Read number of melodies
    
    while (t--) {
        int n;
        cin >> n; // Read number of notes
        int melody[50]; // Declare an array with a maximum size of 50
        
        for (int i = 0; i < n; ++i) {
            cin >> melody[i]; // Read the notes
        }
        
        bool isPerfect = true; // Assume the melody is perfect
        for (int i = 1; i < n; ++i) {
            int interval = abs(melody[i] - melody[i - 1]);
            if (interval != 5 && interval != 7) {
                isPerfect = false; // Found an invalid interval
                break;
            }
        }
        
        cout << (isPerfect ? "YES" : "NO") << endl; // Output result
    }
    
    return 0;
}
