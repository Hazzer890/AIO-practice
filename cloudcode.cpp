#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;


int N; //people 
int K; //max people covered
int distances_apart[100005];
int answer;

int C[100005];

int main(void) {
    FILE *input_file = fopen("cloudin.txt", "r");
    FILE *output_file = fopen("cloudout.txt", "w");

    fscanf(input_file, "%d%d", &N, &K);

    
    for (int i = 0; i < N-1; i++) {
        fscanf(input_file, "%d", &distances_apart[i]);
    }

    for (int i = 0; i < N-(K); i++){
        for (int r = 0; r < K; r++){
            C[i] = C[i] + distances_apart[r + i];
        }
        cout << C[i] << endl;
    }
    answer = C[0];
    for (int i = 0; i < N-(K); i++){
        if (answer > C[i]){
            answer = C[i];
        }
    }
    cout << "  " << answer << endl;
    
    fprintf(output_file, "%d\n", answer);
    fclose(input_file);
    fclose(output_file);

    return 0;
}
