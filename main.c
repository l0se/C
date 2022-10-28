#include "base.h"
#define PIE 3.1415926
int global_var = 9;



int main(void) {
    system("cls");


    // printf("Hello World!"); // Prints "Hello World!" to the console



    // printf("Enter a number: ");
    // scanf("%d", &global_var);
    // printf("%d", global_var);



    // printf("%d %f %s", global_var, PIE, "Hello World!");




    // for (int i = 0; i < 10; i++) {
    //     fflush(stdin);
    //     scanf("%d", &global_var);
    //     printf("%d\n", global_var);   
    // }
    



    // for(int i=0, j=0; i<2, j<6; i++, j++)
    //     printf("%d %d\n", i, j);




    // char i =0;
    // for(i=0; i<-100 || i>=0; i++)
    //     printf("%d\n", i);



    // int i=1;
    // while(i++) {
    //     if(i%3==0) continue;
    //     printf("%d\n",i);
    //     if(i==50)
    //         break;
    // } 



    // int array[10], odd=0, even=0;
    // for(int i=0; i<10; i++)
    //     scanf("%d", &array[i]);
    // for(int i=0; i<10; i++) {
    //     if(array[i]%2) odd++;
    //     else even++;
    // }
    // printf("Odd: %d Even: %d", odd, even);



    // int darr[3][5];
    // for(int i=0; i<3; i++) {
    //     for(int j=0; j<5; j++) scanf("%d", &darr[i][j]);
    // }
    // for(int i=0; i<3; i++) {   
    //     for(int j=0; j<5; j++) printf("%d ", darr[i][j]);
    //     printf("\n");
    // }





    // int arr[2][3];
    // for(int i=0; i<2; i++) {
    //     for(int j=0; j<3; j++) scanf("%d", &arr[i][j]);
    // }




    // int rsum[2]={0}, csum[3]={0};
    // for(int i=0; i<2; i++) {
    //     for(int j=0; j<3; j++) {
    //         rsum[i] += arr[i][j];
    //         csum[j] += arr[i][j];
    //     }
    // }




    // for(int i=0; i<2; i++) printf("%d ", rsum[i]);
    // printf("\n");
    // for(int i=0; i<3; i++) printf("%d ", csum[i]);




    // char name[10];
    // // scanf("%s", name);
    // gets(name);
    // puts(name);



    // int a=7, *q = &a, **p=&q;
    // // q = 30;
    // printf("%d", **p);


    // int a = 1357;
    // char*b = &a;
    // for (int i = 0; i < 4; i++) printf("%d\t", *(b+i)); 
    


    // int a=9, b=7;
    // printf("%d %d\n", a, b);
    // printf("%d\n", rev(&a, &b));
    // printf("%d %d\n", a, b);


    // display(3, 4, add);
    // display(3, 4, sub);


    // int * p = (int *) malloc(5 * sizeof(int));
    // realloc(p, 10 * sizeof(int));
    // free(p);

    /*
    __DATE__, __TIME__, __FILE__, __LINE__, __STDC__
    */

   int choice;
    printf("Enter your choice add, sub, mul, div: ");
    scanf("%d", &choice);
    farr[choice](3, 4);



    return 0;
}