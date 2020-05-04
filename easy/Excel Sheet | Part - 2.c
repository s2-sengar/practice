int ExcelColumnNumber(string s)
{
    int i,sum=0;
    while(s[i]!='\0')
    {
        int asci=s[i];
        sum=(26*sum)+(asci-64);
        i++;
    }
    return sum;
}
