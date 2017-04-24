#include <stdio.h>
#include <stdbool.h>
#include "myscanner.h"
#include "estructuras.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

extern FILE * yyin;
extern int yylex();
extern int yylineno;
extern int yyleng;

extern char* yytext;
extern int linea=1;
bool changeline=false;

/*
    Estas son las variables que serán accesibles durante todo el preprocesador
*/

/*****************************************************/
char *includes[] = {};     //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
struct defineS defines[100] = {};  //Tabla con las cadenas que representarán a los includes que se encuentren en el programa
int numIncludes = -1;      //Contador de los includes que se tendrán en el array de cadenas includes
int numDefines = 0;       //Contador de los defines que se tendrán en el array de structs defines
bool error  = false;       //Booleano que indica cuando se encuentra un error en el programa
bool preproceso = false;
/*****************************************************/


FILE *file;

int nextToken(void)
{    return yylex();
}





int scanner(void)
{
    int ntoken, vtoken;
    ntoken = nextToken();
    printf("%d\n",yyleng);
    while(ntoken) {
    	printf("%d\n", ntoken);
    	printf("%s\n", yytext);
        ntoken = nextToken();
	   
    }
    return 0;
}


int preprocesador1(FILE* archivoActual,FILE* archivoTemporal){	
    printf("Soy un rebelde\n");
    char *concatenar;
    int ntoken, vtoken;
    printf("Me voy a enciclar\n");
    ntoken = nextToken();
    printf("No me encicle\n");
    printf("%s\n", yytext);
    while(ntoken) {
        printf("Entra al ciclo\n");
    	if(ntoken==INCLUDE){
            printf("Entra include\n");
    		include(archivoActual,archivoTemporal);
             printf("Sale include\n");
    	}
    	else if (ntoken==DEFINE){
    		define(ntoken);
    		printf("SALE DEFINE\n");

    	}
    	else if (ntoken==IDENTIFIER && existeDefine(yytext)!=-1){
    		printf("Sustituye\n");
    		printf("%s\n", defines[existeDefine(yytext)].vDefine);
    		fputs(defines[existeDefine(yytext)].vDefine, archivoTemporal);
    		fputs(" ", archivoTemporal);

    	}
    	
    	else if(ntoken != COMMENT){
    		fprintf("Entro con:%s\n",yytext);
    	    printf("%d\n", ntoken);
    	    printf("%s\n", yytext);
        	fputs(yytext, archivoTemporal);
        	fputs(" ", archivoTemporal);
    	}
    	printf("INICIA\n");
        ntoken = nextToken();
        printf("TERMINA\n");
	   
    }
    return 0;
}



/*
    Función encargada de quitar los "" al literal del include
*/
char *modificarInclude(char *include){
    char *resultado;
    memmove(include, include+1, strlen(include)-1);
    include[strlen(include) - 2] = '\0';
    return include;
}

/*
    Función encargada de evaluar si ya existe un define en la tabla de definiciones
*/

int existeDefine(char *define) {
    for(int m = 0; m<numDefines; m++)
    {
        /*
            Si encontramos que el valor coincide con la tabla de defines, se retorna verdadero
            Función strcmp: se comparan los dos parámetros que recibe
        */
  
  
        if(strcmp(defines[m].palabra, define) == 0)
        {	
            return m;
        
        }

    }
    return -1;

}


/*
    Función encargada de evaluar si ya existe un include en la tabla de inclusiones
*/

bool existeInclude(char *include)
{

    for(int i = 0; i<numIncludes; i++)
    {

      /*Si encontramos que el valor coincide con la tabla de includes, se retorna verdadero*/
      /*función strcmp: se comparan los dos parámetros que recibe*/
      if(strcmp(includes[i], include) == 0)
      {
          return true;
      }

    }
    
    return false;

}





void include(FILE* archivoActual,FILE* archivoTemporal, int ntoken){
			printf("Entra al include. \n");
	        char *includeArreglado; //El valor del include sin los ""
            ntoken = nextToken(); //Se obtiene el siguiente token para evaluar 
           	
            /*
                Debido a que los define son literales
            */  

            if(ntoken == 7){
            
                
                numIncludes++;

                FILE* siguienteArchivo; //Se creará un nuevo archivo

                includeArreglado = modificarInclude(yytext); //Se obtiene el include sin ""
                


                /*
                    Si el include es diferente al archivo que lo invocó
                */

                if(existeInclude(includeArreglado) == false){
                    
                    includes[numIncludes] = includeArreglado; //Se agrega a la tabla
                    siguienteArchivo = fopen(includeArreglado, "r"); //Se pone en modo lectura, FALTA: función que quite los "" de un literal
                    
                
                    /*
                        Se le indica a flex cuál es el archivo actual que se está leyendo
                    */

                    yyin = siguienteArchivo; 
                  
                    preprocesador1(siguienteArchivo,archivoTemporal); //Se llama de nuevo a la función, pero esta vez con el siguiente archivo incluído
                    fclose(siguienteArchivo);
                    /*
                        Después de la llamada recursiva, se borra la inclusión
                    */
                    
                    includes[numIncludes] = ""; 
                    numIncludes--;

                    yyin =archivoActual; //Se le dice a flex cuál archivo se estará leyendo

                }
            

                /*
                    Si el include es igual al archivo que lo invocó
                */

                else{

                    printf("Inclusión duplicada de %s", includeArreglado); //Se notifica el error, revisar esta validación
                }
            }
            printf("Salio: %d\n",ntoken);
}
/*
    Función que se encarga de realizar las funcionalidades del preprocesador
*/
char* constantfolding(char* num, char* operator, char* num2){
	int n =atoi(num);
    int n2 =atoi(num2);
    printf("Num1: %d, Num2: %d y su operacion: %s\n", n, n2, operator);
    int result;
	if(strcmp(operator,"+")==0){
		result=n+n2;

	}
	else if(strcmp(operator,"-")==0){
		result=n-n2;

	}
	else if(strcmp(operator,"/")==0){
		result=n/n2;
	}
	else if(strcmp(operator,"*")==0){
		result=n*n2;

	}
	char *rfinal = (char*) malloc(sizeof(result));
    rfinal[0] = '\0';
    printf("Esta es la suma: %d\n", result);
	sprintf(rfinal,"%d",result);
	return rfinal;

}

int define(int ntoken){
	char* identifiers=NULL;
	ntoken=nextToken();
	int position=0;
	char *variable="";
	
	while(ntoken){
		if(strcmp(variable,"")==0 && ntoken==IDENTIFIER){
			printf("%s\n", yytext);
			variable=(char*)malloc(strlen(yytext));
			strcpy(variable,yytext);

		}
		else if(ntoken==INTEGER && strcmp(variable,"")!= 0 ){
			printf("%s\n", yytext);
			char *value= (char*) malloc(strlen(yytext));
			strcpy(value,yytext);
			
			ntoken=nextToken();
			if (ntoken==OPERATOR){
				char* operator=(char*)malloc(strlen(yytext));
				identifiers=(char*)realloc(identifiers, strlen(operator)+1);
                strcpy(operator,yytext);
				
				ntoken=nextToken();
				if(ntoken==INTEGER){;
					char* tmpnum=constantfolding(value,operator,yytext);
					identifiers=(char*)realloc(identifiers, strlen(tmpnum)+1);
					strcat(identifiers, tmpnum);
					strcat(identifiers, " ");

				}else{
					identifiers=(char*)realloc(identifiers, strlen(yytext)+1);
                    strcat(identifiers, value);
                    strcat(identifiers, " ");
                    strcat(identifiers, operator);
                    strcat(identifiers, " ");
		  			strcat(identifiers, yytext);
		  			strcat(identifiers, " ");
		  			position++;

				}
			}else{
				printf("Esta aqui\n");
                printf("Para ver el string %s\n", yytext);
				identifiers=(char*)realloc(identifiers, strlen(value)+strlen(yytext)+2);
				printf("JA NO ME CAI\n");
				strcat(identifiers, value);
				strcat(identifiers, " ");
				strcat(identifiers, yytext);
				strcat(identifiers, " ");
				printf("Sale strcat\n");
		  		position++;

			}
		}
		else if(strcmp(variable,"")==1 &&existeDefine(yytext)!=-1){
			char* tmp;
			printf("Sustituye define\n");
			tmp=(char*)malloc(strlen(defines[existeDefine(yytext)].vDefine));
			strcpy(tmp,defines[existeDefine(yytext)].vDefine);
			identifiers=(char*)realloc(identifiers, strlen(tmp)+1);
			strcat(identifiers,tmp);
			strcat(identifiers, " ");

		}
		else if (ntoken==ENDLINE){
			printf("SOy un salto de linea");
			break;
		}


		
		else if(strcmp(variable,"")!=0){
		  printf("Agrega token\n");
          printf("Tamano: %d y identificador: %s\n", strlen(yytext)+1, yytext);
          char* temp;
		  temp=(char*)realloc(identifiers, strlen(yytext)+1);
          if(temp)
            identifiers = temp;
            else
                printf("Mal puntero %p\n", temp);
          printf("Puntero que fallaa %p\n", identifiers);
		  strcat(identifiers, yytext);
		  strcat(identifiers, " ");
		  position++;
		}

		
        ntoken=nextToken();

    }
    
	

    defines[numDefines].palabra = (char*)malloc(strlen(variable));
    defines[numDefines].vDefine = (char*)malloc(strlen(identifiers));
    strcpy(defines[numDefines].palabra ,variable);
    printf("%s\n", defines[numDefines].palabra );
    strcpy(defines[numDefines].vDefine,identifiers);
    printf("%s\n", defines[numDefines].vDefine);
    numDefines++;
    printf("%d\n",numDefines);
    printf("Salio Ultimo\n");
	return 0;

}


void yyerror(char *texto,char *simbolo, int linea){
     
        printf(texto,simbolo,linea);
        
 

};

void imprimirArchivoEntrada(FILE *temporal){
    int in_char;
    while ((in_char = getc(temporal)) != EOF){
        putchar(in_char);
    } 
    putchar('\n');
}

void limpiarDocumento(char *f){
	fclose(fopen(f, "w"));
}



int main(int argc, char *argv[])
{
    

    /*
        Se valida que se hayan digitado los archivos de entrada en la terminal
    */
	
    if(argc == 1){

        printf("No se ingresó ningún archivo de entrada\n");
     
    }

    /*
        En este caso, se llama a las funcionalidades del preprocesador
    */
    else{
        printf("HOLA\n");
        FILE *archivoEntrada;
        FILE *tmpfile = fopen("tmpfile.c", "w");
        archivoEntrada  = fopen(argv[1], "r");
        
        /*
            Se le indica a flex cuál es el archivo actual que se está leyendo
        */
        yyin = archivoEntrada; 
       	printf("%d\n",yyleng);

        //scanner();
		if(tmpfile!=NULL){
			printf("Entra al diferente de null\n");
            //scanner();
            preprocesador1(archivoEntrada,tmpfile); //Se llama a la función del preprocesador con el archivo de entrada
        
	       	
	    }else{
	    	printf("Archivo esta nulo\n");
	    }

        printf("Termino\n");
        
        //fclose(archivoParaPreprocesar);
        
      
        fclose(tmpfile);
        fclose(archivoEntrada);
		//remove("tmpfile.c");    


        
     }


     /*
    FILE *f = leerArchivo(argv[1]);
    openfilepreprocess(f, argv[1]);
    if (error == false){

        FILE *temporal = fopen("config.c", "r");
        imprimirArchivoEntrada(temporal);
        //fclose(temporal);
        //scanner();
        //system("pdflatex main.tex");
        //system("evince --presentation main.pdf");
    }



    limpiarDocumento("config.c");*/


    return 0; 
}


