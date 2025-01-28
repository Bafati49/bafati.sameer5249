#include <iostream>
using namespace std;

class Mean {
private:
    double num1;
    double num2;

public:
    // Member function to assign values to num1 and num2
    void assign(double a, double b) {
        num1 = a;
        num2 = b;
    }

    // Member function to compute and display the mean of num1 and num2
    void display_mean() const {
        double mean = (num1 + num2) / 2.0;
        cout << "Mean of " << num1 << " and " << num2 << " is: " << mean << endl;
    }
};

int main() {
    // Create an instance of Mean
    Mean myMean;

    // Assign values to the Mean object
    myMean.assign(4.0, 8.0);

    // Display the mean of the assigned values
    myMean.display_mean();

    return 0;
}
