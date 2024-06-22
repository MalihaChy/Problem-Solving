#include<bits/stdc++.h>
using namespace std;

int main()
{
    double a,b,c,d,e;
    cin>>a>>b>>c>>d;
    double avg=(a*2+b*3+c*4+d)/10.0;
    if(avg>=5.0&&avg<=6.9)
        cin>>e;
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0)
        cout<<"Aluno aprovado.\n";
    else
    {
        if(avg>=5.0)


        {
            cout<<"Aluno em exame.\n";
            printf("Nota do exame: %.1lf\n",e);
            avg=(avg+e)/2.0;
            if(avg>=5.0)
                cout<<"Aluno aprovado.\n";
            else
                cout<<"Aluno reprovado.\n";
            printf("Media final: %.1lf\n",avg);
        }
        else
            cout<<"Aluno reprovado.\n";
    }
}
