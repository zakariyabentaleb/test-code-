 /* exercice 1 */

#include <stdio.h>
int main(){
 int T[]={1,2,3,4,5};
 for (int i = 0; i < 5; i++)
 printf("%d \n", T[i]);
 }

 /* exercice 2 */

#include <stdio.h>
int main(){
    int a;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < 5; i++){ 
    scanf("%d", &T[i]);
    }
    for (int i = 0; i < 5; i++){ 
    printf("%d", T[i]);
    }
 }

/* exercice 3 */

#include <stdio.h>
int main(){
    int a,s;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    for (int i = 0; i < a ; i++){ 
      s+=T[i];
    }
     printf("la somme est : %d ",s );
 }

/* exercice 4 */

#include <stdio.h>
int main(){
    int a,m;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    m=T[0];
    for (int i = 0; i < a ; i++){ 
       if (T[i]>m){
          m=T[i];
       }
    }
     printf("le max est : %d ",m);
 }

 /* exercice 5 */

int main(){
    int a,min;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    min=T[0];
    for (int i = 0; i < a ; i++){ 
       if (T[i]<m){
          m=T[i];
       }
    }
     printf("le max est : %d ",min);
 }

/* exercice 6 */
#include <stdio.h>
int main(){
    int a,n;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    printf("entrer le nombre de facteur ");
    scanf("%d",&n);
    for (int i = 0; i < a ; i++){ 
         printf(" %d \n" , n * T[i]);
    }
    return 0;  
 }

/* exercice 7 */

#include <stdio.h>
int main(){
    int T[6],c;
    for (int i = 0; i < 6; i++){ 
    scanf("%d", &T[i]);
    }
    for (int i = 0; i < 6; i++){ 
       if (T[i]<T[i+1]){ 
       c=T[i];
       T[i]=T[i+1];
       T[i+1]=c;
    }
    for (int i = 0; i < 6; i++){ 
    scanf("%d", &T[i]);
    }
 }
  }
/* exercice 8 */
#include <stdio.h>
int main(){
    int T[6],c;
    for (int i = 0; i < 6; i++){ 
    scanf("%d", &T[i]);
    }
    for (int j = 0; j < 5; j++){ 
        for (int i = 0; i < 5; i++)
       if (T[i]>T[i+1]){ 
       c=T[i];
       T[i]=T[i+1];
       T[i+1]=c;
    } }
    for (int i = 0; i < 6; i++){ 
    printf("%d", T[i]);
    }
 
  }

  /* exercice 9 */
#include <stdio.h>
int main(){
    int T1[6],T2[6];
    for (int i = 0; i < 6; i++){ 
    scanf("%d", &T1[i]);
    }
   for (int i = 0; i < 6; i++){
        T2[i]=T1[i];
    } 
    printf("Le tableau origin est \n :");
    for (int i = 0; i < 6; i++){ 
      printf("%d",T1[i]);
    }
     printf("\n Le tableau copie est \n :");
    for (int i = 0; i < 6; i++){ 
         printf("%d", T2[i]);
    }
     }
 /* exercice 10 */
 #include <stdio.h>
int main(){
    int a,n,f;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    printf("entrer element  a chercher ");
    scanf("%d",&n);
    for (int i = 0; i < a ; i++){ 
          if (T[i]==n)
          {
           f=1 ;
          }
          else
           f=0;
           }
    if (f=1) {
        printf("element est present") ;
    }
    else 
    printf("element est non present") ;
    return 0;  
 }

 /* exercice 11 */
 #include <stdio.h>
int main(){
    int a,n,n1;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
    }
    printf("entrer la valeur a remplacer ");
    scanf("%d",&n);
    printf("entrer la nouvelle valeur   ");
    scanf("%d",&n1);
    for (int i = 0; i < a ; i++){ 
         if (T[i]==n) { 
         T[i]=n1;
    } }
   for (int i = 0; i < a; i++){ 
    printf("%d", T[i]);
      
 }
 return 0;
 }

 /* exercice 12 */
 #include <stdio.h>
 int main(){
    int a;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
     }
   for (int i = 0; i < a; i++){ 
     if (T[i]%2==0)
      printf("\n%d\n",T[i]);
    }
    }
/* exercice 13 */
int main(){
    int a;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
     }
   for (int i = 0; i < a; i++){ 
     if (T[i]%2!=0)
      printf("\n%d\n",T[i]);
    }
    }
/* exercice 14 */
int main(){
    int a,s;
    float m;
    printf("entrer le nombre des element ");
    scanf("%d ",&a);
    int T[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T[i]);
     }
     m=0;
     s=0;
   for (int i = 0; i < a; i++){ 
      s+=T[i];
    }
   m=s/a;
    printf("%f",m);
    }
/* exercice 15 */
int main(){
    int a,b;
    printf("entrer le nombre des element  ");
    scanf("%d ",&a);
    int T1[a];
    for (int i = 0; i < a; i++){ 
    scanf("%d", &T1[i]);
     }
   printf("entrer le nombre des element  ");
    scanf("%d ",&b);
    int T2[a];
    for (int i = 0; i < b; i++){ 
    scanf("%d", &T2[i]);
     }
   int c=a+b;
   int T3[c];
   for (int i = 0; i < a; i++) {
        T3[i] = T1[i];
         } 
    for (int j = 0; j < b; j++) {
        T3[i + j] = T2[j];
    } 
    for (int i=0;i<c;i++){
      printf("%d",T3[i]);
    }

     }





