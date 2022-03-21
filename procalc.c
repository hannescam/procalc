#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
float val;
int set;
float pro;

void main (){
  printf("0: Grundwert ausrechnen\n1: Prozentwert ausrechnen\n2: Prozentsatz ausrechnen\nAuswahl: ");
  scanf("%d", &set);
  if(set == 0){
    printf("Prozentsatz: ");
    scanf("%f", &pro);
    printf("Prozentwert: ");
    scanf("%f", &val);
    printf("0: Prozentsatz unter hundert\n1: Prozentsatz über hundert\nAuswahl: ");
    scanf("%d", &set);
    if(set == 0){
       if(pro > 100){
          printf("Fehler: Prozentsatz ist über hundert!\n");
          exit(1);
       }
    }
    val=val/pro;
    val=val*100;
    printf("Ergebnis: ");
    printf("%f", val);
    printf("\n");

  } else if(set == 1){
    printf("Prozentsatz: ");
    scanf("%f", &pro);
    printf("Grundwert: ");
    scanf("%f", &val);
    printf("0: Prozentsatz unter hundert\n1: Prozentsatz über hundert\nAuswahl: ");
    scanf("%d", &set);
    if(set == 0){
       if(pro > 100){
          printf("Fehler: Prozentsatz ist über hundert!\n");
          exit(1);
       }
    }
  
    val=val/100;
    val=val*pro;
    printf("Ergebnis: ");
    printf("%f", val);
    printf("\n");
  } else {
    printf("Prozentwert: ");
    scanf("%f", &pro);
    printf("Grundwert: ");
    scanf("%f", &val);
    val=100/val;
    val=val*pro;
    printf("Ergebnis: ");
    printf("%f", val);
    printf("\n");

  }
}
