#include<stdio.h>

int main()
{
	FILE *fp;
	/**
	  *	r	打开文件，进行读取。
	  *	w	创建文件，以进行写入。如果文件已经存在，则删除当前内容。
	  *	a	追加，打开或创建文件以在文件尾部写入。
	  *	r+	打开文件以进行更新(读取和写入)。
	  *	w+	创建文件以进行更新。如果文件已经存在，则删除当前内容。
	  * a+	追加，打开或者创建文件以进行更新，在文件尾部写入。
	  */
	fp=fopen("write.txt","r");
	if(fp == NULL)   
	{
		printf("Cannot open file!");
	}
	char content[128];
	while(fgets(content,128,fp) != NULL){
		printf("%s",content);
	}
	fclose(fp);
	return 0;
}