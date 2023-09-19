/* 

Hey visitor ! This is the code of mine that provide solution to one of the problem of codechef : 
Follow this link to the question :  https://www.codechef.com/AUG23D/problems/SPCHEF

concept is explained at the bottom.

*/


#include<stdio.h>
#include<stdlib.h>

int main(){
    int T,N,K,M;
    printf("\nEnter no of Test Cases : ");
    scanf("%d",&T);
    while(T--){
        printf("\n");
        for(int i=0;i<45;i++){
            printf("-");
        }
        printf("\n");
        printf("Enter the no of temples : ");
        scanf("%d",&N);
        printf("Enter the multiplication factor of river : ");
        scanf("%d",&K);
        printf("Enter the modulus : ");
        scanf("%d",&M);

        unsigned long long int x_coeff=1, a_coeff=0;

        while(N--){
            x_coeff *= K;
            a_coeff *= K;
            a_coeff += 1;
        }
        

        printf("%d %d\n\n",x_coeff,a_coeff);

        unsigned long long int offer,pluck;
        offer = x_coeff % M;
        pluck = a_coeff % M;


        printf("\nMinimum number of flower to pluck : %llu\n",pluck);
        printf("No of flower to offer at each temple : %llu",offer);
    }

    return 0;
}

/* 
----- CONCEPT ----- 

1. Lets us use second test case for understanding logic, similarly one can connect this to other test cases.
2. So, the input passed is 3 2 8 . that means chef will go to 3 temples, river had multiplication factor 2 and modulus is 8.
3. So, 3 times below tasks will be repeated.
4. i) firstly, let say chef has plucked 'x' flowers. then, with first river it will become 2x. and he will offer let say 'a' no 
        of flowers. then, equation becomes 2x-a.
   ii) When he will reach second river flower will become 2(2x-a) and after offering 'a' no of flower to temple two it will 
        become 2(2x-a)-a . that is 4x-3a.
   iii) similarly after the third river, he will have 2(4x-3a) flower and after offering 'a' no of flower, it will become 8x-7a but 
        he was supposed not to have any flower. so, the final equation is 8x-7a = 0.
5. So, our equation 8x = 7a will be balanced. when, x = 7 and a = 8. 
6. Now, since we have to print modulus. so, 8 % 8 = 0 is the no of offering. and 7 % 8 = 7 is the no of initial flower plucked.
7. In the code, we have used unsigned long long int because for last test case value will go beyond of smaller data type.
8. That's it.

*/