#include <iostream>

int main() {
    int M, N;
    std::cin >> M >> N;
    
    // Calculate total number of squares on the board
    int total_squares = M * N;
    
    // Maximum number of dominoes that can be placed
    int max_dominoes = total_squares / 2;
    
    std::cout << max_dominoes << std::endl;
    
    return 0;
}
