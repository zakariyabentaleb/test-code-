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





