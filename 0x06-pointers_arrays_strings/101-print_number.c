void printnumber(int i)
{
    if(i/10!=0)
    {
        printnumber(i/10);
        if ( i > 0 )
        {
           putchar(i%10 + '0');
        }
        else
        {
           putchar(-i%10 + '0');
        }
    }
    else if((i/10==0) && (i%10!=0) && (i>0))
    {
        putchar(i%10 + '0');
    }
    else if((i/10==0) && (i%10!=0) && (i<=0))
    {
        putchar('-');
        putchar(-i%10+'0');
    }    
}
