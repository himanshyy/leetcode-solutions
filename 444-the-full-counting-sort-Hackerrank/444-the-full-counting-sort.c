#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'countSort' function below.
 *
 * The function accepts 2D_STRING_ARRAY arr as parameter.
 */


void countSort(int arr_rows, int arr_columns, char*** arr) {

    int max = 0;

    // Step 1: Find maximum key
    for(int i = 0; i < arr_rows; i++) {
        int x = atoi(arr[i][0]);

        if(x > max) {
            max = x;
        }
    }

    // Step 2: Create bucket array
    char ***bucket = malloc((max + 1) * sizeof(char **));

    // Frequency count
    int *count = calloc(max + 1, sizeof(int));

    // Position tracker
    int *pos = calloc(max + 1, sizeof(int));

    // Step 3: Count how many strings each bucket needs
    for(int i = 0; i < arr_rows; i++) {
        int x = atoi(arr[i][0]);
        count[x]++;
    }

    // Step 4: Allocate exact memory for each bucket
    for(int i = 0; i <= max; i++) {
        bucket[i] = malloc(count[i] * sizeof(char *));
    }

    // Step 5: Insert strings
    for(int i = 0; i < arr_rows; i++) {

        int x = atoi(arr[i][0]);

        if(i < arr_rows / 2) {
            bucket[x][pos[x]] = "-";
        }
        else {
            bucket[x][pos[x]] = arr[i][1];
        }

        pos[x]++;
    }

    // Step 6: Print sorted strings
    int first = 1;

    for(int i = 0; i <= max; i++) {
        for(int j = 0; j < count[i]; j++) {

            if(!first) {
                printf(" ");
            }

            printf("%s", bucket[i][j]);
            first = 0;
        }
    }

    printf("\n");

    // Step 7: Free memory
    for(int i = 0; i <= max; i++) {
        free(bucket[i]);
    }

    free(bucket);
    free(count);
    free(pos);
}


int main()
{
    int n = parse_int(ltrim(rtrim(readline())));

    char*** arr = malloc(n * sizeof(char**));

    for (int i = 0; i < n; i++) {
        *(arr + i) = malloc(2 * (sizeof(char*)));

        char** arr_item_temp = split_string(rtrim(readline()));

        for (int j = 0; j < 2; j++) {
            char* arr_item = *(arr_item_temp + j);

            *(*(arr + i) + j) = arr_item;
        }
    }

    countSort(n, 2, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
 


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna