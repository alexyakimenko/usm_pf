#include <iostream>

using namespace std;

int main() {
    int nums[25];
    int size;

    cin >> size;

    if (size > 25) throw overflow_error("size should not be greater than 25");

    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    { // Sign changes counter
        bool negative = nums[0] < 0;
        int total_changes = 0;

        for (int i = 1; i < size; i++) {
            if (negative == nums[i] < 0) continue;

            negative = !negative;
            total_changes++;
        }
        cout << "Sign changed ";
        cout << total_changes << " times" << endl;
    }

    { // Average of positive numbers
        int count = 0;
        int sum = 0;

        for (int i = 0; i < size; i++) {
            if (nums[i] <= 0) continue;

            sum += nums[i];
            count++;
        }
        
        double avg = (double) sum / count;
        cout << "Average of positive numbers: " << avg << endl;
    }
}