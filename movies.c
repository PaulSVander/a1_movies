#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// struct for movie info
struct movie
{
    char *title;
    int *year;
    char *languages[5][10];
    float *rating;
    struct movie *next;
};

struct movie *createMovie(char *currLine)
{
    struct movie *currMovie = malloc(sizeof(struct student));

    char *saveptr;

    char *token = strtok_r(currLine, ",", &saveptr);
    currMovie->title = calloc(strlen(token) + 1, sizeof(char));
    strcpy(currMovie->title, token);

    token = strtok_r(NULL, ",", &saveptr);
    currMovie->year = atoi(token)

    token = strtok_r(NULL, ",", &saveptr);

    
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("You must provide the name of the file to process\n");
        printf("Example usage: ./students student_info1.txt\n");
        return EXIT_FAILURE;
    }
    struct movie *list = processFile(argv[1]);
    printMoviesList(list);
    return EXIT_SUCCESS;
} 