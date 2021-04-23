#include<stdio.h> 
#include<string.h>
#include<stdlib.h>


int main()
{

   FILE *fp;
   int MAXCHAR=100;
   int MAXCHAR2=100;
   char str[MAXCHAR];
   char stcopy[MAXCHAR2];


   fp = fopen("/home/karti/Desktop/Cprac/a11/file.csv", "r+"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   int lm=0;

   
 	while (fgets(str, MAXCHAR, fp) != NULL){

        int len=strlen(str);
        int j=0;
        char *stval;
        if(strstr(str, "A") != NULL){
        if(lm>0){
        strcpy(stcopy,str);
    	stval = strtok (stcopy,",");
    	int sum=0;
    	int i=0;
    	float finalsum=0;
    	str[strcspn(str, "\r\n")] = 0;
    	

   
        while(stval!=NULL){
        	int value=atoi(stval);
        	i=i+1;
        	if(i>2){
        		sum=sum+value;
        		finalsum=(float)sum/4;
        		
        		
        	}
        	stval=strtok(NULL,",");



        	
        	
        }

        	int MAX=10;
        	char buf[MAX];
        	char *pt1=buf;
        	*pt1=',';

        	gcvt(finalsum, 6, pt1+1);
        	strcat(str, buf);
        	printf("%s\n",str );

        

    }
    lm++;
}
}

    fclose(fp);
    exit(0);
   return 0;
}