void main()
{

    char a[20],t;
    int i,l;

    printf("Enter a string:");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++){
    t=a[i];
    a[i]=a[l-1-i];
    a[l-1-i]=t;
    }
    printf("Reverse String is:%s",a);

    getch();
}
