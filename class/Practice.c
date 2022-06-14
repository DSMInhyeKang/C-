#include <stdio.h>

int main()
{
//    int n;
//    scanf("%d", &n);
//
//    if(n==2||n==4||n==6) printf("enjoy");
//    else printf("oh my god");
//    
//    return 0;
    

//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if(a%2==0) printf("짝수");
//    else printf("홀수");
//    printf("+");
//
//    if(b%2==0) printf("짝수");
//    else printf("홀수");
//    printf("=");
//
//    if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0)) printf("짝수");
//    else printf("홀수");
    
    
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if(a<=b&&b<=c||a<=c&&c<=b) printf("%d", a);
//    else if(c<=a&&a<=b||c<=b&&b<=a) printf("%d", c);
//    else if(b<=a&&a<=c||b<=c&&c<=a) printf("%d", b);
    
    
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if(a>=4&&b>=4) printf("WIN");
//    else if(a>=4||b>=4) printf("DRAW");
//    else if(a<4&&b<4) printf("LOSE");
    
    
//    int a;
//    scanf("%d", &a);
//
//    if(a>0) printf("양수\n");
//    else if(a<0) printf("음수\n");
//    else printf("0\n");
//
//    if(a%2==0) printf("짝수\n");
//    else printf("홀수\n");
    
    
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if(a==b&&b==c) printf("%d원", 10000+a*1000);
//
//    if(a==b||b==c||c==a)
//    {
//        if(a==b&&c!=a) printf("%d원", 1000+a*100);
//        else if(b==c&&b!=a) printf("%d원", 1000+b*100);
//        else if(a==c&&a!=b) printf("%d원", 1000+c*100);
//    }
//
//    if(a!=b&&b!=c&&c!=a)
//    {
//        if(a<b&&b<c||b<a&&a<c) printf("%d원", c*100);
//        else if(a<c&&c<b||c<a&&a<b) printf("%d원", b*100);
//        else if(b<c&&c<a||c<b&&b<a) printf("%d원", a*100);
//    }
    
    
//    int age;
//    scanf("%d", &age);
//
//    if(age>=0&&age<=3) printf("최종요금 : %d원\n", 1000-1000/1);
//    else if(age>=4&&age<=13) printf("최종요금 : %d원\n", 1000-1000/2);
//    else if(age>=14&&age<=19) printf("최종요금 : %d원\n", 1000-1000/4);
//    else if(age>=20&&age<=64) printf("최종요금 : %d원\n", 1000-1000*0);
//    else if(age>=65) printf("최종요금 : %d원\n", 1000-1000/1);
    
    
//    int a, b, result;
//    scanf("%d %d", &a, &b);
//
//    result=a/10000;
//
//    if(b==3||b==4) printf("%d", 2012-(2000+result)+1);
//    else if(b==1||b==2) printf("%d", 2012-(1900+result)+1);
    
    
//    int a, b;
//    char ch;
//    scanf("%d %c %d", &a, &ch, &b);
//
//    switch(ch)
//    {
//    case '+':
//        printf("결과 : %d", a+b); break;
//
//    case '-':
//        printf("결과 : %d", a-b); break;
//
//    case '/':
//        printf("결과 : %d", a/b); break;
//
//    case '%':
//        printf("결과 : %d", a%b); break;
//
//    case '*':
//        printf("결과 : %d", a*b); break;
//
//    default:
//        printf("ERROR : 산술연산자가 아닙니다."); break;
//    }
    
    
//    int age, a;
//    scanf("%d", &age);
//
//    if(age>=0&&age<=9) a=1;
//    if(age>=10&&age<=19) a=2;
//    if(age>=20&&age<=59) a=3;
//    if(age>=60) a=4;
//
//    switch(a)
//    {
//    case 1:
//            printf("최종요금:%d원\n", 1000-1000/2); break;
//
//    case 2:
//            printf("최종요금:%d원\n", 1000-1000/4); break;
//
//    case 3:
//            printf("최종요금:%d원\n", 1000-1000*0); break;
//
//    case 4:
//            printf("최종요금:%d원\n", 1000-1000/1); break;
//    }
    
    
//    int a,b;
//    scanf("%d %d", &a, &b);
//
//    printf("두 수 중 큰 수 : %d", (a>b ? a:b));
    
    
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//
//    printf("당신의 평균 : %.2f\n", (a+b+c)/3);
//    printf("당신의 결과 : %c", (a+b+c)/3>80.5 ? 'O':'X');
    
    
//    int num1, num2, num3;
//    int a, b;
//
//    printf("정수 세 개 입력: ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//
//    a = (num1 > num2) ? num1 : num2;
//    b = (a > num3) ? a : num3;
//
//    printf("입력된 정수 중 에서 가장 큰 수는 %d", b);
    
    
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if(a<=b&&b<=c) printf("%d %d %d", a, b, c);
//    else if(a<=c&&c<=b) printf("%d %d %d", a, c, b);
//    else if(c<=a&&a<=b) printf("%d %d %d", c, a, b);
//    else if(c<=b&&b<=a) printf("%d %d %d", c, b, a);
//    else if(b<=a&&a<=c) printf("%d %d %d", b, a, c);
//    else if(b<=c&&c<=a) printf("%d %d %d", b, c, a);

    
//    int h, m, a;
//
//    scanf("%d %d", &h, &m);
//
//    a = h * 60 + m;
//    a= a - 30;
//    if (a < 0)
//    {
//        h = 23;
//        m = 60 + a;
//    }
//
//    else
//    {
//        h = a / 60;
//        m = a % 60;
//    }
//
//    printf("%d %d", h, m);
    
    
//    unsigned char num1=1;
//    unsigned char num2=3;
//
//    printf("%d\n", num1&num2);
//    printf("%d\n", num1|num2);
//    printf("%d\n", num1^num2);
    
    
//    int n=6;
//    printf("%d", n<<2);
    
    
//    int h, m, t, sum;
//    scanf("%d %d\n%d", &h, &m, &t);
//
//    sum=h*60+m+t;
//    h=(sum/60)%24;
//    m=sum%60;
//
//    printf("%d %d", h, m);
    
    
//    int i=1, num;
//    scanf("%d", &num);
//
//    while(i<=num)
//    {
//        printf("%d ", i);
//        i++;
//    }
    
    
//    int alpha=65;
//    int num;
//    scanf("%d", &num);
//
//    while(alpha<=num)
//    {
//        printf("%c ", alpha);
//        alpha++;
//    }
    
    
//    int sum=0, i=1, num;
//    scanf("%d", &num);
//
//    while(i<=num)
//    {
//        sum+=i;
//        i++;
//    }
//    printf("1부터 %d까지의 합 : %d", num, sum);
    
    
//    int i=1, num;
//    scanf("%d", &num);
//
//    while (i<=num)
//    {
//        printf("while문 내부 %d번 실행\n", i);
//        i++;
//    }
//    printf("프로그램 종료\n");
    
    
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if(a>b)
//    {
//        while(a>=b)
//        {
//            printf("%d ", b);
//                b++;
//        }
//    }
//
//    else
//    {
//        while(a<=b)
//        {
//            printf("%d ", a);
//                a++;
//        }
//    }
    
    
//    char alpha1, alpha2;
//    scanf("%c %c", &alpha1, &alpha2);
//
//    while(alpha1<=alpha2)
//    {
//        printf("%c ", alpha1);
//        alpha1++;
//    }
    
    
//    int i=1, n;
//    scanf("%d", &n);
//
//    while(i<=n)
//    {
//        printf("*");
//        i++;
//    }
    
    
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    while(a<=b)
//    {
//        if(a%2==1)
//        {
//            printf("%d ", a);
//        }
//
//        a++;
//    }

    
    
//    int i, num;
//    scanf("%d", &num);
//
//    for(i=num; i>0; i--)
//    {
//        printf("%d ", i);
//    }
//
//    printf("프로그램 종료\n");
    
    
    
//    int i, n, sum=0;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        sum+=i;
//    }
//    printf("1부터 %d까지의 합 : %d", n, sum);
    
    
    
//    int i, num;
//    scanf("%d", &num);
//
//    for(i=1; i<=9; i++)
//    {
//        printf("%d*%d=%d\n", num, i, num*i);
//    }
    
    
    
//    int i, n, sum=0;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        if(i%2==0)
//            sum+=i;
//
//        else sum=sum;
//    }
//    printf("%d", sum);
    
    
//    int a, b, sum=0;
//    scanf("%d %d", &a, &b);
//
//    for(int i=a; i<=b; i++)
//    {
//        if(i%4==0)
//            sum+=i;
//
//        else sum=sum;
//    }
//    printf("%d", sum);
    
    
    
//    int i, a, s1=0, s2=0;
//
//    for(i=0; i<=9; i++)
//    {
//        scanf("%d", &a);
//        if(a%5==0)
//        {
//            s2++;
//        }
//    }
    
    
    
//    int i;
//    double n=0, sum=0, avg=0;
//
//    for(i=0; i>=0; i++)
//    {
//        scanf("%lf", &n);
//
//        if(n>=0)
//            sum+=n;
//
//        else break;
//    }
//    avg=sum/i;
//    printf("입력받은 수의 평균 : %.2lf", avg);
    
    
//    int i, n;
//    int sum=0;// i=횟수 n=입력, sum=합
//    scanf("%d", &n);
//
//    for(i=1; ; i++)
//    {
//        sum+=i;
//        if (sum>n)
//        {
//            printf("%d ", i);
//            break;
//        }
//    }
//    printf("%d", sum);
    
    

//    int a, b, Max = 0;
//    scanf("%d", &a);
//
//    for(int i = 0; i < a; i++)
//    {
//        scanf("%d", &b);
//        if(b > Max)
//            Max = b;
//    }
//    printf("%d", Max);

    
//    int i, num;
//
//    for (i = 2; i >= 1; i++)
//    {
//        printf("자연수를 입력하세요(종료는 0) : ");
//        scanf("%d", &num);
//        if(num == 0)
//            break;
//
//        if (num % 2 == 0)
//            printf("%d는 짝수\n", num);
//
//        else
//            printf("%d는 홀수\n", num);
//    }
//    printf("종료합니다!");

    
//    int i, n;
//    scanf("%d", &n);
//
//    for(i=2; i<n; i++)
//    {
//
//        if(n%i==0)
//        {
//            printf("소수 아님");
//            return 0;
//        }
//
//    }
//    printf("소수!");
    
//    int num1, num2;
//    int f, m, l;
//    scanf("%d", &num1);
//
//    for(int i=1; i<=num1; i++)
//    {
//        scanf("%d", &num2);
//
//        if(i==1)
//            f=num2;
//
//        if(i==(1+num1)/2)
//            m=num2;
//
//        if(i==num1)
//            l=num2;
//    }
//    printf("%d %d %d", f, m, l);

    
//    int i;
//
//    for (i = 1; i <= 18; i++)
//    {
//        if (i >= 10)
//        {
//            if (i == 12)
//            {
//                printf("%d번 학생 결석\n", i);
//                continue;
//            }
//            printf("%d번 학생 발표\n",i);
//
//        }
//    }
    
    
//사각형
//    int n;
//    scanf("%d", &n);
//
//    for(int i=1; i<=n; i++)
//    {
//        for(int j=1; j<=n; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    
//삼각형 왼쪽에서부터 증가
//    int i, j, n;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    
//역삼각형 오른쪽 감소
//    int i, j, n;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(j=i; j<=n; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
    
    
//역삼각형 왼쪽 감소
//    int n;
//    scanf("%d", &n);
//
//    for(int i=1; i<=n; i++)
//    {
//        for(int j=1; j<=n; j++)
//        {
//            if(i>j)
//                printf(" ");
//            else
//                printf("*");
//        }
//        printf("\n");
//    }
    
    
//삼각형 오른쪽에서부터 증가
//    int i, j, n, s;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(s=0; s<n-i; s++)
//        {
//            printf(" ");
//        }
//
//
//        for(j=1; j<=i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    
//증감 삼각형
//    int n, i, j;
//    scanf("%d", &n);
//
//    for (i=1; i<=n; i++)
//    {
//       for (j=1; j<=i; j++)
//       {
//           printf("*");
//       }
//       printf("\n");
//    }
//
//    for (i=n-1; i>=1; i--)
//    {
//       for (j=1; j<=i; j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }

    
//피라미드
//    int i, j, n;
//    scanf("%d", &n);
//
//    for(i=1; i<=(n+1)/2; i++)
//    {
//        for(j=1; j<=(n+1)/2-i; j++)
//            printf(" ");
//
//        for(j=1; j<=i*2-1; j++)
//            printf("*");
//
//        printf("\n");
//    }
   
//    int i, j, n;
//    scanf("%d", &n);
//
//    for (i=1; i<=n; i++) {
//        for (j=n; j>i; j--)
//            printf(" ");
//
//        for (j=1; j<=i*2-1; j++)
//            printf("*");
//
//        printf("\n");
//    }
    

    
//역삼각형 피라미드
//    int n;
//    scanf("%d", &n);
//
//    for(int i=1; i<=n; i++)
//    {
//        for(int j=1; j<=n; j++)
//        {
//            if(i>j)
//                printf(" ");
//            else
//                printf("*");
//        }
//
//        for(int j=i; j<n; j++)
//        {
//            printf("*");
//        }
//
//        printf("\n");
//    }
    
    
    
//교재 p.160 자가진단 5번
//    int i, j, n;
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(j=1; j<=2*n-i; j++)
//        {
//            if(j>i-1)
//                printf("*");
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
   
    
//자가진단 6번
//    int i, j, n;
//    char alpha = 'A';
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(j=n; j>=i; j--)
//        {
//            printf("%c", alpha++);
//        }
//
//        printf("\n");
//    }
    
  
//자가진단 7번
//    int i, j, n, s, n2=1; //i=행, j=열, n=줄 갯수, s=한 줄에 출력되는 숫자의 갯수, n2=숫자변수, alpha=영어변수
//    char alpha = 'A';
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(s=n; s>=i; s--)
//        {
//            printf("%2d", n2++);
//        }
//
//        for(j=1; j<=i; j++)
//        {
//            printf("%2c", alpha++);
//        }
//        printf("\n");
//    }
    
    
//    int i, j, n, s, n2=1; //i=행, j=열, n=줄 갯수, s=한 줄에 출력되는 숫자의 갯수, n2=숫자변수, alpha=영어변수
//    char alpha = 'A';
//    scanf("%d", &n);
//
//    for(i=1; i<=n; i++)
//    {
//        for(s=0; s<n-i+1; s++)
//        {
//            printf("%2d", n2++);
//        }
//
//        for(j=1; j<=i; j++)
//        {
//            printf("%2c", alpha++);
//        }
//        printf("\n");
//    }
    
    
//형성평가 1번
//    int i=0, n, sum=0;
//    float avg;
//
//    while(n!=0)
//    {
//        scanf("%d", &n);
//        sum+=n;
//        i++;
//
//        if(i==20)
//            break;
//    }
//
//    printf("%d ", sum);
//    avg=(float)sum/i;
//    printf("%.0f", avg);
    
    
//형성평가 2번
//    int i=1, n, result;
//    scanf("%d", &n);
//
//    for(i=1; ;i++)
//    {
//        result=n*i;
//        printf("%d ", result);
//
//        if(result>=100||result%10==0)
//            break;
//    }
    

//형성평가 3번
//    int n, i, j;
//    scanf("%d", &n);
//
//    for (i=1; i<=n; i++)
//    {
//       for (j=1; j<=i; j++)
//       {
//           printf("*");
//       }
//       printf("\n");
//    }
//
//    for (i=n-1; i>=1; i--)
//    {
//       for (j=1; j<=i; j++)
//       {
//          printf("*");
//       }
//       printf("\n");
//    }

    

//    int nArr[5];
//    int i, sum = 0;
//
//    nArr[0] = 10, nArr[1] = 20, nArr[2] = 30, nArr[3] = 40, nArr[4] = 50;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("nArr[%d] = %d\n", i, nArr[i]);
//
//    }

    
    
//    int i;
//    char arr[10];
//
//    for(i=0; i<10; i++)
//    {
//        scanf(" %c", &arr[i]);
//    }
//
//    for(i=0; i<10; i++)
//    {
//        printf("%c", arr[i]);
//    }
    
    
//    int i, arr[5];
//
//    for(i=0; i<5; i++)
//    {
//        scanf(" %d", &arr[i]);
//        printf("%d ", arr[i]);
//    }
    
    
//    int i;
//    char arr[5];
//
//    for(i=0; i<5; i++)
//    {
//        scanf(" %c", &arr[i]);
//    }
//
//    for(i=0; i<5; i++)
//    {
//        printf("%c ", arr[i]);
//    }
    
    
//    int cnt=0;
//    char sName[100], sNum[10];
//    printf("이름을 입력하세요 : ");
//    scanf("%s", sName);
//    printf("학번을 입력하세요 : ");
//    scanf("%s", sNum);
//
//    while(sName[cnt]!='\0')
//    {
//        cnt++;
//    }
//
//    printf("당신의 이름은 %s(%d글자)이고 학번은 %s입니다.\n", sName, cnt, sNum);
    
    
//    int i, arr[10], sum=0, avg;
//
//    for(i=0; i<10; i++)
//    {
//        scanf(" %d", &arr[i]);
//        sum+=arr[i];
//    }
//
//    avg=sum/i;
//
//    printf("입력한 수의 합계 : %d\n", sum);
//    printf("입력한 수의 평균 : %d", avg);
    
    

//    int i, arr[100];
//    for (i = 1; ; i++)
//    {
//        scanf(" %d", &arr[i]);
//        if(arr[i] == 0)
//        {
//            for (i = i - 1; i > 0; i--)
//                printf("%d ", arr[i]);
//        }
//    }

    
    
//    int i, arr[10], MAX;
//
//    for(i=0; i<10; i++)
//    {
//        scanf(" %d", &arr[i]);
//        if(MAX<=arr[i])
//            MAX=arr[i];
//    }
//
//    printf("%d", MAX);
    
    
//    int n, arr[100],i;
//    for (i=0; i<=99; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i]>=1000)
//            break;
//    }
//
//    for (n=arr[i]; i>=0; i--)
//    {
//        if (n>=arr[i])
//            n=arr[i];
//    }
//
//    printf("%d", n);
 
    
    
//    int i, arr[10], sum1=0, sum2=0;
//    double avg;
//
//    for (i=0; i<10; i++)
//    {
//        scanf(" %d", &arr[i]);
//
//        if(i%2==0)
//            sum2+=arr[i];
//
//        else
//            sum1+=arr[i];
//    }
//
//    avg=(double)sum2/5;
//
//    printf("sum : %d\n", sum1);
//    printf("avg : %.1lf", avg);
   
    
    
//오름차순
//    int i, j, temp, min, arr[5];
//
//    for (i=0; i<5; i++){
//        scanf("%d", &arr[i]);
//    }
//
//    for (i=0; i<=3; i++){
//        min=i;
//        for (j=i+1; j<=4; j++){
//            if (arr[j] < arr[min])
//                min=j;
//
//            if(min!=i){
//                temp=arr[min];
//                arr[min]=arr[i];
//                arr[i]=temp;
//            }
//            min=i;
//        }
//    }
//
//    for (i=0; i<5; i++){
//        printf("%d ", arr[i]);
//    }

    
    
//대소문자 전환
//    int i;
//    char arr[1000];
//    scanf("%s", arr);
//
//    for (i=0; i<1000; i++)
//    {
//        if (arr[i]>=65&&arr[i]<=90)
//            arr[i]+=32;
//
//        else if(arr[i]>=97&&arr[i]<=122)
//            arr[i]-=32;
//    }
//
//    printf("%s", arr);
    
    
//    char a[501];
//    int sum=0;
//    scanf("%s", a);
//
//    for (int i=0; a[i]!=0; i++) {
//        sum+=(int)a[i]-48;
//    }
//    if(sum%3==0)
//        printf("1");
//
//    else
//        printf("0");
    
    
//배열2 자1
//    char alpha;
//    int count[26] = { 0, };
//
//    int i;
//    while(1)
//    {
//        scanf(" %c", &alpha);
//        if (alpha >= 65 && alpha <= 90)
//            count[alpha-65]++;
//        else
//            break;
//    }
//
//    for (i = 0; i < 26; i++)
//    {
//        if (count[i] != 0)
//            printf("%c : %d\n", i + 65, count[i]);
//    }
    
    
//배열2 자2
//    int arr[100] = { 0, }, i, n;
//
//    for (i = 0; i < 100; i++)
//    {
//        scanf("%d", &n);
//        if (n == 0)
//            break;
//
//        arr[n / 10]++;
//    }
//
//    for (i = 0; i < 100; i++)
//    {
//        if (arr[i] > 0)
//            printf("%d : %d\n", i, arr[i]);
//
//    }
    
    
//배열2 자3
//    int arr[101] = { 100 }, n, i = 0;
//    scanf("%d", &n);
//    arr[1] = n;
//
//    for (i = 2; i < 100; i++)
//    {
//        arr[i] = arr[i - 2] - arr[i - 1];
//    }
//
//    for (i = 0; i < 100; i++)
//    {
//        printf("%d ", arr[i]);
//        if (arr[i] < 0)
//            break;
//
//    }
    
    
//배열2 자4
//    int arr[3][5] = {0, };
//    int i, j;
//
//    for (i=0; i<3 ; i++) {
//        for (j=0; j<5; j++) {
//            scanf("%d ", &arr[i][j]);
//        }
//    }
//
//    for (i=0; i<3; i++) {
//        for (j=0; j<5; j++) {
//            printf("%2d ", arr[i][j]);
//        }
//        printf("\n");
//    }
    
    
//배열2 자5
//    int arr1[2][4];
//    int arr2[2][4];
//    int i, j;
//    
//    printf("first array\n");
//    
//    for (i=0; i<2; i++) {
//        for (j=0; j<4; j++) {
//            scanf("%d", &arr1[i][j]);
//        }
//    }
//
//    printf("second array\n");
//    
//    for (i=0; i<2; i++) {
//        for (j=0; j<4; j++) {
//            scanf("%d", &arr2[i][j]);
//        }
//    }
//    
//    for (i=0; i<2; i++) {
//        for (j=0; j<4; j++) {
//            printf("%d ", arr1[i][j]*arr2[i][j]);
//        }
//        printf("\n");
//    }
    
    
//포인터
//    int arr[5] = {1, 2, 3, 4, 5};
//    int *p;
//
//    printf("%d\n", arr[0]);
//    printf("%p\n", arr);
//    printf("%p\n", arr+1);
    
    
    
//형성평가 8번
//    int i, arr[100], sum=0, count=0;
//    double avg;
//
//    for (i=0; i<100; i++)
//    {
//        scanf("%d", &arr[i]);
//
//        if(arr[i]==0)
//            break;
//
//        if(arr[i]%5==0){
//            sum+=arr[i];
//            count++;
//        }
//    }
//
//    avg=(double)sum/count;
//
//    printf("Multiples of 5 : %d\n", count);
//    printf("sum : %d\n", sum);
//    printf("avg : %.1lf", avg);
    
    
//배열2 형성평가 10번
//    int i, j;
//    char arr[3][5];
//
//    for (i=0; i<3; i++) {
//        for(j=0; j<5; j++)
//        {
//            scanf(" %c", &arr[i][j]);
//
//            if(arr[i][j]>=65&&arr[i][j]<=90)
//            {
//                arr[i][j]+=32;
//            }
//        }
//    }
//
//    for(i=0; i<3; i++)
//    {
//        for(j=0; j<5; j++)
//        {
//            printf("%c ",arr[i][j]);
//        }
//        printf("\n");
//    }
    
    
//배열2 형성평가 8번
//    int i, j;
//    int sum = 0;//for문마다 초기화 해주기
//    int arr[4][2];
//    for (int i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            scanf(" %d", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < 4; i++) {
//        sum = 0;
//        for (j = 0; j < 2; j++) {
//            sum += arr[i][j];
//        }
//        printf("%d ", sum / 2);
//    }
//    printf("\n");
//    for (j = 0; j < 2; j++) {
//        sum = 0;
//        for (i = 0; i < 4; i++) {
//            sum += arr[i][j];
//        }
//        printf("%d ", sum / 4);
//    }
//    printf("\n");
//    sum = 0;
//    for (int i = 0; i < 4; i++) {
//        for (j = 0; j < 2; j++) {
//            sum += arr[i][j];
//        }
//    }
//    printf("%d", sum / 8);

    
    
//다중 if문 작성 연습1
/*    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a<b&&b<c||c<b&&b<a)
        printf("%d", b);
    
    if(a<c&&c<b||b<c&&c<a)
        printf("%d", c);
    
    if(b<a&&a<c||c<a&&a<b)
        printf("%d", a);
*/
    
 
//    char str[18] = "Nice to meet you!!";
//    printf("%s", str);
    
    
//컴구 강민우T
//    int num, *p;
//    p=&num;
//    *p=5;
//    
//    printf("&num = %p, num = %d. \n", &num, num);
//    printf("p = %p, *p = %d, &p = %p\n", p, *p, &p);
//    
//    printf("sizeof(p) = %d.\n", sizeof(p));
//    printf("sizeof(*p) = %d.\n", sizeof(*p));
    
    
    
    
    
    
    return 0;
}
