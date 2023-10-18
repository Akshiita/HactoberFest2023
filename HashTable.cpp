#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> hashMap = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    std::string name = "Bob";
    auto it = hashMap.find(name);

    if (it != hashMap.end()) {
        std::cout << name << "'s age is " << it->second << std::endl;
    } else {
        std::cout << name << " not found in the hash map." << std::endl;
    }

    return 0;
}
