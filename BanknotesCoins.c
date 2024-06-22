
#include<stdio.h>
#include<math.h>
int main()
{
     float N;
     int temp2;
     scanf("%f",&N);
     if(N>=0&&N<=1000000.00)
     {
         printf("NOTAS:\n");


    temp2= N/100;
    printf("%d nota(s) de R$ 100.00\n",temp2);
    N=N%100;
//    N= N-(temp2*100);
    temp2=N/50;
    printf("%d nota(s) de R$ 50.00\n",temp2);
    N=N%50;
//    N= N-(temp2*50);
    temp2=N/20;
    printf("%d nota(s) de R$ 20.00\n",temp2);
    N=N%20;
//    N= N-(temp2*20);
    temp2=N/10;
    printf("%d nota(s) de R$ 10.00\n",temp2);
    N=N%10;
//    N= N-(temp2*10);
    temp2=N/5;
    printf("%d nota(s) de R$ 5.00\n",temp2);
    N= N-(temp2*5);
    temp2=N/2;
    printf("%d nota(s) de R$ 2.00\n",temp2);
    N=N-(2*temp2);

    N=N*100;
    N=round(N);






    printf("MOEDAS:\n");

    temp2= N/100;
    printf("%d moeda(s)  de R$ 1.00\n",temp2);
    N= N-(temp2*100);
    temp2=N/50;
    printf("%d moeda(s)  de R$ 0.50\n",temp2);
    N= N-(temp2*50);
    temp2=N/25;
    printf("%d moeda(s)  de R$ 0.25\n",temp2);
    N= N-(temp2*25);
    temp2=N/10;
    printf("%d moeda(s)  de R$ 0.10\n",temp2);
    N= N-(temp2*10);
    temp2=N/5;
    printf("%d moeda(s)  de R$ 0.05\n",temp2);
    N= N-(temp2*5);
    temp2=N/1;
    printf("%d moeda(s)  de R$ 0.01\n",temp2);
 }




}

