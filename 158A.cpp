#include <iostream>
#include <vector>

int main(){
    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr;
    for(int i = 0; i < n; i++){
        int num;
        std::cin >> num;
        arr.push_back(num);
    }

    int threshold = arr[k-1];
    int participants = 0;
    for(int i = n-1; i >= 0; i--){
        if(arr[i] > 0 && arr[i] >= threshold){
            participants = i+1;
            break;
        }
    }
    std::cout << participants;
    return 0;
}