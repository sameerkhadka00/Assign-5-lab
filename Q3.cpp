#include <iostream>
#include <vector>
#include <algorithm>

class Tensor {
public:
    Tensor(const std::vector<int>& input_vector) : vector_(input_vector) {}

    void sort() {
        std::sort(vector_.begin(), vector_.end());
        std::cout << "Sorted vector: ";
        for (const auto& element : vector_) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int> vector_;
};

int main() {
    // Example usage
    std::vector<int> input_vector = {5, 2, 8, 1, 3};
    Tensor tensor_instance(input_vector);
    tensor_instance.sort();

    return 0;
}
