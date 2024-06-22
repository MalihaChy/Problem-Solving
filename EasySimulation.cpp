#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    scanf("%c",&c);
    int val=c;
    if(val>=65 && val<=90){
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            printf("This is an Alphabet\nThe ascii code of %c is %d\nUppercase Vowel\n",c,val);
        else
            printf("This is an Alphabet\nThe ascii code of %c is %d\nUppercase Consonant\n",c,val);
        return 0;
    }
    if(val>=97 && val<=122){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            printf("This is an Alphabet\nThe ascii code of %c is %d\nLowercase Vowel\n",c,val);
        else
            printf("This is an Alphabet\nThe ascii code of %c is %d\nLowercase Consonant\n",c,val);
        return 0;
    }
    if(val>=48 && val<=57){
        if(c=='0' || c=='2' || c=='4' || c=='6' || c=='8')
            printf("This is a Digit\nThe ascii code of %c is %d\nEven\n",c,val);
        else
            printf("This is a Digit\nThe ascii code of %c is %d\nOdd\n",c,val);
        return 0;
    }

    if(val==38){
        printf("This is an Operator\nThe ascii code of %c is %d\nLogical\n",c,val);
        return 0;
    }

    if(val==42 || val==43 || val==45 || val==47){
        printf("This is an Operator\nThe ascii code of %c is %d\nArithmetic\n",c,val);
        return 0;
    }

    if(val==40){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nOpening First Bracket\n",c,val);
        return 0;
    }

    if(val==41){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nClosing First Bracket\n",c,val);
        return 0;
    }

    if(val==44){
        printf("This is a Separator\nThe ascii code of %c is %d\nComma\n",c,val);
        return 0;
    }

    if(val==46){
        printf("This is a Separator\nThe ascii code of %c is %d\nDot\n",c,val);
        return 0;
    }

    if(val>=60 && val<=62){
        printf("This is an Operator\nThe ascii code of %c is %d\nRelational\n",c,val);
        return 0;
    }

    if(val==58){
        printf("This is a Separator\nThe ascii code of %c is %d\nColon\n",c,val);
        return 0;
    }
    if(val==63){
        printf("This is a Separator\nThe ascii code of %c is %d\nQuestion\n",c,val);
        return 0;
    }

    if(val==124){
        printf("This is an Operator\nThe ascii code of %c is %d\nLogical\n",c,val);
        return 0;
    }

    if(val==123){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nOpening Second Bracket\n",c,val);
        return 0;
    }

    if(val==125){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nClosing Second Bracket\n",c,val);
        return 0;
    }

    if(val==91){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nOpening Third Bracket\n",c,val);
        return 0;
    }

    if(val==93){
        printf("This is a Parenthesis\nThe ascii code of %c is %d\nClosing Third Bracket\n",c,val);
        return 0;
    }


}
