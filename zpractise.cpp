#include <cstddef>
#include <functional>
#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include <unordered_set>
 
using namespace std::literals;
 
namespace logger { bool enabled{false}; }
 

 
int main()
{
    std::unordered_set<int> example = { 1, 2, -10 };
 
    std::cout << "Simple comparison demo:\n" << std::boolalpha;
    if (auto search = example.find(2); search != example.end())
        std::cout << "Found " << *search << '\n';
        std::cout << "Found loc " << search << '\n';
        
    else
        std::cout << "Not found\n";
 
    std::unordered_set<std::string, string_hash, std::equal_to<>> set{"one"s, "two"s};
 
    logger::enabled = true;
    std::cout << "Heterogeneous lookup for unordered containers (transparent hashing):\n"
              << (set.find("one")   != set.end()) << '\n'
              << (set.find("one"s)  != set.end()) << '\n'
              << (set.find("one"sv) != set.end()) << '\n';
}