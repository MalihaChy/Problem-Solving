#include<bits/stdc++.h>
using namespace std;

int main()
{
    double mark;
    scanf("%lf",&mark);
    if(mark>=80)
        printf("Grade: A+\n");
    else{
        if(mark>=75)
            printf("Grade: A\n");
        else{
            if(mark>=70)
                printf("Grade: A-\n");
            else{
                if(mark>=65)
                    printf("Grade: B+\n");
                else{
                    if(mark>=60)
                        printf("Grade: B\n");
                    else{
                        if(mark>=55)
                            printf("Grade: B-\n");
                        else{
                            if(mark>=50)
                                printf("Grade: C+\n");
                            else{
                                if(mark>=45)
                                    printf("Grade: C\n");
                                else{
                                    if(mark>=40)
                                        printf("Grade: D\n");
                                    else{
                                        if(mark>=0)
                                            printf("Grade: F\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }


}
