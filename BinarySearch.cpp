#include <iostream>
#include <vector>
long long BinarySearch(std::vector<long long>&array,long long target,long long startofarray,long long endofarray){
    

    while(startofarray<=endofarray){
        long long midofarray = startofarray+(endofarray-startofarray)/2;
        if(array[midofarray]==target){
            return midofarray;
        }else if(array[midofarray]<target){
            startofarray = midofarray+1;
        }else{
            endofarray = midofarray - 1;
        }

    }

    return -1;
}
int main(int argc,char** argv){
    std::cout << "Enter the number you would like to find:\n";
    long long target;
    std::cin >> target;
    std::cout << "\n";
    std::cout << "Enter the size of the Array/Vector:\n ";
    long long sizeofarray;
    std::cin >> sizeofarray;
    if(sizeofarray ==0){
        std::cout << "Sizeofarray should be more than 0";
        return -1;
    }
    std::cout << "\n";
    
    long long startofarray = 0,endofarray = sizeofarray-1;
    
    std::cout << "\n";
    std::cout << "Enter the values in the Array/Vector:\n ";
    std::vector<long long>array(sizeofarray);
    for(std::size_t input =0;input<array.size();input++){
        std::cin >> array[input];
    }

    std::cout << BinarySearch(array, target, startofarray, endofarray);
    return 0;
}