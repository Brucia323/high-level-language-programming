/*在一对/** / 之间填空程序sample6.c，程序的功能是实现删除输入字符串中所有的字母 'b'。*/
/**/ #include /**/ <stdio.h> 
int main()
{
    char str[100];
    int /**/ i, j /**/;
    printf("Input string :");
    gets_s(str);
    for (i = j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != 'b')
        {
            str[j] = str[i];
            /**/ j++ /**/;
        }
    }
    str[j] = '\0';
    printf("Now string is:");
    puts(str);
    return 0;
}
