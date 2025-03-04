
typedef struct s_papa
{
    int     a;
    struct s_papa   *next;
}               t_papa;

int main()
{
    t_papa  n1;
    t_papa  n2;
    t_papa  n3;
    t_papa  n4;

    n1.a = 10;
    n2.a = 20;
    n3.a = 30;
    n4.a = 40;

    n1.next = &n2;
    n2.next = &n3;

    funcion(&n1);
    return (0);
}

int main()
{
    t_papa *n1;

    n1 = malloc(sizeof(t_papa));// 4 + 8 4 del iint y 8 del puntero
    n1->next = n2;
    while(n1->next)
        n1 =  n1->next;

    return (0);
}

typedef struct s_papa
{
    int     a;
    char    c;
}               t_papa;

int main()
{
    t_papa  hola;
    t_papa  *adios;

    adios = malloc(sizeof(t_papa));
    hola.a = 42;
    adios->a = 24;


    return (0);
}