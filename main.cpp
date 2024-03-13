#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

std::list<int> mergeLists( std::vector<int>& vec, std::list<int>& lst) {
    std::list<int> result;

    std::list<int> vecToList(vec.begin(), vec.end());
  
    result.merge(vecToList);
    result.merge(lst);

   
    result.sort();
    result.unique();

    return result;
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::list<int> lst = {3, 4, 5, 6, 7};

   
    std::list<int> mergedList = mergeLists(vec, lst);
  
    std::cout << "Отсортированный список с уникальными элементами: ";
    for (const auto& el : mergedList) {
        std::cout << el << " ";
    }
    std::cout << std::endl;

    return 0;
}
