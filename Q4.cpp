#include <iostream>

class Example {
public:
    Example(int y = 10) : data(y) {
        count++; // Increment count when an object is created
    }

    int getIncrementedData() {
        return ++data; // Increment data before returning
    }

    static int getCount() {
        // You cannot access non-static member 'data' directly in a static function
        // You can only access static members or pass an object to access non-static members
        // As it's unclear what you intend to achieve with 'data' here, I'm commenting out this line
        // std::cout << "Data is " << data << std::endl;

        return count;
    }

private:
    int data;
    static int count;
};

// Initialize static member outside the class
int Example::count = 0;

int main() {
    Example obj1; // Default constructor with y = 10
    Example obj2(20); // Custom constructor with y = 20

    // Increment data and get count
    obj1.getIncrementedData();
    obj2.getIncrementedData();

    // Print count
    std::cout << "Count is " << Example::getCount() << std::endl;

    return 0;
}
