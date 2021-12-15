#include <iostream>
#include <vector>


void setZeroes(std::vector<std::vector<int>> &matrix, int n, int m) {
    std::vector<std::vector<int>> answer;
    for (int i = 0; i < n; i++) {
        std::vector<int> curr;
        for (int j = 0; j < m; j++) {
            curr.push_back(1);
        }
        answer.push_back(curr);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < m; k++) {
                    answer[i][k] = 0;
                }
                break;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[i][j] == 0) {
                for (int k = 0; k < n; k++) {
                    answer[k][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (answer[i][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
}
int main(){
    std::vector<std::vector<int>> matrix{{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    setZeroes(matrix, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << matrix[i][j]<<" ";
        }
        std::cout << "\n";
    }
    return 0;
}