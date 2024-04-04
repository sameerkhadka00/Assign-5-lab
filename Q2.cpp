#include <iostream>
#include <vector>

void print_diagonal_values(const std::vector<std::vector<int>>& vals) {
    int rows = vals.size();
    int cols = (rows > 0) ? vals[0].size() : 0;

    for (int i = 0; i < std::min(rows, cols); ++i) {
        std::cout << vals[i][i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Example usage
    std::vector<std::vector<int>> my_matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Diagonal values: ";
    print_diagonal_values(my_matrix);

    return 0;
}
