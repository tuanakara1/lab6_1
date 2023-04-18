#include <iostream>
using namespace std;

double series(int n, int k, double sum) {
    if (k == n+1) {
        return sum;
    }

    else {
        double term = pow(-1, k+1) / k;
        sum += term;
        return series(n, k+1, sum);
    }
}

int main() {

    int n;
    cout << "Enter value for n: ";
    cin >> n;

    double result = series(n, 1, 0);

    cout << "Sum of the series = " << result << endl;

    return 0;
}
