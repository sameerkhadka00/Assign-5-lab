#include <iostream>
#include <vector>

// Function to reverse the elements of a vector
void rvrs(std::vector<int>& vct) {
    int left = 0;
    int right = vct.size() - 1;

    while (left < right) {
        // Swap elements at left and right indices
        std::swap(vct[left], vct[right]);
        left++;
        right--;
    }
}

int main() {
    // Example usage
    std::vector<int> myVector = {1, 2, 3, 4, 5};
    rvrs(myVector);

    // Print reversed vector
    std::cout << "Reversed vector: ";
    for (int num : myVector) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
