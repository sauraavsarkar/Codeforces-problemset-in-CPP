#include <iostream>
#include <cmath>

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;
    
    // Calculate the number of flagstones needed along each dimension
    long long num_flagstones_n = (n + a - 1) / a;
    long long num_flagstones_m = (m + a - 1) / a;
    
    // The total number of flagstones is the product of the two
    long long total_flagstones = num_flagstones_n * num_flagstones_m;
    
    std::cout << total_flagstones << std::endl;
    
    return 0;
}
