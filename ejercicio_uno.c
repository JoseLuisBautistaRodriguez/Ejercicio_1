
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main (){
  int i, u, v, w, x, y, z;
  char str[101];
  i=0;
  x=0;
  y=0;
  z=0;
  w = 0;
  v = 0;
  u = 0;
  
  printf("Ingresa una frase: ");
  fgets(str, 101, stdin);
  
	while(str[i] != '\0'){
	
	if ( tolower(str[i]) == 'a'|| tolower(str[i]) == 'e'|| tolower(str[i]) == 'i'|| tolower(str[i]) == 'o'|| tolower(str[i]) == 'u' ){
		
		z++;
		u++;
	}
  	
  	if( isalnum(str[i]) ){
  		
  		x++;
  		u++;
  	}
	   	
  	if( isdigit(str[i]) ){
  		
  		y++;
  		u++;
  		
  	}
 	
  	i++;
  	u++;
  }  
  	
	w = z + y ;
	x = x - w ;
	
	printf("\nLa frase que has ingresado fue :\n");
	printf(str); 	printf("\n\n");
  
  printf ("La cantidad de vocales es de  %d.\n",z);
  printf ("La cantidad de numeros es de %d.\n",y);
  printf ("La cantidad de consonantes es de %d.\n",x);
  printf ("La cantidad de iteraciones fue %d.\n", u);
  
  return 0;
}
