#include <iostream>
#include <vector>

int LinearSearch(std::vector<long long>&data,long long target,long long sizeofarray){
    for(int index = 0;index<sizeofarray;index++){
        if(data[index]==target){
            return index;
        }else{
            std::cout << "Target Value not found!!! Womp Womp Womp";
        }
    }
    return -1;
}
int main(int argc,char** argv){
    std::cout << "Enter the value You want to search: \n";
    long long target{};
    std::cin >> target;
    std::cout << "Enter the size of Array/vector: \n";
    long long sizeofarray{};
    std::cin >> sizeofarray;
    if(sizeofarray ==0){
        std::cout << "Sizeofarray should be more than 0";
        return -1;
    }
    std::cout <<"\n";

    std::cout << "Enter the value in Array/Vector: ";
    std::vector<long long>array(sizeofarray);
    for(std::size_t input=0;input<sizeofarray;input++){
        std::cin >> array[input];
    }



    LinearSearch(array,target,sizeofarray);
    return 0;
}