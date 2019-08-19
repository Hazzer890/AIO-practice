#include <cstdio>

/* N is the number of people standing in the line. */
int N;
/* K is the maximum number of people covered by the cloud. */
int K;
int distances_apart[100005];
int answer;

int main(void) {
    /* Open the input and output files. */
    FILE *input_file = fopen("cloudin.txt", "r");
    FILE *output_file = fopen("cloudout.txt", "w");

    /* Read the values of N and K from the input file.  */
    fscanf(input_file, "%d%d", &N, &K);

    /* Read in information about the distances between people */
    for (int i = 0; i < N-1; i++) {
        fscanf(input_file, "%d", &distances_apart[i]);
    }

    for (int i = 0; i < K; i++){
        
    }

    /* Write the answer to the output file. */
    fprintf(output_file, "%d\n", answer);

    /* Finally, close the input/output files. */
    fclose(input_file);
    fclose(output_file);

    return 0;
}
