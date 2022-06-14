//#include <stdio.h>
//#include <string.h>

//double area(double radius)//원형함수와 main함수의 변수는 이름이 같아도 다른 변수
//{
//    double area=radius*radius*(3.14);
//    //printf("%.2lf", area);
//    return area;
//}
//
//int main()
//{
//    double radius;
//    scanf("%lf", &radius);
//    area(radius);
//
//    printf("%.2lf", area(radius));
//
//    return 0;
//}


//10주차 4번
//int GCD(int A, int B)
//{
//    int i, n;
//    for(i=1; i<=A && i<=B; i++)
//    {
//        if(A%i==0 && B%i==0)
//            n = i;
//    }
//
//    return n;
//}
//
//int LCD(int A, int B)
//{
//    int i, gcd, min;
//    for (i = 1; i<=A && i<=B; i++)
//    {
//        if (A%i==0 && B%i==0)
//            gcd = i;
//    }
//
//    min = (A*B)/gcd;
//
//    return min;
//}
//
//int main()
//{
//    int A, B;
//    printf("두 정수 입력 : ");
//    scanf("%d %d", &A, &B);
//
//    printf("최대공약수 : %d\n", GCD(A, B));
//    printf("최소공배수 : %d\n", LCD(A, B));
//
//    return 0;
//}



//10주차 6번
//int isPrime(int N) // N이 소수이면 1, 아니면 0을 반환하는 함수
//{
//    int count=0, result=0;
//
//    for (int i=2; i<=N; i++)
//    {
//        if (N%i==0)
//            count++;
//    }
//
//    if (count==1)
//        result=1;
//
//    return result;
//}
//
//
//int main()
//{
//    int N, TC;
//    scanf("%d", &TC);
//
//    while (TC--)
//    {
//        scanf("%d", &N);
//        printf("소수이면 1, 아니면 0을 반환합니다. : %d\n", isPrime(N));
//    }
//
//    return 0;
//}




//11주차 1번
//int square(int n)
//{
//    int square=n*n;
//
//    return square;
//}
//
//int main()
//{
//    int n;
//    square(n);
//
//    printf("제곱할 정수 입력: ");
//    scanf("%d", &n);
//
//    printf("%d의 제곱 : %d", n, square(n));
//
//    return 0;
//}



//2번
//int plus(int num)
//{
//    int plus=num+10;
//
//    return plus;
//}
//
//int minus(int num)
//{
//    int minus=num-10;
//
//    return minus;
//}
//
//int main()
//{
//    int num;
//    plus(num);
//    minus(num);
//
//    printf("정수 입력 : ");
//    scanf("%d", &num);
//
//    printf("10 더한 값 : %d\n", plus(num));
//    printf("10 뺀 값 : %d", minus(num));
//
//    return 0;
//}



//3번
//int calculator(int x, int y, char t)
//{
//    int calculator;
//
//    switch (t) {
//        case '+':
//            calculator=x+y;
//            break;
//
//        case '-':
//            calculator=x-y;
//            break;
//
//        case '*':
//            calculator=x*y;
//            break;
//
//        case '/':
//            calculator=x/y;
//            break;
//
//        default:
//            calculator=0;
//            break;
//    }
//
//    return calculator;
//}
//
//int main()
//{
//    int x, y;
//    char t;
//
//    printf("두 정수 입력 : ");
//    scanf("%d %d", &x, &y);
//
//    printf("연산자 입력 : ");
//    scanf(" %c", &t);
//
//    printf("%d %c %d = %d", x, t, y, calculator(x, y, t));
//
//
//    return 0;
//}


//int main()
//{
//
//    return 0;
//}



//4번
//int square(int n, int a)
//{
//    int num=1;
//
//    for(int i=1; i<=a; i++)
//    {
//        num*=n;
//    }
//
//    return num;
//}
//
//int main()
//{
//    int n, a;
//    printf("두 정수를 입력하세요 : ");
//    scanf("%d %d", &n, &a);
//
//    printf("%d의 %d 제곱 : %d", n, a, square(n, a));
//
//    return 0;
//}



//5번
//int factorial(int n)
//{
//    int result=1;
//
//    for (int i=n; i>=1; i--) {
//        result*=i;
//    }
//
//    return result;
//}
//
//int main()
//{
//    int n;
//    printf("자연수를 입력하세요 : ");
//    scanf("%d", &n);
//
//    printf("%d! = %d", n, factorial(n));
//
//    return 0;
//}



//6번
//int divisor(int n)
//{
//    int count;
//
//    for(i=1; i<=n; i++)
//    {
//        if (n) {
//            <#statements#>
//        }
//    }
//}




//int total=0;
//int addToTotal(int num);
//
//int main()
//{
//    int num, i;
//    for (i=0; i<3; i++) {
//        printf("입력%d : ", i+1);
//        scanf("%d", &num);
//        printf("\t누적 : %d\n", addToTotal(num));
//    }
//
//    return 0;
//}
//
//int addToTotal(int num)
//{
//    static int total=0;
//    total+=num;
//    return  total;
//}



//재귀함수 예제 3번
//void result(int n)
//{
//    if(n<=0) return;
//    result(n-1);
//
//    printf("%d\n", n);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    result(n);
//
//    return 0;
//}



//재귀함수 예제 4번
//void result(int n)
//{
//    if(n<=0) return;
//    printf("%d\n", n);
//    result(n-1);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    result(n);
//
//    return 0;
//}



//재귀함수 예제 5번
//int func(int n)
//{
//    if(n<=0)
//        return 0;
//
//    return func(n-1)+n;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    printf("%d", func(n));
//
//    return 0;
//}


//int sum=0;
//
//int func(int n)
//{
//    if(n<=0)
//        return 0;
//
//    func(n-1);
//    sum+=n;
//
//    return sum;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    printf("%d", func(n));
//
//    return 0;
//}



//재귀함수 예제 6번
//void func(int a, int b)
//{
//    if(a<=0||b>=100)
//        return;
//
//    for(int i=a; i<=b; i++)
//    {
//        if(i%2!=0)
//            printf("%d ", i);
//    }
//}
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    func(a, b);
//
//    return 0;
//}



//재귀함수 예제 7번
//int fibo(int n)
//{
//    if(n<=2)
//        return 1;
//
//    return fibo(n-1)+fibo(n-2);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    printf("%d", fibo(n));
//
//    return 0;
//}



//재귀함수 예제 8번
//int func(int n)
//{
//    if(n==0)
//        return 0;
//
//    return ((n%10)*(n%10)+func(n/10));
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    printf("%d", func(n));
//
//    return 0;
//}



//int main()
//{
//    int i=10;
//    char c=69;
//    double f=12.3;
//
//    printf("%d %c %f\n", i, c, f);//변수에 저장된 값 출력
//
//    printf("%p %p %p\n", &i, &c, &f);//변수의 메모리 주소 출력
//
//    return 0;
//}



//int main()
//{
//    int nData=10;
//    int *pData=&nData;
//
//    printf("nData : %d\n", nData);
//    printf("&nData : %p\n", &nData);
//    printf("pData : %p\n", pData);
//
//    return 0;
//}



//int main()
//{
//    int num1=20;
//    int num2=30;
//
//    int *pnum1=&num1;
//    int *pnum2=&num2;
//
//    printf("num1 value : %8d, &num1 : %p\n", num1, &num1);
//    printf("num2 value : %8d, &num2 : %p\n", num2, &num2);
//    printf("pnum1 value : %p, &pnum1 : %p\n", pnum1, &pnum1);
//    printf("pnum2 value : %p, &pnum2 : %p\n", pnum2, &pnum2);
//
//    return 0;
//}



//int main()
//{
//    printf("sizeof(char) : %d, sizeof(char*) : %d\n", sizeof(char), sizeof(char*));
//    printf("sizeof(short) : %d, sizeof(short*) : %d\n", sizeof(short), sizeof(short*));
//    printf("sizeof(int) : %d, sizeof(int*) : %d\n", sizeof(int), sizeof(int*));
//    printf("sizeof(double) : %d, sizeof(double*) : %d\n", sizeof(double), sizeof(double*));
//    printf("sizeof(long long) : %d, sizeof(long long*) : %d\n", sizeof(long long), sizeof(long long*));
//
//    return 0;
//}



//int main()
//{
//    int arr[3]={15, 25, 35};
//    int* ptr = arr;
//    
//    
//}


//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if (a>=b)
//        printf("%d", a-b);
//
//    else
//        printf("%d", b-a);
    
//    int n;
//    scanf("%d", &n);
//
//    if (n==0)
//        printf("zero");
//    else if (n%2==0)
//        printf("even");
//    else
//        printf("odd");
    
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if(a>=b&&b>=c||a>=c&&c>=b)
//        printf("%d", a);
//    else if(b>=a&&a>=c||b>=c&&c>=a)
//        printf("%d", b);
//    else
//        printf("%d", c);
//}


#include <stdio.h>
#include <string.h>

//struct Person
//{
//    double height;
//    double weight;
//    char name[10];
//    short grade;
//};
//
//int main()
//{
//    struct Person person;
//
//    person.height = 174.2;
//    person.weight = 67.8;
//    person.grade = 1;
//
//    strcpy(person.name, "홍길동");
//
//    printf("person.height : %.1lf\n", person.height);
//    printf("person.weight : %.1lf\n", person.weight);
//    printf("person.name : %s\n", person.name);
//    printf("person.grade : %d\n", person.grade);
//
//    return 0;
//}


#include <stdio.h>
#include <string.h>

//struct employee
//{
//    char name[10];
//    char num[15];
//    int payinfo;
//};
//
//int main()
//{
//    struct employee person;
//
//
//
//}


int main()
{
    int i=1, n;
    scanf("%d", &n);
    
    while (i<=n) {
        printf("%d\n", i++);
    }
    
    return 0;
}
