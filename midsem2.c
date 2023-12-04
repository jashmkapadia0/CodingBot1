#include<stdio.h>
#include<string.h>

int main(){
    char arr[100],orgstr[100];
    printf("Enter the sring: ");
    gets(arr);
    strcpy(orgstr,arr);

    int n=strlen(arr);
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

    if(strcmp(arr,orgstr)==0)
        printf("String is palindrome");
    else
        printf("String is not palindrome");
    return 0;
}