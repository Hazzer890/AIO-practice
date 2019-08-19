#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int N;
int squad_sizes[100005];
float squad_counter[100005];
float check;
int is_possible;
int write;

int main(void) {
    
    // Open the input and output files. 
    FILE *input_file = fopen("cavalryin.txt", "r");
    FILE *output_file = fopen("cavalryout.txt", "w");

    // Read the value of N from the input file.  
    fscanf(input_file, "%d", &N);

    // Read in information about each group size
    for (int i = 0; i < N; i++) {
        fscanf(input_file, "%d", &squad_sizes[i]);
    }

    for(int a = 0; a < 1000; a++){
        for(int i = 0; i < 100005; i++) {
            if (squad_sizes[i] == a){
                squad_counter[a]++;
            }
        }
    }

    for(int r = 0; r < 1000; r++){
        if(squad_counter[r] != 0 && r != 0){
            check = squad_counter[r]/r;
            if(abs(check-int(check))>0) is_possible = 0;
            else is_possible = 1;
            cout << check << "|" << is_possible;
        }
    }
    

    if (is_possible == 1) {
        fprintf(output_file, "YES\n");
    } else {
        fprintf(output_file, "NO\n");
    }

    fclose(input_file);
    fclose(output_file);

    return 0;
} 