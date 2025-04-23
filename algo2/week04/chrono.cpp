#include<iostream>
#include<chrono>

int main(){

    auto start = std::chrono::high_resolution_clock().now();
    int sum = 0;
    for (int i = 0; i < 1000000; i++){
        sum+=i;
    }
    auto end = std::chrono::high_resolution_clock().now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;

    start = std::chrono::high_resolution_clock().now();
    sum = 0;
    for (int i = 0; i < 1000000; i++){
        sum+=i;
    }
    end = std::chrono::high_resolution_clock().now();
    elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;

}