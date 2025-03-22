#include <iostream> 
#include <vector> 

int main() {

    std::vector<double> vec(10, 3.1);

    for (std::vector<double>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << std::endl;
    }
    
    return 0;
}