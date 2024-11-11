int ft_atoi(const char *str)
{
    int result;
    int sign;
    int i;
    result = 0;
    sign = 1;
    i = 0;
    while((9<=str[i] && str[i]<=13) || str[i]==32)
        i++;
    if(str[i]=='+' || str[i]=='-')
    {
        if(str[i]=='-')
            sign*=-1;
        i++;
    }
    while('0'<=str[i] && str[i]<='9')
    {
        result=10*result+(str[i]-'0');
        i++;
    }
    return(result*sign);
}