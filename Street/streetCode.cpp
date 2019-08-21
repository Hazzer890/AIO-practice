#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

int N; //chunks of land
float NN;
int K; //number of parks
float KK;
float calc;
int answer; 

int main(void){

    FILE *input_file = fopen("streetin.txt", "r");
    FILE *output_file = fopen("streetout.txt", "w");

    fscanf(input_file, "%d%d", &N, &K);
    
    NN = N;
    KK = K;

    if((NN-KK) != 0){
        calc = (NN-KK)/(KK+1);
        answer = ceil(calc);
    } else {
        answer = 0;
    }
    cout << NN/(NN-KK) << endl;
    fprintf(output_file, "%d\n", answer);

    fclose(input_file);
    fclose(output_file);
}