#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::string input;
    std::cin >> input;
    if(input == ""){
        std::cout << "";
        return 0;
    }
    if(input.size() == 1){
        std::cout << input;
        return 0;
    }
    std::vector<char> temp;
    
    for(int i = 0; i < input.size(); i = i+2){
        temp.push_back(input[i]);
    }
    std::sort(temp.begin(), temp.end());
    for(int i = 0; i < temp.size()-1; i++){
        std::cout << temp[i] << "+";
    }
    std::cout << temp[temp.size()-1];
    return 0;
}