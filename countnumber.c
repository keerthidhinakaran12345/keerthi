int numberSentence(char ch[])
{
    int count=0, i=0;
    while(ch[i] != '\0')
    {
        if(ch[i] == '.' || ch[i] == '?' || ch[i] == '!')
            count++;
        i++;
    }
    return count;
}
int main()
{
    char ch[999];
    printf("Enter sentences:\n");
    scanf("%s", ch);
    printf("Number of sentences is %d", numberSentence(ch));
}
