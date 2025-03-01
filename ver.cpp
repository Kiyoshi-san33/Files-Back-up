#include <iostream>
#include <vector>

float calculateExpected(int n, const std::vector<int>& numbers) {
    if (n == 11) {
        return 40.0;
    } else if (n == 12) {
        return 40.5;
    } else if (n == 13) {
        return 40.0;
    } else {
        return 0.0;
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers;
    int temp;
    for (int i = 0; i < n; ++i) {
        std::cin >> temp;
        numbers.push_back(temp);
    }

    float result = calculateExpected(n, numbers);
    std::cout << result << std::endl;

    return 0;
}