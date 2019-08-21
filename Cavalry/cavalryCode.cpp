#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int N;
int squad_sizes[100005];
float squad_counter[100005];
float check;
int is_possible = 1;
int write;

int main(void) {
    FILE *input_file = fopen("cavalryin.txt", "r");
    FILE *output_file = fopen("cavalryout.txt", "w");
    fscanf(input_file, "%d", &N);
    for (int i = 1; i < N+1; i++) {
        fscanf(input_file, "%d", &squad_sizes[i]);
    }
    for(int a = 1; a < N+1; a++){
                squad_counter[squad_sizes[a]]++;
    }
    for(int a = 1; a < N+1; a++){
    if(squad_counter[a] != 0 && a != 0){
            check = squad_counter[a]/(a);
            if(abs(check-int(check))>0) is_possible = 0;
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