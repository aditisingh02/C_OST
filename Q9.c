#include<string.h>
main(){
   int i,j,n;
   char str[100][100],s[100];
   printf("Enter number of names: ");
   scanf("%d",&n);
   printf("Enter names in any order\n");
   for(i=0;i<n;i++){
      printf("Enter string %d: ",i+1);
      scanf("%s",&str[i]);
   }

   for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(s,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],s);
         }
      }
   }
   printf("The sorted order of names are:");
   for(i=0;i<n;i++){
      printf("%s ",str[i]);
   }
}