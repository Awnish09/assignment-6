
main()
{
     int a;
     printf("Enter a three digit number.\n");
     scanf("%d",&a);
     a/=10;
     a%=10;
     printf("The middle digit of the number is %d",a);
     getch();
}
