//Jiaqi Zhao
//zhao.jiaqi2@northeastern.edu
//To perform insertion sort of integers stored in a file and display the output and store it in another file.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp, *fp1;
    int arr[10],temp;
    int count=0,i,j;/*count will have the total number of elements in the array*/
    /*read the file*/
    fp=fopen("Input.txt","r");
    if(fp==NULL){
        //if file returns NULL then can't open the file
        printf("\n Cannot open the file \n");
        exit(0);
    }
    
    //insert your code here
    printf("Integer in the input file:\n");
    while (fscanf(fp, "%d", &arr[count]) == 1) {
        printf("%d\n", arr[count]);
        count++;
    }

    for (i = 1; i < count; i++) {
        temp = arr[i];
        j = i -1;
        while (arr[j] > temp && j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }

    printf("Integer in the output file:\n");
    fp1 = fopen("sorted.txt", "w");
    if (fp1==NULL) {
        printf("\n Cannot open the file \n");
        exit(0);
    }
    for (i = 0; i < count; i++) {
        fprintf(fp1, "%d\n", arr[i]);
        printf("%d\n", arr[i]);
    }

    fclose(fp);
    fclose(fp1);
    
    return 0;
}
