struct Foo {
    int yo;
};

struct Foo lol[1] = {{ 1 }};

void test()
{
    lol[0].yo = 2;
}

// int test;
// int test;

// void foo()
// {
//     test = 1;
// }

// void foo(__builtin_va_list yo)
// {

// }

// struct s;
// typedef struct s al1;
// struct s;

// struct s
// {
//     int _flags;
// };

// void test(al1 *a, struct s *c)
// {
// }

// struct k;
// struct k foo(int);
// struct k {int l;};
// struct k foo(int a)
// {
//     struct k b;
//     b.l = a;
//     return b;
// }

// struct lol {
//     int lol;
// };

// typedef struct lol kek;

// void test(kek *lol)
// {
// }

// struct Struct
// {
//     int x;
// } no;

// struct Test
// {
//     int x;
// };

// struct Test
// {
//     int bar;
// };

// void foo(struct Test *t)
// {
// }

// struct Test
// {
//     void (*f)(int);
// };

// typedef struct {
//     struct T {} t;
//     int y;
// } StructTy;

// typedef struct SomeStruct TypedefName;

// void g(TypedefName *t, struct SomeStruct *s)
// {
// }

// struct SomeStruct
// {
//     int x;
// };

// void f(StructTy t)
// {
// }

// struct foo
// {
//     struct
//     {
//         int a;
//         int b;
//     } bar;
// };

// typedef struct EmptyStructTy EmptyStructTy;

// struct Foo
// {
//     long long (*bar)(int, char);
// };

// long long baz(int a, char b)
// {
//     return a + b;
// }

// void foo()
// {
//     struct Foo f;
//     f.bar = &baz;
//     f.bar(1, 'a');
// }

// int decl(int, int);

// extern int ext_decl(int, int);

// int test(int n)
// {
//     int ret_val;

//     switch (n)
//     {
//     case 3:
//     case 4:
//         ret_val = 1;
//         break;
//     case 5:
//     default:
//         ret_val = 0;
//         break;
//     }

//     return ret_val;
// }

// typedef enum EnumTy
// {
//     A,
//     B,
//     C
// }
// EnumTy;

// typedef struct StructTy
// {
//     int x;
//     int y;
// }
// StructTy;

// void f(EnumTy e, StructTy t)
// {
// }

// typedef struct Point {
//     int x;
//     int y;
// } Point;

// Point t = {1, 2};

// static int global;

// int add(int a, int b) {
//     return a + b + global;
// }

// struct Complex {
//     double re;
//     double im;
// };

// struct Complex Complex_add(struct Complex *c1, struct Complex *c2)
// {
//     struct Complex c;
//     c.re = c1->re + c2->re;
//     c.im = c1->im + c2->im;
//     return c;
// }

// struct Complex Complex_mul(struct Complex *c1, struct Complex *c2)
// {
//     struct Complex c;
//     c.re = c1->re * c2->re - c1->im * c2->im;
//     c.im = c1->re * c2->im + c1->im * c2->re;
//     return c;
// }

// int main() {
//     int a;
// }

// int global;

// char **global2;

// struct Point
// {
//     int x;
//     int ***y;
//     char testlollmao[3344];
//     char *grizzlybear[4][4];
// };

// void Point_set(struct Point *p, int x, int y)
// {
//     p->x = x;
//     p->y = y;
//     p->testlollmao[0] = 'a';
// }

// int Point_get_x(struct Point *p)
// {
//     return p->x;
// }

// int Point_get_y(struct Point *p)
// {
//     return p->y;
// }

// struct Point Point_add(struct Point *p1, struct Point *p2)
// {
//     struct Point p;
//     p.x = p1->x + p2->x;
//     p.y = p1->y + p2->y;
//     return p;
// }

// int add(int a, int b)
// {
//     return a + b;
// }

// char *offs(char *s, int off)
// {
//     return s + off;
// }

// char offs2(char s, int off)
// {
//     return s + off;
// }

// int order_of_operations(int a, int b, int c, int d)
// {
//     return (a + b) * c / d;
// }

// void types_are_fun_and_also_evil_what_the_heck_c()
// {
//     int a;
//     unsigned int b;
//     static const signed char const *c;
// }