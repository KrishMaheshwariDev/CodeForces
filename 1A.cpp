#include <iostream>

int main(){
    long long n, m, a;
    std::cin >> n >> m >> a;
    long long width;
    long long hight;
    if(m%a){
        width = (m/a) + 1;
    }
    else{
        width = m/a;
    }
    if(n%a){
        hight = (n/a) + 1;
    }
    else{
        hight = n/a;
    }
    long long result = width * hight;
    std::cout << result;
    return 0;
}