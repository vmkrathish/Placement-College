{\rtf1\ansi\ansicpg1252\cocoartf2870
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <stdio.h>\
\
int main() \{\
    \
    // Basic switch workout\
    \
    int c = 2;\
    switch(c)\{\
        case 1:\
            printf("The count is 01");\
            break;\
        case 2:\
            printf("The count is 02");\
            break;\
        case 3:\
            printf("The count is 03");\
            break;\
            \
        default:\
            printf("Reached default");\
    \}\
    printf("\\n\\n");\
    \
    //Find whether thee character was vowel or not\
    \
    printf("Enter the character: ");\
    char ch;\
    scanf("%c", &ch);\
    \
    switch(ch)\{\
        case 'a':\
            \
        case 'e':\
            \
        case 'i':\
            \
        case 'o':\
            \
        case 'u':\
            printf("It is a vowel character.");\
            break;\
            \
        default:\
            printf("It is a Constant character.");\
    \}\
    \
    \
    \
    //Find the week day's name\
    \
    printf("Enter the num(1-7): ");\
    int num;\
    scanf("%d", &num);\
    \
    switch(num)\{\
        \
        case 1:\
            printf("The day was Monday");\
            break;\
        case 2:\
            printf("The day was Tuesday");\
            break;\
        case 3:\
            printf("The day was Wednesday");\
            break;\
        case 4:\
            printf("The day was Thursday");\
            break;\
        case 5:\
            printf("The day was Friday");\
            break;\
        case 6:\
            printf("The day was Saturday");\
            break;\
        case 7:\
            printf("The day was Sunday");\
            break;\
            \
        default:\
            printf("Invalid Number");\
    \}\
    \
    \
    //Print whether the given num is multiple of 7 using switch case\
    \
    printf("Enter the num: ");\
    int n;\
    scanf("%d", &n);\
\
    switch(n % 7)\{\
        case 0:\
            printf("The number %d is a multiple of '7'\\n", n);\
            break;\
    \
            \
        default:\
            printf("The number %d is not a multiple of '7'\\n", n);\
    \}\
    printf("\\n\\n");\
    \
\
    \
    //area of sq, rec, cir, triangle\
    printf("Options\\n");\
    printf("1. Area of the Square\\n");\
    printf("2. Area of the Rectangle\\n");\
    printf("3. Area of the Circle\\n");\
    printf("4. Area of the Triangle\\n\\n");\
    \
    printf("Enter the choice: ");\
    int choice;\
    scanf("%d", &choice);\
    \
    switch(choice)\{\
        case 1:\
            int s;\
            printf("Enter the side of the Square: ");\
            scanf("%d", &s);\
            printf("Area of the Square: %d", s*s);\
            break;\
\
        case 2:\
            int l, b;\
            printf("Enter the Length of the Rectangle: ");\
            scanf("%d", &l);\
            printf("Enter the Breadth of the Rectangle: ");\
            scanf("%d", &b);\
            printf("Area of the Rectangle: %d", l*b);\
            break;\
        case 3:\
            int r;\
            printf("Enter the radius of the Circle: ");\
            scanf("%d", &r);\
            printf("Area of the Circle: %.2f", 3.14* r *r);\
            break;\
        case 4:\
            int B,h;\
            printf("Enter the breadth of the Triangle: ");\
            scanf("%d", &B);\
            printf("Enter the height of the Triangle: ");\
            scanf("%d", &h);\
            printf("Area of the Triangle: %.2f", 0.5*B*h);\
            break;            \
        default:\
            printf("Invalid Choice");\
    \}\
    printf("\\n\\n");\
    \
   \
    \
    //Greatest of Three numbers in switch case\
    printf("Enter 3 nos.: ");\
    int a1, a2, a3;\
    scanf("%d%d%d", &a1,&a2,&a3);\
    int res_a = (a1>a2) && (a1>a3);\
    switch(res_a)\{\
        case 1:\
            printf("'%d' is the greatest number.", a1);\
            break;\
        \
        default:\
            res_a = (a2>a3);\
            if (res_a)\{\
                printf("'%d' is the greatest number.", a2);\
            \}\
            else printf("'%d' is the greatest number.", a3);\
\
    \}\
    printf("\\n\\n");\
    \
    \
    \
    \
    \
    \
    \
\}}