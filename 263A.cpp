#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> mat;
    std::vector<int> row(5);
    for(int i = 0; i < 5; i++){
        std::cin >> row[0] >> row[1] >> row[2] >> row[3] >> row[4];
        mat.push_back(row);
    }
    //find the position of 1
    int ith, jth;
    bool founded = false;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(mat[i][j] == 1){
                ith = i;
                jth = j;
                founded = true;
                break;
            }
        }
        if(founded) break;
    }
    int step = 0;
    if(ith >= 2){
        step += ith - 2;
    }
    else{
        step += 2 - ith;
    }
    if(jth >= 2){
        step += jth - 2;
    }
    else{
        step += 2-jth;
    }
    std::cout << step;
    return 0;
}