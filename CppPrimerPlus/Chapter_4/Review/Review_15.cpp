#include <iostream>
#include <string>

struct Fish {
    std::string type;
    int weight;
    double size;
};

int main() {

    struct Fish *gold_fish = new struct Fish;

    gold_fish->type = "goldfish";
    (*gold_fish).weight = 20;
    gold_fish->size = 1.1811024;

    std::cout << "type: " << gold_fish->type << std::endl;
    std::cout << "weight: " << (*gold_fish).weight << std::endl;
    std::cout.precision(8);
    std::cout << "size: " <<  gold_fish->size << std::endl;

    delete gold_fish;

    
    return 0;
}