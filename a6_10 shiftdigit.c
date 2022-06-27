
main()
{
     int a,b;
     printf("Enter three digits number.\n");
     scanf("%d",&a);
     b=a%10;
     a=b*100+a/10;
     printf("%d",a);
     getch();
}
