#include <iostream>
#include <chrono>
// using namespace std;
using std::cout;
using std::endl;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    auto start = std::chrono::steady_clock::now();
    int result = fibonacci(42); // Calculate the 42nd Fibonacci number
    auto end = std::chrono::steady_clock::now();

    std::chrono::duration<double> sec = end - start;
    
    std::cout << "f(42) = " << result << '\n';
    std::cout << "elapsed time: " << sec.count() << "s\n";

    return 0;
}

// int main()
// {
// 	auto start = std::chrono::steady_clock::now();
// 	for(int i=0; i<100000;i++){}
// 	auto end = std::chrono::steady_clock::now();

// 	std::chrono::duration<double> sec = end-start;
// 	cout << "Elapsed time: " << sec.count() << "s\n";
// }