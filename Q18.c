 #include<stdio.h>
 int main()
 {
 char a[100];
 int vowel=0,consonant=0;
 printf("Enter a string: ");
 scanf("%s",&a);

 int len=strlen(a);

 for(int i=0;i<len;i++){
    if
     (a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
     {
     vowel++;
     }
    else
     {
     consonant++;
     }
 }

 printf("Number of vowels is %d",vowel);
 printf("Number of consonants is %d",consonant);
 return 0;
 }
