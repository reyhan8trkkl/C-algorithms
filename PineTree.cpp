#include<stdio.h>

int main() {

    /*Variables*/
    int rows, starNumber, spaceNumber;
    int rowCount, spaceCount, starCount, treeTrunkCount, treeTrunkSpaceCount;

    printf("Enter Rows:\n>");
    scanf("%d",&rows);

    for(rowCount = 1; rowCount <= rows; rowCount++) {
        starNumber = rowCount * 2 - 1;
        spaceNumber = rowCount + rows - starNumber;

        for(spaceCount = 0; spaceCount < spaceNumber; spaceCount++)
            printf(" ");

        for(starCount = 0; starCount < starNumber; starCount++)
            printf("%c",'*');

        printf("\n");
    }

    for(treeTrunkCount = 0; treeTrunkCount < 3; treeTrunkCount++) {
        for(treeTrunkSpaceCount = 0; treeTrunkSpaceCount < (rows * 2 + 1)/2; treeTrunkSpaceCount++)
            printf(" ");

        printf("%c\n",'*');
    }
}
