#include <iostream>
#include <string>

void bit(int* x, std::string str){
    if(str[0] == 'X'){
        if(str[1] == '+'){
            *x += 1;
        }
        else{
            *x -= 1;
        }
    }
    else{
        if(str[0] == '+'){
            *x += 1;
        }
        else{
            *x -= 1;
        }
    }
}

int main(){
    int tests, x = 0;
    std::cin >> tests;

    for(int i = 0; i < tests; i++){
            std::string program;
            std::cin >> program;
            // std::cout << program;
            bit(&x, program);
    }

    std::cout << x;
    return 0;
}