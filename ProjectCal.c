#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.14

int main ()
{
    float addNnumbers(int x);
    float sub(float x, float y);
    float mulNnumbers(int x);
    float div(float x, float y);
    float sqr(float x);
    float cube(float x);
    float Ntopown(float x, float y);
    float sqrrt(float x);
    float cubicrt(float x);
    float nthrootofN(float x, float y);
    float disoftwopoints(float x1,float y1, float x2, float y2);
    float add(float x, float y);
    float circulareqn(float x1, float y1, float x2, float y2);
    float mult(float x, float y);
    float sqrtsofsqrs(float x, float y);
    float sine(float  x);
    float cosine(float x);
    float tangent(float x);
    float cosec (float x);
    float sec (float x);
    float cot (float x);
    float logten(float x);
    int binarytodecimal(int a);
    int decimaltobinary(int a);
    int binarytooctal(int a);
    int octaltobinary(int a);
    int binarytohexadecimal(int a);
    int hexadecimaltobinary(int a);
    int hexadecimaltodecimal(int a);
    int decimaltohexadecimal(int a);
    int decimaltooctal(int a);
    int octaltodecimal(int a);
    int octaltohexadecimal(int a);
    int hexadecimaltooctal(int a);
    float def(float a,float b);
    float dem(float a,float b);
    float dea(float a,float b);
    float dev(float a,float b,float c);
    float deu(float a,float b,float c);
    float deea(float a,float b,float c);
    float des(float a,float b,float c);
    float dees(float a,float b,float c);
    float deeu(float a,float b,float c);
    float deeea(float a,float b,float c);
    float det(float a,float b,float c);
    float feettocm(float a);
    float cmtofeet(float a);
    float ktocelsius(float a);
    float poundtokg(float a);
    float inchtometer(float a);
    float acretodecimal(float a);
    float katthatoacre(float a);
    float miletokm(float a);
    float celsiustok(float a);
    float kgtopound(float a);
    float metertoinch(float a);
    float kmtomile(float a);
    float decimaltoacre(float a);
    float acretokattha(float a);
    float usdtobdt(float a);
    float audtobdt(float a);
    float nzdtobdt(float a);
    float gbptobdt(float a);
    float rstobdt(float a);
    float eurotobdt(float a);
    float deees(float a,float b);
    float deev(float a,float b);
    float deet(float a,float b);
    float deeev(float a,float b,float c);
    float deeeu(float a,float b,float c);
    float deaa(float a,float b,float c);
    float dett(float a,float b,float c);
    float dept(float a);
    float dvv(float a,float b);
    float dff(float a,float b);
    float dlamda(float a,float b);
    int hcf(int x, int y);
    int lcm(int x,int y);
    void read_arr(int a[10][10],int row,int col);
    void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col);
    void print_arr(int m[10][10],int row,int col);

    int bn,dn,on,hn;
    int n,x;
    float value,sum,mul, n1,n2,n3,n4,p,q;
    int m1[10][10],m2[10][10],m3[10][10],row,col;


    printf("                       ***Project Calculator*** \n\n");

MainMenu:
    printf("Things you can do : \n\n");
    printf("    1. Basic Calculation \n");
    printf("    2. Geometric Calculation \n");
    printf("    3. Mensural Calculation \n");
    printf("    4. Trigonometric Calculation \n");
    printf("    5. Calculation for physics \n");
    printf("    6. Additional Calculation \n");
    printf("    7. Unit converters \n");
    printf("    8. Number systems \n");


    printf(" \nEnter your choice : ");
    scanf("%d", &n);
    switch(n)
    {
    case 1:
 Menu1 :
        printf("\n\n\nEnter Your Choice: \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Square \n");
        printf("6. Cube\n");
        printf("7. nth power on N \n");
        printf("8. Square root\n");
        printf("9. Cubic root\n");
        printf("10. nth root of a Number\n");
        printf("\npress 0 to go back to main menu\n");
        scanf("%d",&n);
        switch(n)
        {
        case 1:

Add:

            printf("Enter the number of integers you want to add\n");
            scanf("%d", &n);
            printf("Enter %d integers\n",n);
            sum=addNnumbers(n);
            printf("Sum of entered integers = %f\n",sum);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Add;
            }
            else
                exit(0);
        case 2:
Sub:            printf("Enter Two numbers: ");
            scanf("%f %f", &n1, &n2);
            sum= sub(n1, n2);
            printf("Subtraction result : %.02f", sum);
            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Sub;
            }
            else
                exit(0);
        case 3:
Mul:            printf("Enter the number of integers you want to Multiply\n");
            scanf("%d", &n);
            mul=mulNnumbers(n);
            printf("Multiplication of entered numbers = %.03f\n",mul);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");//Calling back previous steps
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Mul;
            }
            else
                exit(0);
        case 4:
Div:            printf("Enter N1/N2: ");
            scanf("%f %f", &n1, &n2);
            sum=div(n1,n2);
            printf("Result: %.02f", sum);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Div;
            }
            else
                exit(0);
        case 5:
Sqr:            printf("Enter the integer: ");
            scanf("%d",&n);
            sum=sqr((float)n);
            printf("%.0f",sum );

           printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Sqr;
            }
            else
                exit(0);
        case 6:
Cube:            printf("Enter the integer: ");
            scanf("%d",&n);
            sum=cube((float)n);
            printf("%.0f",sum );

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Cube;
            }
            else
                exit(0);
        case 7:
NPow:            printf("Enter N^n : ");
            scanf("%f %f", &n1, &n2);
            sum=Ntopown(n1,n2);
            printf("%.0f",sum);

           printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto NPow;
            }
            else
                exit(0);
        case 8:
SQRT:            printf("Enter an integer: ");
            scanf("%d",&n1);
            sum=sqrrt(n1);
            printf("%.02f",sum);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto SQRT;
            }
            else
                exit(0);

        case 9:
Cubrt:            printf("Enter an integer: ");
            scanf("%f",&n1);
            sum= cubicrt(n1);
            printf("%.0f",sum);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Cubrt;
            }
            else
                exit(0);

        case 10:
Nrton:            printf("Enter The number and the cubic n: ");
            scanf("%f %f", &n1, &n2);
            sum= nthrootofN(n1,n2);
            printf("%.0f", sum);

            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
            scanf("%d",&n);
            if(n==0)
            {goto MainMenu;}
            else if (n==1)
            {goto Menu1;}
            else if(n==2)
            {
               goto Nrton;
            }
            else
                exit(0);
        case 0:
            goto MainMenu;

         }
         break;
    case 2:
Menu2:
            printf("1. Distance between two points(x1,y1 and x2,y2)\n");
            printf("2. Slope of a Line Given Two End Points\n");
            printf("3. Distance from the main point to (x1,y1)\n");
            printf("4. Co-ordintes of the middle point of a line that connects two points\n");
            printf("5. Equation of straight Line\n");
            printf("6. Radius of a circle having center (h,k)\n");
            printf("7. Eccentricity of an ellipse\n");
            printf("8. Eccentricity of a Hyperbola\n");
            printf("\n\n Press 0 to go to Main Menu:");

            printf("\nEnter your choice: ");
            scanf("%d",&n);
                switch(n)
                {
            case 1:
DBT:
                printf("Enter x1: ");
                scanf("%f",&n1);
                printf("Enter y1: ");
                scanf("%f",&n2);
                printf("Enter x2: ");
                scanf("%f",&n3);
                printf("Enter y2: ");
                scanf("%f",&n4);
                sum= disoftwopoints(n1,n2,n3,n4);
                printf("Distance: %f\n ", sum);

                                printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                    scanf("%d",&n);
                                if(n==0)
                                {goto MainMenu;}
                                else if (n==1)
                                {goto Menu2;}
                                else if(n==2)
                                {
                                goto DBT;
                                }
                            else
                exit(0);
            case 2:
SlpLn:
                printf("Enter x1: ");
                scanf("%f",&n1);
                printf("Enter y1: ");
                scanf("%f",&n2);
                printf("Enter x2: ");
                scanf("%f",&n3);
                printf("Enter y2: ");
                scanf("%f",&n4);
                sum=div(sub(n4,n2),sub(n3,n1));
                printf("Slope, m :%.02f", sum);
                                           printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                            scanf("%d",&n);
                                            if(n==0)
                                            {goto MainMenu;}
                                            else if (n==1)
                                            {goto Menu2;}
                                            else if(n==2)
                                            {
                                            goto SlpLn;
                                            }
                                            else
                                            exit(0);


            case 3:
DMP:
                printf("Enter x and y");
                scanf("%f %f",&n1,&n2);
                sum=sqrt(sqr(n1)+sqr(n2));
                printf("Distance: %f",sum);
                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                        scanf("%d",&n);
                                        if(n==0)
                                        {goto MainMenu;}
                                        else if (n==1)
                                        {goto Menu1;}
                                        else if(n==2)
                                        {
                                           goto Add;
                                        }
                                        else
                                            exit(0);

            case 4:
Cord:
                printf("Enter x1: ");
                scanf("%f",&n1);
                printf("Enter x2: ");
                scanf("%f",&n2);
                printf("Enter x3: ");
                scanf("%f",&n3);
                printf("Enter x4: ");
                scanf("%f",&n4);
                p=(add(n1,n2)/2);
                q=(add(n3,n4)/2);
                printf("X= %.02f, Y= %.02f", p,q);

                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                            scanf("%d",&n);
                                            if(n==0)
                                            {goto MainMenu;}
                                            else if (n==1)
                                            {goto Menu2;}
                                            else if(n==2)
                                            {
                                            goto Cord;
                                            }
                                            else
                                            exit(0);
            case 5:
Strtln:
                printf("What value do you need to find out?\n Press 1 for Slope(m) \n press 2 for the Y Intercept(C)\n press 3 for 'x' \n press 4 for 'y'");
                scanf("%d",&n);
                    switch(n)
                    {
                case 1:
                    printf(" Enter the value of 'x'");
                    scanf("%f",&n1);
                    printf(" Enter the value of 'y'");
                    scanf("%f",&n2);
                    printf(" Enter the value of 'C'");
                    scanf("%f",&n3);
                    sum= sub(n2,n3)/n1;
                    printf("Ans: %f",sum);
                                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                    scanf("%d",&n);
                                                    if(n==0)
                                                    {goto MainMenu;}
                                                    else if (n==1)
                                                    {goto Menu2;}
                                                    else if(n==2)
                                                    {
                                                       goto Strtln;
                                                    }
                                                    else
                                                        exit(0);

                case 2:
                    printf(" Enter the value of 'x': ");
                    scanf("%f",&n1);
                    printf(" Enter the value of 'y': ");
                    scanf("%f",&n2);
                    printf(" Enter the value of 'm': ");
                    scanf("%f",&n3);
                    sum=sub(n2,(n3*n1));
                    printf("Ans: %.02f", sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                                    scanf("%d",&n);
                                                                    if(n==0)
                                                                    {goto MainMenu;}
                                                                    else if (n==1)
                                                                    {goto Menu2;}
                                                                    else if(n==2)
                                                                    {
                                                                       goto Strtln;
                                                                    }
                                                                    else
                                                                        exit(0);
                case 3:
                    printf(" Enter the value of 'y': ");
                    scanf("%f",&n2);
                    printf(" Enter the value of 'C': ");
                    scanf("%f",&n4);
                    printf(" Enter the value of 'm': ");
                    scanf("%f",&n3);
                    sum=(sub(n2,n4))/2;
                    printf("Ans: %.02f",sum);
                                                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                                    scanf("%d",&n);
                                                                    if(n==0)
                                                                    {goto MainMenu;}
                                                                    else if (n==1)
                                                                    {goto Menu2;}
                                                                    else if(n==2)
                                                                    {
                                                                       goto Strtln;
                                                                    }
                                                                    else
                                                                        exit(0);
                case 4:
                    printf(" Enter the value of 'm': ");
                    scanf("%f",&n3);
                    printf(" Enter the value of 'x': ");
                    scanf("%f",&n1);
                    printf(" Enter the value of 'c': ");
                    scanf("%f",&n4);
                    sum=add((n3*n1),n4);
                    printf("%.02f", sum);
                                                                printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                        scanf("%d",&n);
                                                        if(n==0)
                                                        {goto MainMenu;}
                                                        else if (n==1)
                                                        {goto Menu2;}
                                                        else if(n==2)
                                                        {
                                                           goto Strtln;
                                                        }
                                                        else
                                                            exit(0);
                }
            case 6:
Crcl:
                printf("Enter The value of X: ");
                scanf("%f",&n1);
                printf("Enter The value of Y: ");
                scanf("%f",&n2);
                printf("Enter The value of h: ");
                scanf("%f",&n3);
                printf("Enter The value of k: ");
                scanf("%f",&n4);
                sum= circulareqn(n1,n2,n3,n4);
                printf("%f",sum);

                                                                printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                            scanf("%d",&n);
                                                            if(n==0)
                                                            {goto MainMenu;}
                                                            else if (n==1)
                                                            {goto Menu2;}
                                                            else if(n==2)
                                                            {
                                                               goto Crcl;
                                                            }
                                                            else
                                                                exit(0);


            case 7:
Ecc:                printf("Enter the value of 'a' and 'b'");
                scanf("%f %f", &n1, &n2);
                sum=sqrt(div(sub(sqr(n1),sqr(n2)),sqr(n1)));
                printf("Eccentricity: %.02f", sum);

                                                                printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                                scanf("%d",&n);
                                                                if(n==0)
                                                                {goto MainMenu;}
                                                                else if (n==1)
                                                                {goto Menu2;}
                                                                else if(n==2)
                                                                {
                                                                   goto Ecc;
                                                                }
                                                                else
                                                                    exit(0);
            case 8:
Ecce:                printf("Enter the value of 'a' and 'b'");
                scanf("%f %f", &n1, &n2);
                sum=sqrt(div(add(sqr(n1),sqr(n2)),sqr(n1)));
                printf("Eccentricity: %.02f", sum);

                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                                    scanf("%d",&n);
                                                    if(n==0)
                                                    {goto MainMenu;}
                                                    else if (n==1)
                                                    {goto Menu2;}
                                                    else if(n==2)
                                                    {
                                                       goto Ecce;
                                                    }
                                                    else
                                                        exit(0);


            case 0:
                goto MainMenu;
            } break;



     case 3:
Menu3:
        printf("1. Area, Diagonal and Perimeter of a Square\n");
        printf("2. Area, Diagonal and Perimeter of a Rectangle\n");
        printf("3. Area and perimeter of a Triangle\n");
        printf("4. Solving triangles using pythagorean theorem\n");
        printf("5. Circumference and Area of a circle\n");
        printf("6. Volume of a Cylinder\n");
        printf("7. Surface area of a Cylinder\n");
        printf("8. Volume and area of surface of a Sphere\n");
        printf("9.Area of a Parallelogram\n");
        printf("\n Enter your choice: ");
        printf("\n\n Press 0 to go to Main Menu:");
        scanf ("%d", &n);
        switch(n)
        {
        case 1:
ADPS:
            printf("Enter the length of a side of the square");
            scanf("%f", &n1);
            sum=sqr(n1);
            value=mult(sqrt(2),n1);
            mul=mult(4,n1);
            printf(" Area of the square: %.02f\n Diagonal of the square: %.02f \n Perimeter of the square: %.02f", sum, value, mul);

                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto ADPS;
                            }
                            else
                                exit(0);
        case 2:
ADPR:
            printf("Enter the length and width of the rectangle ");
            scanf("%f %f", &n1,&n2);
            sum=mult(n1,n2);
            value=sqrt(add(sqr(n1),sqr(n2)));
            mul=mult(2,add(n1,n2));
            printf(" Area of the Rectangle: %.02f\n Diagonal of the Rectangle: %.02f \n Perimeter of the Rectangle: %.02f", sum, value, mul);
                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                                    scanf("%d",&n);
                                    if(n==0)
                                    {goto MainMenu;}
                                    else if (n==1)
                                    {goto Menu3;}
                                    else if(n==2)
                                    {
                                       goto ADPR;
                                    }
                                    else
                                        exit(0);
        case 3:
APT:
          printf("Enter the lengths(Base, Hight, side accordingly) of the sides of the triangle ");
          scanf(" %f %f %f", &n1,&n2,&n3);
          sum= mult(0.5,mult(n1,n2));
          mul=add(n1,add(n2,n3));
          printf(" Area of the triangle: %.02f\n Perimeter of the triangle: %.02f", sum, mul);
                                      printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto APT;
                            }
                            else
                                exit(0);


        case 4:
Pyth:
            printf("which value do you need to determine?\n\n");
            printf("Enter '1' to determine 'a'\n");
            printf("Enter '2' to determine 'b'\n");
            printf("Enter '3' to determine 'c'\n");
            scanf("%d", &n);
            switch(n)
            {
            case 1:
                printf("Enter values of 'b' and 'c'\n");
                scanf("%f %f", &n1, &n2);
                if (n2>n1)
                {
                   sum=sqrtsofsqrs(n2,n1);
                   printf("a= %.2f",sum);
                }
                else
                {
                    printf("Wrong Input!!!");
                }

                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto Pyth;
                            }
                            else
                                exit(0);

            case 2:
                printf("Enter values of 'a' and 'c'\n");
                scanf("%f %f", &n1, &n2);
                if (n2>n1)
                {
                   sum=sqrtsofsqrs(n2,n1);
                   printf("b= %.2f",sum);
                }
                else
                {
                    printf("Wrong Input!!!");
                }
                                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto Pyth;
                            }
                            else
                                exit(0);
            case 3:
                printf("Enter values of 'a' and 'b'\n");
                scanf("%f %f", &n1, &n2);
                sum=sqrt(add(sqr(n1),sqr(n2)));
                printf("C=%.2f", sum);
                                                            printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto Pyth;
                            }
                            else
                                exit(0);

            }
        case 5:
ACC:
            printf("\nEnter the radius of the circle: ");
            scanf("%f", &n1);
            sum =mult(PI,sqr(n1));
            printf("\nArea of circle : %.2f ", sum);

            value = mult(2,mult(PI,n1));
            printf("\nCircumference : %.2f ", value);
                                                       printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto ACC;
                            }
                            else
                                exit(0);
        case 6:
VoC:            printf("Enter the radius and height of the cylinder\n");
            scanf("%f %f", &n1,&n2);
            sum=PI*(mult(sqr(n1),n2));
            printf("Volume: %.2f", sum);
                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto VoC;
                            }
                            else
                                exit(0);
        case 7:
SAC:            printf("Enter the radius and height of the cylinder\n");
            scanf("%f %f", &n1,&n2);
            sum= add(n1,n2);
            value= mult(mult(2,PI),mult(n1,sum));
            printf("Surface area: %.2f", value);
                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto SAC;
                            }
                            else
                                exit(0);
        case 8:
SVS:
            printf("Enter radius of the sphere : ");
            scanf("%f",&n1);

            sum=  mult(4,(mult(PI,sqr(n1))));
            value = mult((4.0/3),mult(PI,cube(n1)));

            printf("Surface area of sphere is: %.3f",sum);
            printf("\nVolume of sphere is : %.3f",value);
                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto SVS;
                            }
                            else
                                exit(0);
        case 9:
AOP:            printf("Enter base and altitude of the given Parallelogram: \n ");
            scanf("%f%f", &n1, &n2);
            sum = mult(n1,n2);
            printf("Area of Parallelogram is: %.3f\n", sum);
                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu3;}
                            else if(n==2)
                            {
                               goto AOP;
                            }
                            else
                                exit(0);
        case 0:
            goto MainMenu;

  }
    case 4:
Menu4:
        printf("Choose Your Operation \n");
        printf("1.sin 2.cos 3. tan 4. cosec 5.sec 6.cot 7.1og10 ");
        printf("\n\n Press 0 to go to Main Menu:");
        scanf ("%d",&n);

        switch (n)
        {
        case 0:
            goto MainMenu;
            case 1:
            printf("\n Value of the angle? ");
        scanf("%f",&x);
            sum = sine(x);
            printf("%.2f",sum);
                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 2:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
                sum = cosine(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 3:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
        sum = tangent(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 4:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
                sum = cosec(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 5:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
                sum = sec(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 6:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
                sum = cot(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);
            case 7:
                printf("\n Value of the angle? ");
        scanf("%f",&x);
                sum = logten(x);
            printf("%.2f",sum);
                                                                    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu: ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu4;}

                            else
                                exit(0);

        }
    case 5:
Menu5:
            printf("1.From the equation f=ma\n");
            printf("2.From the equation v^2=u^2+2as\n");
            printf("3.From the equation s=ut+1/2at^2\n");
            printf("4.Solve the equation s=vt\n");
            printf("5.Solve the equation v=u+at\n");
            printf("6.Solve the equation t=2pi*sqrt(l/g)\n");
            printf("7.Solve the equation v=f*lamda\n");
            printf("Enter your choice: \n");
            scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("1.Determine the value of f.\n");
            printf("2.Determine the value of m.\n");
            printf("3.Determine the value of a.");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("Enter the value of m & a:");
                scanf("%f%f",&n1,&n2);
                sum=def(n1,n2);
                printf("The value of f is:%.2f\n",sum);
                                                                        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 2:
                printf("Enter the value of f & a:");
                scanf("%f%f",&n1,&n2);
                sum=dem(n1,n2);
                printf("The value of m is:%.2f\n",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 3:
                printf("Enter the value of f & m:");
                scanf("%f%f",&n1,&n2);
                sum=dea(n1,n2);
                printf("The value of a is:%.2f\n",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            }
        case 2:
                printf("1.Determine the value of v\n");
                printf("2.Determine the value of u\n");
                printf("3.Determine the value of a\n");
                printf("4.Determine the value of s\n");
                printf("Enter your choice");
                scanf("%d",&n);
                switch(n)
                {
                case 1:
                printf("Enter the value of  u,a & s: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=dev(n1,n2,n3);
                printf("The value of v is:%f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
                case 2:
                printf("Enter the value of v,a & s: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deu(n1,n2,n3);
                printf("The value of u is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
                case 3:
                 printf("Enter the value of v,u & s: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deea(n1,n2,n3);
                printf("The value of a is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
                case 4:
                 printf("Enter the value of v,u & a: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=des(n1,n2,n3);
                printf("The value of s is: %.2f",sum);

                }
        case 3:
                printf("1.Determine the value of s \n");
                printf("2.Determine the value of u \n");
                printf("3.Determine the value of a \n");
                printf("4.Determine the value of t \n");
                printf("Enter your choice");
                scanf("%d",&n);
                switch(n)
                {
               case 1:
                    printf("Enter the value of u,a & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=dees(n1,n2,n3);
                printf("The value of s is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
               case 2:
                   printf("Enter the value of s,a & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deeu(n1,n2,n3);
                printf("The value of u is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
               case 3:
                   printf("Enter the value of s,u & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deeea(n1,n2,n3);
                printf("The value of a is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
                }
        case 4:
                 printf("1.Determine the value of s\n");
            printf("2.Determine the value of v\n");
            printf("3.Determine the value of t");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("Enter the value of v & t:");
                scanf("%f%f",&n1,&n2);
                sum=deees(n1,n2);
                printf("The value of s is:%.2f\n",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 2:
                printf("Enter the value of s & t: ");
                scanf("%f%f",&n1,&n2);
                sum=deev(n1,n2);
                printf("The value of v is:%.2f\n",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 3:
                printf("Enter the value of s & v:");
                scanf("%f%f",&n1,&n2);
                sum=deet(n1,n2);
                printf("The value of t is:%.2f\n",sum);
            }
         printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
        case 5:
                 printf("1.Determine the value of v\n");
                printf("2.Determine the value of u\n");
                printf("3.Determine the value of a\n");
                printf("4.Determine the value of t\n");
                printf("Enter your choice : ");
                scanf("%d",&n);
                switch(n)
                {
            case 1:
                printf("Enter the value of  u,a & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deeev(n1,n2,n3);
                printf("The value of v is:%.2f",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 2:
                printf("Enter the value of v,a & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deeeu(n1,n2,n3);
                printf("The value of u is: %.2f",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 3:
                 printf("Enter the value of v,u & t: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=deaa(n1,n2,n3);
                printf("The value of a is: %.2f",sum);
             printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
            case 4:
                 printf("Enter the value of v,u & a: ");
                scanf("%f%f%f",&n1,&n2,&n3);
                sum=dett(n1,n2,n3);
                printf("The value of t is: %.2f",sum);
                 printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu5;}

                            else
                                exit(0);
                }
        case 6:
                printf("Enter the value of l: ");
                scanf("%f",&n1);
                sum=dept(n1);
                printf("The value of t is:%.2f\n",sum);
        case 7:
                 printf("1.Determine the value of v\n");
            printf("2.Determine the value of f\n");
            printf("3.Determine the value of lamda.");
            printf("Enter Your Choice:");
            scanf("%d",&n);
            switch(n)
            {
            case 1:
                printf("Enter the value of f & lamda:");
                scanf("%f%f",&n1,&n2);
                sum=dvv(n1,n2);
                printf("The value of v is:%.2f\n",sum);
            case 2:
                printf("Enter the value of v & lamda:");
                scanf("%f%f",&n1,&n2);
                sum=dff(n1,n2);
                printf("The value of f is:%.2f\n",sum);
            case 3:
                printf("Enter the value of v & f:");
                scanf("%f%f",&n1,&n2);
                sum=dlamda(n1,n2);
                printf("The value of lamda is:%.2f\n",sum);
}
            case 0:
                goto MainMenu;
        }

       case 7:
Menu7:
            printf("1.General conversion\n");
            printf("2.Currency conversion\n");
            scanf("%d",&n);
            switch(n)
        {
        case 1:
        Rakib:
        printf("1.Feet to Centimeter\n");
        printf("2.centimeter to feet\n");
        printf("3.Mile to Kilometer\n");
        printf("4.Kilometer to mile\n");
        printf("5.Celsius to Kelvin\n");
        printf("6.Kelvin to celsius\n");
        printf("7.Kilogram to Pound\n");
        printf("8.Pound to kilogram\n");
        printf("9.Meter to inch\n");
        printf("10.Inch to meter\n");
        printf("11.Decimal to acre\n");
        printf("12.Acre to decimal\n");
        printf("13.Acre to kattha\n");
        printf("14.Kattha to acre\n");
        printf("\n\n Press 0 to go to Main Menu:");
        printf("Enter Your Choice");

        scanf("%d",&n);
        switch(n)
        {
        case 1:

        rak:
        printf("Enter the length in feet:");
        scanf("%f",&n1);

    sum=feettocm(n1);
    printf("The length in cm is:%.2f\n",sum);

    printf("Enter 0 to go to previous menu, 1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if (n==0)
    {
    goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rak;
    }
    else
        exit(0);
        case 2:
            raa:
                printf("Enter the length in Centimeter:");
    scanf("%f",&n1);

    sum=cmtofeet(n1);
    printf("The length in feet is:%.2f\n",sum);

    printf("Enter 0 to go to previous menu, 1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if (n==0)
    {
    goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto raa;
    }
    else
        exit(0);

        case 3:
            kib:
            printf("Enter the distance in mile:");
    scanf("%f",&n1);
    sum=miletokm(n1);
    printf("The distance in kilometer is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto kib;
    }
    else
        exit(0);
        case 4:
            rac:
                 printf("Enter the distance in kilometer:");
    scanf("%f",&n1);
    sum=kmtomile(n1);
    printf("The distance in mile is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rac;
    }
    else
        exit(0);


    case 5:
        rkb:
            printf("Enter the temperature in celsius:");
    scanf("%f",&n1);
    sum=celsiustok(n1);
    printf("The temperature in calvin is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rkb;
    }
    else
        exit(0);
    case 6:
        rad:
             printf("Enter the temperature in Kelvin:");
    scanf("%f",&n1);
    sum=ktocelsius(n1);
    printf("The temperature in celsius is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rad;
    }
    else
        exit(0);

        case 7:
        rah:
            printf("Enter the weight in kilogram:");
    scanf("%f",&n1);
    sum=kgtopound(n1);
    printf("The weight in pound is:%f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rah;
    }

    else
    exit(0);
        case 8:
            rae:
             printf("Enter the weight in pound:");
    scanf("%f",&n1);
    sum=poundtokg(n1);
    printf("The weight in kg is:%f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rae;
    }

    else
    exit(0);


        case 9:
            rhr:
            printf("Enter the length in meter:");
    scanf("%f",&n1);
    sum=metertoinch(n1);
    printf("The length in inch is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rhr;
    }
    else
    exit(0);
        case 10:
            raf:
                 printf("Enter the length in inch:");
    scanf("%f",&n1);
    sum=inchtometer(n1);
    printf("The length in meter is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto raf;
    }
    else
    exit(0);

        case 11:
            rtk:
             printf("Enter the area in Decimal:");
    scanf("%f",&n1);
    sum=decimaltoacre(n1);
    printf("The area in acre is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rtk;
    }
    else
    exit(0);
        case 12:
            rai:
                 printf("Enter the area in Acre:");
    scanf("%f",&n1);
    sum=acretodecimal(n1);
    printf("The area in Decimal is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto rai;
    }
    else
    exit(0);

        case 13:
            lkhn:
                 printf("Enter the area in Acre:");
    scanf("%f",&n1);
    sum=acretokattha(n1);
    printf("The area in kattha is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto lkhn;
    }
    else
    exit(0);
        case 14:
            raj:
                 printf("Enter the area in Kattha:");
    scanf("%f",&n1);
    sum=katthatoacre(n1);
    printf("The area in Acre is:%.2f\n",sum);
    printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
    scanf("%d",&n);
    if(n==0)
    {
        goto Rakib;
    }
    else if(n==1)
    {
        goto MainMenu;
    }
    else if(n==2)
    {
        goto raj;
    }
    else
    exit(0);
        case 0:
            goto MainMenu;

    }
        case 2:
            mess:

            printf("1.USD to BDT\n");
            printf("2.AUD to BDT\n");
            printf("3.NZD tO BDT\n");
            printf("4.GBP to BDT\n");
            printf("5.RS to BDT\n");
            printf("6.Euro to BDT\n");
            printf("\n\n Press 0 to go to Main Menu:");
            printf("Enter your choice: ");
            scanf("%d",&n);
            switch(n)
            {
        case 0:
            goto MainMenu;
            case 1:
                raat:
                    printf("Enter USD: \n");
                    scanf("%f",&n1);
                    sum=usdtobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto raat;
            }
            else
            exit(0);
            case 2:
                rabt:
                     printf("Enter AUD: \n");
                    scanf("%f",&n1);
                    sum=audtobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto rabt;
            }
            else
            exit(0);
            case 3:
                ract:
                      printf("Enter NZD: \n");
                    scanf("%f",&n1);
                    sum=nzdtobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto ract;
            }
            else
            exit(0);
            case 4:
                radt:
                      printf("Enter GBP: \n");
                    scanf("%f",&n1);
                    sum=gbptobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto radt;
            }
            else
            exit(0);
            case 5:
                raet:
                      printf("Enter RS: \n");
                    scanf("%f",&n1);
                    sum=rstobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto raet;
            }
            else
            exit(0);
            case 6:
                raft:
                      printf("Enter Euro: \n");
                    scanf("%f",&n1);
                    sum=eurotobdt(n1);
                    printf("BDT: %.2f\n",sum);
                     printf("Enter 0 to go to previous menu,1 to go to main menu and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto mess;
            }
            else if(n==1)
            {
                goto MainMenu;
            }
            else if(n==2)
            {
                goto raft;
            }
            else
            exit(0);

            }

    }


    case 8:
Hasan:
        printf("1.Binary to Decimal\n");
        printf("2.Decimal to Binary\n");
        printf("3.Binary to Octal\n");
        printf("4.Octal to Binary\n");
        printf("5.Decimal to Octal\n");
        printf("6.Octal to Decimal\n");
        printf("\n\n Press 0 to go to Main Menu:");
        printf("Enter your choice");
        scanf("%d",&n);
        switch(n)
        {
        case 0:
            goto MainMenu;
        case 1:
            raka:
            printf("Enter a Binary number:");
            scanf("%d",&x);
            dn=binarytodecimal(x);
            printf("The Decimal number is:%d\n",dn);
            printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto raka;
            }
            else
                exit(0);
        case 2:
            kiba:
                printf("Enter a Decimal number:\n");
                scanf("%d",&x);
                bn=decimaltobinary(x);
                printf("The Binary number is:%d\n",bn);
                printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto kiba;
            }
            else
                exit(0);
        case 3:
                    rh:
                       printf("Enter a Binary number:");
                       scanf("%ld",&x);
                       on=binarytooctal(x);
                       printf("The Octal number is:%lo\n",on);
                       printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto rh;
            }
            else
                exit(0);
        case 4:
            whr:
            printf("Enter a octal number: ");
        scanf("%d",&n);
        printf(" The binary number is: %d/n", octaltobinary(n));
         printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto whr;
            }
            else
                exit(0);

        case 5:
                    rhra:
                        printf("Enter a Decimal number:");
                        scanf("%d",&x);
                        on=decimaltooctal(x);
                        printf("The Octal number is:%d\n",on);
                       printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto rhra;
            }
            else
                exit(0);
        case 6:
                    rko:
                    printf("Enter an octal number:");
                    scanf("%d",&x);
                    dn=octaltodecimal(x);
                    printf("The Decimal number is:%d\n",dn);
                     printf("Enter 0 to go to main menu and 1 to go back and 2 to re-calculate");
            scanf("%d",&n);
            if(n==0)
            {
                goto MainMenu;;
            }
            if(n==1)
            {
                goto Hasan;
            }
            else if(n==2)
            {
                goto rko;
            }
            else
                exit(0);

   } break;

    case 6:
Menu6:
        printf("1. Calculate G.C.D \n");
        printf("2. Calculate L.C.M \n");
        printf("3. Add two Matrices\n");
        printf("Enter Your choice: \n");
        printf("\n\n Press 0 to go to Main Menu:");
        scanf("%d", &n);
        switch(n)
        {
    case 0:
        goto MainMenu;
        case 1:
GCD:    printf("Enter two positive integers: ");
    scanf("%d%d", &bn, &dn);
    printf("H.C.F of %d and %d = %d", bn, dn, hcf(bn,dn));

    printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu6;}
                            else if(n==2)
                            {
                                goto GCD;
                            }

                            else
                                exit(0);

        case 2:
LCM:            printf("Enter any two positive integers ");
                scanf("%d%d",&bn,&dn);

    if(bn>dn)
    on = lcm(bn,dn);
    else
    on= lcm(dn,bn);

    printf("LCM of two integers is %d",on);
        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu6;}
                            else if(n==2)
                            {
                                goto LCM;
                            }

                            else
                                exit(0);
        case 3:
AddMat:
    printf("Enter number of rows :");
    scanf("%d",&row);
    printf("Enter number of colomns :");
    scanf("%d",&col);
    read_arr(m1,row,col);
    read_arr(m2,row,col);
    add_arr(m1,m2,m3,row,col);
    print_arr(m3,row,col);

        printf("  \n\nPress 0 to go to main menu or 1 to go to previous menu or 2 to re-calculate : ");
                            scanf("%d",&n);
                            if(n==0)
                            {goto MainMenu;}
                            else if (n==1)
                            {goto Menu6;}
                            else if(n==2)
                            {
                                goto AddMat;
                            }

                            else
                                exit(0);

        }

}
    getchar();
return 0;}

float addNnumbers(int a)
{
    float sum=0,value;
    int c;
    for (c = 1; c <= a; c++)
      {
      scanf("%f", &value);
      sum = sum + value;
      }

      return sum;
}
float sub(float x, float y)
{
float c;
c = (x-y);
return c;
}
float mulNnumbers(int x)
{
    int c;
    float mul=1, value;
    printf("Enter %d integers\n",x);

        for (c = 1; c <= x; c++)
         {
         scanf("%f", &value);
         mul = mul * value;
         }
         return mul;
}
float div(float x, float y)
{
    float sum;
    sum= x/y;
    return sum;
}
float sqr(float x)
{
    float c;
    c=pow(x,2);
    return c;
}
float cube(float x)
{
    float c;
    c=pow(x,3);
    return c;
}
float Ntopown(float x, float y)
{
    float c;
    c=pow(x,y);
    return c;
}
float sqrrt(float x)
{
    float c;
    c=pow(x,.5);
    return c;

}
float cubicrt(float x)
{
    float c;
    c=pow(x,(.3333));
    return c;

}
  float nthrootofN(float x, float y)
  {
      float c;
      c= pow(x, (1/y));
      return c;
  }
  float disoftwopoints(float x1,float y1, float x2, float y2)
  {
    float dx,dy,r;
dx= (x1-x2);
dy=(y1-y2);
  r=sqrt(sqr(dx)+sqr(dy));
  return r;
  }
float add(float x, float y)
{
    float c;
    c= x+y;
    return c;
}
float circulareqn(float x1, float y1, float x2, float y2)
{
    float x, y, c;
    x=sub(x1,x2);
    y=sub(y1,y2);
    c=sqrt(sqr(x)+sqr(y));
    return c;
}
float mult(float x, float y)
{
    return (x*y);
}
float sqrtsofsqrs(float x, float y)
{
    float c;
    c=sqrt(sub(sqr(x),sqr(y)));
    return c;
}
int binarytodecimal(int a)
{
    int dn=0,i,j=1;
    for(a;a!=0;a=a/10)
    {
        i=a%10;
        dn=dn+i*j;
        j=j*2;
    }
    return dn;
}
int decimaltobinary(int a)
{
    int bn=0,i,j=1;
    for(a;a!=0;a=a/2)
    {
        i=a%2;
        bn=bn+i*j;
        j=j*10;
    }
    return bn;
}
int binarytooctal(int a)
{
    int on=0,j=1,i;
    for(a;a!=0;a=a/10)
    {
        i=a%10;
        on=on+i*j;
        j=j*2;
    }
    return on;
}
int decimaltooctal(int a)
{
    int i,j=1,on=0;
    for(a;a!=0;a=a/8)
    {
        i=a%8;
        on=on+i*j;
        j=j*10;
    }
    return on;
}
int octaltodecimal(int a)
{
    int dn=0,i,j=0;
    for(a;a!=0;a=a/10)
    {
        i=a%10;
        dn=dn+i*pow(8,j);
        ++j;
    }
    return dn;
}
float sine(float x)
{
    return (sin (x*PI/180));
}
float cosine(float x)
{
    return (cos (x*PI/180));
}
float tangent(float x)
{
    return (tan(x*PI/180));
}
float cosec(float x)
{
  float c;
  c= 1/ (sin(x * 3.14159 / 180));
    return c;
}
float sec(float x)
{
    float c;
    c=1 / cos(x * 3.14159 / 180);
    return c;
}
float cot(float x)
{
   float c;
   c=1 / tan(x * 3.14159 / 180);
   return c;
}
float logten(float x)
{
    return (log10(x));
}
float feettocm(float a)
{
    return a*30;
}
float cmtofeet(float a)
{
    return a*.0328;
}
float miletokm(float a)
{
    return a*1.61;
}
float kmtomile(float a)
{
    return a*.6213;
}
float celsiustok(float a)
{
    return a+273.15;
}
float ktocelsius(float a)
{
  return  a-273.15;
}
float kgtopound(float a)
{
    return a*2.2046;
}
float poundtokg(float a)
{
    return a*.4535;
}
float metertoinch(float a)
{
    return a*39.37;
}
float inchtometer(float a)
{
   return a*.0254;
}

float decimaltoacre(float a)
{
    return a*.0099;
}
float acretodecimal(float a)
{
   return a*101.01;
}
float acretokattha(float a)
{
    return a*11.9729;
}
float katthatoacre(float a)
{
    return a*.0835;
}
float usdtobdt(float a)
{
    return a*78.49;
}
float audtobdt(float a)
{
    return a*54.99;
}
float nzdtobdt(float a)
{
    return a*51.23;
}
float gbptobdt(float a)
{
    return a*112.34;
}
float rstobdt(float a)
{
    return a*1.1647;
}
float eurotobdt(float a)
{
    return a*84.9758;
}
float def(float a,float b)
{
    return a*b;
}
float dem(float a,float b)
{
    return a/b;
}
float dea(float a,float b)
{
    return a/b;
}
float dev(float a,float b,float c)
{
    return sqrt(a*a+2*b*c);
}
float deu(float a,float b,float c)
{
    return sqrt(a*a-2*b*c);
}
float deea(float a,float b,float c)
{
    float t,h;
    t=a*a-b*b;
    h=2*c;
    return t/h;
}
float des(float a,float b,float c)
{
    float t,h;
    t=a*a-b*b;
    h=2*c;
    return t/h;
}
float dees(float a,float b,float c)
{
 float y;
 y=(a*c)+.5*b*(c*c);
 return y;
}
 float deeu(float a,float b,float c)
 {
     float p;
     p=a-(.5*b*c*c);
     return p/c;
 }
 float deeea(float a,float b,float c)
 {
     float f,g;
     f=2*(a-b*c);
     g=c*c;
     return f/g;
 }
int hcf(int x, int y)
{
    if (y!=0)
       return hcf(y, x%y);
    else
       return x;
}
int lcm(int x,int y){

   static int temp = 1;

    if(temp % y == 0 && temp % x == 0)
         return temp;
    temp++;
    lcm(x,y);

   return temp;
}
void read_arr(int a[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
        printf("Enter Element %d %d : ",i,j);
        scanf("%d",&a[i][j]);
            }
    }
}

void add_arr(int m1[10][10],int m2[10][10],int m3[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
    {
    for(j=1;j<=col;j++)
    {
    m3[i][j] =  (m1[i][j] + m2[i][j]);
    }
    }
}

void print_arr(int m[10][10],int row,int col)
{
    int i,j;
    for(i=1;i<=row;i++)
        {
        for(j=1;j<=col;j++)
        {
            printf("%d ",m[i][j]);
         }
        printf("\n");
        }
}
int octaltobinary(int a)
{
    int decimal=0, binary=0, i=0;
    while (a!=0)
    {
        decimal+=(a%10)*pow(8,i);
        ++i;
        a/=10;
    }

    i=1;
    while(decimal!=0)
    {
        binary+=(decimal%2)*i;
        decimal/=2;
        i*=10;
    }
    return binary;
}
float deees(float a,float b)
{
    return a*b;
}
float deev(float a,float b)
{
    return a/b;
}
float deet(float a,float b)
{
    return a/b;
}
float deeev(float a,float b,float c)
{
    return a+b*c;
}
float deeeu(float a,float b,float c)
{
    return a-b*c;
}
float deaa(float a,float b,float c)
{
    int p;
    p=a-b;
    return p/c;

}
float dett(float a,float b,float c)
{
    int d;
    d=a-b;
    return d/c;
}
float dept(float a)
{
    return 2*3.1416*sqrt(a/9.81);
}
 float dvv(float a,float b)
 {
    return a*b;
 }
float dff(float a,float b)
{
  return a/b;
}
float dlamda(float a,float b)
{
    return a/b;
}
