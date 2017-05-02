MazeWalker * walker =  (int * ) param ;
MazeWalker * walker =  (MazeWalker * ) param ;
void include  (FILE * archivoActual , FILE * archivoTemporal , int ntoken , FILE * nombre ) 
  {
    printf  ("Entra al include. \n" ) ;
    char * includeArreglado ;
    ntoken = nextToken  () ;
    if  (ntoken == 7 ) 
      {
        numIncludes ++ ;
        FILE * siguienteArchivo ;
        includeArreglado = modificarInclude  (yytext ) ;
        if  (existeInclude  (includeArreglado ) == false ) 
          {
            includes [ numIncludes ] = includeArreglado ;
            siguienteArchivo = fopen  (includeArreglado , "r" ) ;
            yyin = siguienteArchivo ;
            preprocesador1  (siguienteArchivo , archivoTemporal ) ;
            fclose  (siguienteArchivo ) ;
            includes [ numIncludes ] = "" ;
            numIncludes -- ;
            yyin = archivoActual ;
          }
        else 
          {
            printf  ("Inclusión duplicada de %s" , includeArreglado ) ;
          }
              }
    printf  ("Salio: %d\n" , ntoken ) ;
  }
