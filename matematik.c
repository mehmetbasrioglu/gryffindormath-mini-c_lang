// Kütüphaneler

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <ctype.h>
#include <process.h>

/*

   Yazıldığı Dil : C

   Bilgisayar Programcılığı öğrencileri için yapılmış basit bir uygulamadır
   Düzenleme yapılabilir geliştirebilir.

   Yazan Kişi : Mehmet Basrioğlu

*/

// fonksiyonlar
void temizle()
{
    system("@cls||clear");
}

void loader(void);
void loader2(void);
int main(){
 ShowWindow( GetConsoleWindow() , SW_MAXIMIZE);
    loader();
    system("cls");
      loader2();
    system("cls");
    printf("Gryffindor Math 0.5");
    MessageBox(NULL,"Yazilim baslatildi","Windows",NULL);
    hesaplamaislemleri();
   
    getch();
    return 0;
}


void gotoxy(int x, int y){
    COORD coord;
    coord.X = x; 
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int maksimum = 100;

void loader(){
    int r, q;
    gotoxy(10,14);
    system("color 1E");
    printf("Loading...");
    gotoxy(10,15);
    for(r=1; r<=maksimum;r++){
    
                sleep(0.8);

                
        printf("%c",177);
    }
}

void loader2(){
   
    system("cls");
    system("color 1E");
    int r, q;
    gotoxy(10,14);
    printf("Gryffindor math Starting...");
    gotoxy(10,15);
    for(r=1; r<=maksimum;r++){
    
                sleep(0.8);
        printf("%c",177);
    }
}


void hesaplamaislemleri(){
    int r, q, i,sayi2;
   
    system("color 1E");
    printf("\nToplama Islemi [1] / Cikarma [2] / Carpma [3] / Bolme [4] / Karesini Alma [5] / Ikilik(Binary) [6]\n");
      
    printf("Yapmak istediginiz islemi seciniz:");
                     if (scanf("%d", &r) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
    switch(r){
        case 1:
        
        printf("Toplama islemi secildi \n");

          printf("Birinci sayi gir: ");
                 
                           if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
                
          printf("\n");
         
              printf("Ikinci sayi gir:");
                    
                                    if (scanf("%d", &sayi2) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
                         
                 printf("\n");
              
                  printf("%d  + %d = %d",i,sayi2,i+sayi2);

        break;
                case 2:
                       
        printf("Cikarma islemi secildi \n");
        
          printf("Birinci sayi gir: \n");
                 
                           if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
               
          printf("\n");
              printf("Ikinci sayi gir: \n");
                      
                                   if (scanf("%d", &sayi2) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
                    
                     printf("\n");
              
                  printf("%d  - %d = %d",i,sayi2,i - sayi2);

       
                        break;
                        case 3:
                       
        printf("Carpma islemi secildi \n");

          printf("Birinci sayi gir: \n");
                  
                   if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
           
             printf("\n");
        
              printf("Ikinci sayi gir: \n");
               
                                    if (scanf("%d", &sayi2) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
                       
                  printf("\n");
              
                  printf("%d  * %d = %d",i,sayi2,i * sayi2);

       
                        break;
                         case 4:
        
        printf("Bolme islemi secildi \n");

          printf("Birinci sayi gir: \n");
        
                            if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
       
                printf("\n");
      
              printf("Ikinci sayi gir: \n");
     
                                 if (scanf("%d", &sayi2) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }
              
                   printf("\n");
          
                  printf("%d  / %d = %d",i,sayi2,i / sayi2);

       
                        break;
                        case 5:
      
        printf("Karesini alma islemi secildi \n");
 
          printf("Sayi gir: \n");
         

                   if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
        exit(0);
  
    }

              printf("\n");
        
                  printf("%d  * %d = %d",i,i,i*i);

       
                        break;
                        case 6:
                       
   
        printf("Binary islemi secildi \n");

          printf("Sayi gir: \n");
  
      
          if (scanf("%d", &i) != 1)
    {
        printf("Sadece sayi girebilirsin.\n");
  
    }
    else{
        

            OnluktanIkilige(i);
    }
            

       
                        break;
    }
    
}
void OnluktanIkilige(unsigned n)
{
         int  c, k;
         printf("Cevirilen sayi : %d\n",n);
  for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }
    }


