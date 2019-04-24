/*
 * SurroundedGroups.cpp
 *
 *  Created on: Apr 12, 2019
 *      Author: Connor
 */

#include "SurroundedGroups.h"

/*void surroundedGroups(std::vector<std::vector<char> >& matrix){
    if(matrix.empty() || matrix[0].empty()){
        return;
    }
    std::vector<std::vector<bool> > isSafe;
    setToFalse(isSafe, matrix.size(), matrix[0].size());
    for(int j = 0; j < matrix.size(); j + matrix.size() - 1){
        for(int i = 0; i < matrix[0].size(); ++i){
            if(matrix[j][i] == 'O' && !isSafe[j][i]){
                setSafeGroup(matrix, isSafe, j, i);
            }
        }
    }

    for(int j = 0; j < matrix[0].size(); j + matrix[0].size() - 1){
        for(int i = 0; i < matrix.size(); ++i){
            if(matrix[i][j] == 'O' && !isSafe[i][j]){
                setSafeGroup(matrix, isSafe, i, j);
            }
        }
    }

    for(int i = 0; i < matrix.size(); ++i){
        for(int j = 0; j < matrix[0].size(); ++j){
            if(matrix[i][j] == 'O' && !isSafe[i][j]){
                matrix[i][j] = 'X';
            }
        }
    }
}


void setSafeGroup(std::vector<std::vector<char> > matrix, std::vector<std::vector<bool> >& isSafe, int row, int col){
    if(!oob(matrix, row, col) && matrix[row][col] == 'O' && !isSafe[row][col]){
        isSafe[row][col] = true;
        setSafeGroup(matrix, isSafe, row + 1, col);
        setSafeGroup(matrix, isSafe, row - 1, col);
        setSafeGroup(matrix, isSafe, row, col + 1);
        setSafeGroup(matrix, isSafe, row, col - 1);
    }
}*/



