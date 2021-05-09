#include<stdio.h>

struct person_age{
    int age;

}person;
int main()
{
    int n,ano,mes,dia;
    scanf("%d",&person.age);
    ano=person.age/365;
    person.age=person.age%365;
    mes=person.age/30;
    person.age=person.age%30;
    dia=person.age;
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
    return 0;
}
