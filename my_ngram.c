// SPECIFICATIONS
// Write a program my_ngram; It will count the number of occurrences per character.

// My Ngram will take 1 or multiple strings as arguments.
// It will display, one per line, each character and the numbers of times it appears.
// Order will be alphanumerical.

#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 128

// void fill_array(int* array, int size_array, char* str){
//     int index = 0;
//     while(str[index] != '\0') {
//         array[str[index]] +=1;
//         //printf("%c <-> %d\n", str[index], str[index]);
//         index++;
//     }
// }

void fill_array(int* array, char* str){
    int index = 0;
    while(str[index] != '\0') {
        unsigned char char_index = (unsigned char)str[index];
        array[char_index] += 1;
        index++;
    }
}

void print_array(int* array, int size_array){
    int index = 0;

    while (index < size_array) {
        if(array[index] > 0){
            printf("%c:%d\n", index, array[index]);
        }
        
        index+=1;
    }
}
int main(int ac, char **av){
    int index = 1;
    int array[MAX_ARRAY_SIZE] = {0};
    while (index < ac) {
        fill_array(&array[0], av[index]);
        index+=1;
    }

    // while (index < ac) {
    //     fill_array(&array[0], MAX_ARRAY_SIZE, av[index]);
    //     index+=1;
    // }
    print_array(&array[0], MAX_ARRAY_SIZE);
    return EXIT_SUCCESS;
}