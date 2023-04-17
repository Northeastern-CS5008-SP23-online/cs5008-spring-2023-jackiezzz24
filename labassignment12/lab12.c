//Jiaqi Zhao
//zhao.jiaqi2@northeastern.edu

#include<stdio.h>
#include<string.h>

int compression(char arr[], int n, char res[]){
    
    
    
    
    //insert your code here
    int i;
    if (n < 2) {
        for (i = 0; i < n; i++) {
            printf("%c, arr[i]");
        }
        return n;
    }
    
    //sprintf - convert int to char
    int j = 1;
    int count = 1;
    int index = 0; 
    char r[10];
    char curr = arr[0];
    while (j <= n) {
        if (arr[j] != curr) {
            res[index++] = curr;
            if (count != 1) {
                sprintf(r, "%d", count);
                for (i = 0; i < strlen(r); i++) {
                    res[index++] = r[i];
                }
            }
            count = 1;
        }
        else {
            count++;
        }
        curr = arr[j++];
    }
    count = 0;
    for (i = 0; i < index; i++) {
        printf("%c", res[i]);
        count += 1;
    }
    printf("\n");
    return count;
    
    
}
 
int main()
{
    char a[]="aaaaaaaaaaaaaabbbbcccd";
    char res[50];
    int r,n=strlen(a);//n is the size of input array
    r=compression(a,n,res);
    printf("length of the compressed string:%d\n",r);
    return 0;
}
