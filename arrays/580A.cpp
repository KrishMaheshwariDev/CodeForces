#include <vector>
#include <iostream>

int main(){
    int n;
    std::vector<int> array;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        array.push_back(num);
    }
    if(n == 1){
        std::cout << 1;
        return 0;
    }

    int longest = 0;
    int i = 0;
    int j = 0;
    int count = 1;
    for(int i = 1; i < array.size(); i++){
        if(array[i] >= array[i-1]){
            count++;
            longest = std::max(longest, count);
        }
        else{
            count = 1;
        }
    }
    std::cout << std::max(longest, count);
    return 0;
}