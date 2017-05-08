#include < stdio . h > #include < math . h > #include < string . h > #include < stdlib . h > #include < stdbool . h > #define val 2  #define MAX_DESC 4  FILE * fileTableData ;
char buffer [ 9 ] ;
int totalGenCount ;
int usefullData = 0 ;
typedef struct 
  {
    char initialGene [ MAX_DESC ] ;
    char finalGene [ MAX_DESC ] ;
    double value ;
  }
relation ;
int chainsUsed ;
int activeChains [ 100 ] ;
int relationsInChain [ 100 ] ;
relation chains [ 100 ] [ 100 ] ;
void fillBuffer  (int _val ) 
  {
    if  (strlen  (buffer ) == 0 ) 
      {
        char dato =  (char ) _val ;
        char auxiliar [ ] = 
          {
            dato , '\0'           }
        ;
        strcat  (buffer , auxiliar ) ;
      }
    else 
      {
        char dato =  (char ) _val ;
        char auxiliar [ ] = 
          {
            dato , '\0'           }
        ;
        strcat  (buffer , auxiliar ) ;
      }
      }
void cleanBuffer  () 
  {
    memset  (buffer , '\0' , strlen  (buffer ) ) ;
  }
int escaner  () 
  {
    cleanBuffer  () ;
    int ch ;
    while  (feof  (fileTableData ) == 0 ) 
      {
        ch = fgetc  (fileTableData ) ;
        if  (ch == '\n' ) 
          {
            return 0 ;
          }
        if  (ch == ';' ) 
          {
            return 1 ;
          }
        fillBuffer  (ch ) ;
      }
    return 0 ;
  }
int countObjectsFiles  (char * address ) 
  {
    fileTableData = fopen  (address , "r" ) ;
    int ch ;
    while  (feof  (fileTableData ) == 0 ) 
      {
        ch = fgetc  (fileTableData ) ;
        if  (ch == '\n' ) 
          {
            break ;
          }
        if  (ch == ';' ) 
          {
            totalGenCount ++ ;
          }
              }
    fclose  (fileTableData ) ;
    return totalGenCount ;
  }
void readFile  (char Data [ totalGenCount ] [ totalGenCount ] [ 5 ] , char * address , char header [ totalGenCount ] [ 30 ] ) 
  {
    fileTableData = fopen  (address , "r" ) ;
    int startData = 0 ;
    int c ;
    int columns = 0 ;
    int rows = 0 ;
    while  (rows < totalGenCount + 1 && feof  (fileTableData ) == 0 ) 
      {
        while  (columns < totalGenCount + 1 ) 
          {
            c = escaner  () ;
            if  (startData == 1 && c == 1 ) 
              {
                char * data = malloc  (5 ) ;
                strcpy  (data , buffer ) ;
                strcpy  (Data [ rows - 1 ] [ columns ] , data ) ;
              }
            if  (startData == 0 && c == 1 ) 
              {
                strcpy  (header [ columns ] , buffer ) ;
              }
            if  (startData == 0 && c == 0 ) 
              {
                startData = 1 ;
              }
            columns ++ ;
          }
        columns = 0 ;
        rows ++ ;
      }
      }
bool checkTableData  (double probabilities [ totalGenCount ] [ totalGenCount ] ) 
  {
    int good [ 3 ] = 
      {
        1 , 1 , 1       }
    ;
    int i , j ;
    int mentioned [ totalGenCount ] ;
    for  (i = 0 ;
    i < totalGenCount ;
    i ++ ) 
      {
        for  (j = 0 ;
        j < totalGenCount ;
        j ++ ) 
          {
            if  (i != j ) 
              {
                if  (probabilities [ i ] [ j ] < 0 || probabilities [ i ] [ j ] > 1 ) 
                  {
                    good [ 0 ] = 0 ;
                  }
                if  (probabilities [ i ] [ j ] != probabilities [ j ] [ i ] ) 
                  {
                    good [ 1 ] = 0 ;
                  }
                if  (probabilities [ i ] [ j ] != - 1 ) 
                  {
                    mentioned [ i ] = 1 ;
                    mentioned [ j ] = 1 ;
                    usefullData = 0 ;
                  }
                              }
                      }
              }
    for  (i = 0 ;
    i < totalGenCount ;
    i ++ ) 
      {
        if  (mentioned [ i ] == 0 ) 
          {
            good [ 2 ] = 0 ;
          }
              }
    if  (good [ 0 ] == 1 && good [ 1 ] == 1 && good [ 2 ] == 1 ) 
      {
        return true ;
      }
    else 
      {
        return false ;
      }
      }
void printString  (char string [ ] ) 
  {
    int i = 0 ;
    while  (string [ i ] != '\0' ) 
      {
        printf  ("%c" , string [ i ] ) ;
        i ++ ;
      }
      }
void printRelation  (relation pRelation ) 
  {
    printString  (pRelation . initialGene ) ;
    printf  ("  --  " ) ;
    printString  (pRelation . finalGene ) ;
    printf  ("  --  " ) ;
    printf  ("%lf\n" , pRelation . value ) ;
  }
void printChain  (relation chain [ ] , int size ) 
  {
    for  (int i = 0 ;
    i < size ;
    i ++ ) 
      {
        printRelation  (chain [ i ] ) ;
      }
      }
void copyString  (char str1 [ ] , char str2 [ ] ) 
  {
    for  (int i = 0 ;
    i < MAX_DESC ;
    i ++ ) 
      {
        str1 [ i ] = str2 [ i ] ;
      }
      }
void copyString2  (char str1 [ ] , const char str2 [ ] ) 
  {
    for  (int i = 0 ;
    i < MAX_DESC ;
    i ++ ) 
      {
        str1 [ i ] = str2 [ i ] ;
      }
      }
int compareDoubles  (const void * a , const void * b ) 
  {
    return  (*  (double * ) a - *  (double * ) b ) ;
  }
int compareRelations  (const void * a , const void * b ) 
  {
    relation f = *  ( (relation * ) a ) ;
    relation s = *  ( (relation * ) b ) ;
    if  (f . value > s . value ) return - 1 ;
    if  (f . value < s . value ) return 1 ;
    return 0 ;
  }
void findChains  (relation * relations , int relationsAmount ) 
  {
    chainsUsed = 0 ;
    int i , j , k , y , n , m , dummy , varTemporal , newArray , newArray2 , newSize , posInitialGene , posFinalGene , chainsToAdd , toIgnore ;
    bool joinedToChain ;
    relation currentRelation ;
    for  (i = 0 ;
    i < relationsAmount ;
    i ++ ) 
      {
        toIgnore = 0 ;
        chainsToAdd = 0 ;
        currentRelation = relations [ i ] ;
        if  ( (strlen  (currentRelation . initialGene ) == 0 && strlen  (currentRelation . finalGene ) == 0 && currentRelation . value == 0 ) || currentRelation . value < 0 ) 
          {
            break ;
          }
        joinedToChain = false ;
        for  (j = 0 ;
        j < chainsUsed ;
        j ++ ) 
          {
            relation * currentChain = chains [ j ] ;
            if  (activeChains [ j ] == 1 ) 
              {
                posInitialGene = - 1 ;
                posFinalGene = - 1 ;
                for  (k = 0 ;
                k < relationsInChain [ j ] ;
                k ++ ) 
                  {
                    if  (strcmp  (currentRelation . initialGene , currentChain [ k ] . initialGene ) == 0 ) 
                      {
                        posInitialGene = k ;
                      }
                    if  (strcmp  (currentRelation . finalGene , currentChain [ k ] . initialGene ) == 0 ) 
                      {
                        posFinalGene = k ;
                      }
                                      }
                if  (posInitialGene == - 1 ) 
                  {
                    posInitialGene = - 1 ;
                    posFinalGene = - 1 ;
                    char temp [ MAX_DESC ] ;
                    copyString  (temp , currentRelation . initialGene ) ;
                    copyString  (currentRelation . initialGene , currentRelation . finalGene ) ;
                    copyString  (currentRelation . finalGene , temp ) ;
                    for  (k = 0 ;
                    k < relationsInChain [ j ] ;
                    k ++ ) 
                      {
                        if  (strcmp  (currentRelation . initialGene , currentChain [ k ] . initialGene ) == 0 ) 
                          {
                            posInitialGene = k ;
                          }
                        if  (strcmp  (currentRelation . finalGene , currentChain [ k ] . finalGene ) == 0 ) 
                          {
                            posFinalGene = k ;
                          }
                                              }
                                      }
                if  (posInitialGene == - 1 && posFinalGene == - 1 ) 
                  {
                    toIgnore ++ ;
                    continue ;
                  }
                else if  (posInitialGene != - 1 && posFinalGene != - 1 && posInitialGene != posFinalGene ) 
                  {
                    int minVal , maxVal ;
                    if  (posInitialGene - posFinalGene < 0 ) 
                      {
                        minVal = posInitialGene ;
                        maxVal = posFinalGene ;
                      }
                    else 
                      {
                        minVal = posFinalGene ;
                        maxVal = posInitialGene ;
                      }
                    double value = 0 ;
                    for  (minVal ;
                    minVal < maxVal ;
                    minVal ++ ) 
                      {
                        value += currentChain [ minVal ] . value ;
                      }
                    if  (value > 2.5 * currentRelation . value || value * 2.5 < currentRelation . value ) 
                      {
                        activeChains [ j ] = 0 ;
                      }
                    joinedToChain = true ;
                  }
                else if  (abs  (posInitialGene - posFinalGene ) == 1 && posFinalGene != - 1 && posInitialGene != - 1 ) 
                  {
                    int minVal ;
                    if  (posInitialGene - posFinalGene < 0 ) 
                      {
                        minVal = posInitialGene ;
                      }
                    else 
                      {
                        minVal = posFinalGene ;
                      }
                    if  (currentChain [ minVal ] . value > 2.5 * currentRelation . value || 2.5 * currentChain [ minVal ] . value < currentRelation . value ) 
                      {
                        activeChains [ j ] = 0 ;
                      }
                    joinedToChain = true ;
                  }
                else if  (posInitialGene != - 1 && posFinalGene == - 1 ) 
                  {
                    dummy = j ;
                    varTemporal = relationsInChain [ j ] ;
                    newArray = chainsUsed +  ( (dummy - toIgnore ) * 2 ) ;
                    newArray2 = newArray + 1 ;
                    relation r [ 100 ] , r2 [ 100 ] ;
                    m = 0 ;
                    n = 0 ;
                    newSize = varTemporal + 1 ;
                    while  (n < varTemporal ) 
                      {
                        if  (m == posInitialGene ) 
                          {
                            double tempValue = currentRelation . value ;
                            double sum = currentChain [ n ] . value ;
                            int counter = 0 ;
                            while  (sum < currentRelation . value && n < varTemporal ) 
                              {
                                copyString  (r [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                                copyString  (r [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                                r [ m ] . value = currentChain [ n ] . value ;
                                n ++ ;
                                m ++ ;
                                counter ++ ;
                                if  (sum < 1 ) 
                                  {
                                    if  (currentChain [ n ] . value > 0.5 ) 
                                      {
                                        sum = r [ m ] . value ;
                                      }
                                    else 
                                      {
                                        sum += r [ m ] . value ;
                                      }
                                                                      }
                                else 
                                  {
                                    if  (currentChain [ n ] . value > 0.5 ) 
                                      {
                                        sum +=  (r [ m ] . value - 1 ) ;
                                      }
                                                                      }
                                                              }
                            if  (sum >= currentRelation . value ) 
                              {
                                if  (sum < 1 ) 
                                  {
                                    sum -= r [ m ] . value ;
                                  }
                                else 
                                  {
                                    sum -=  (r [ m ] . value - 1 ) ;
                                  }
                                if  (tempValue > 0.5 ) 
                                  {
                                    tempValue += 0.5 ;
                                  }
                                if  (counter != 0 ) 
                                  {
                                    tempValue -= sum ;
                                  }
                                copyString  (r [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                                copyString  (r [ m ] . finalGene , currentRelation . finalGene ) ;
                                r [ m ] . value = tempValue ;
                                m ++ ;
                                if  (posInitialGene == varTemporal - 1 ) 
                                  {
                                    copyString  (r [ m ] . initialGene , currentRelation . finalGene ) ;
                                    copyString  (r [ m ] . finalGene , "**" ) ;
                                    r [ m ] . value = 0 ;
                                    m ++ ;
                                    n ++ ;
                                  }
                                else 
                                  {
                                    copyString  (r [ m ] . initialGene , currentRelation . finalGene ) ;
                                    copyString  (r [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                                    double valu = currentChain [ n ] . value ;
                                    if  (valu > 0.5 ) 
                                      {
                                        if  (tempValue > 0.5 ) 
                                          {
                                            r [ m ] . value = valu -  (tempValue + 0.5 ) + 1 ;
                                          }
                                        else 
                                          {
                                            r [ m ] . value = valu ;
                                          }
                                                                              }
                                    else 
                                      {
                                        r [ m ] . value = valu - tempValue ;
                                      }
                                    m ++ ;
                                    n ++ ;
                                  }
                                                              }
                            else 
                              {
                                m -- ;
                                copyString  (r [ m ] . finalGene , currentRelation . finalGene ) ;
                                r [ m ] . value = currentRelation . value - sum ;
                                m ++ ;
                                copyString  (r [ m ] . initialGene , currentRelation . finalGene ) ;
                                copyString  (r [ m ] . finalGene , "**" ) ;
                                r [ m ] . value = 0 ;
                                m ++ ;
                              }
                                                      }
                        else 
                          {
                            copyString  (r [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                            copyString  (r [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                            r [ m ] . value = currentChain [ n ] . value ;
                            n ++ ;
                            m ++ ;
                          }
                                              }
                    n = varTemporal - 1 ;
                    m = varTemporal ;
                    bool added = false ;
                    while  (m >= 0 ) 
                      {
                        if  (posInitialGene == 0 ) 
                          {
                            if  (m == 0 ) 
                              {
                                copyString  (r2 [ m ] . initialGene , currentRelation . finalGene ) ;
                                copyString  (r2 [ m ] . finalGene , currentRelation . initialGene ) ;
                                r2 [ m ] . value = currentRelation . value ;
                                if  (currentRelation . value > 0.5 ) 
                                  {
                                    r2 [ m ] . value += 0.5 ;
                                  }
                                m -- ;
                                added = true ;
                              }
                            else 
                              {
                                added = false ;
                              }
                                                      }
                        else 
                          {
                            if  (m == posInitialGene ) 
                              {
                                double tempValue = currentRelation . value ;
                                double sum = currentChain [ n ] . value ;
                                int counter = 0 ;
                                while  (sum < currentRelation . value && n >= 0 ) 
                                  {
                                    copyString  (r2 [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                                    copyString  (r2 [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                                    r2 [ m ] . value = currentChain [ n ] . value ;
                                    n -- ;
                                    m -- ;
                                    counter ++ ;
                                    sum += r2 [ m ] . value ;
                                  }
                                if  (sum >= currentRelation . value ) 
                                  {
                                    sum -= r2 [ m ] . value ;
                                    if  (counter != 0 ) 
                                      {
                                        tempValue -= sum ;
                                      }
                                    copyString  (r2 [ m ] . initialGene , currentRelation . finalGene ) ;
                                    copyString  (r2 [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                                    r2 [ m ] . value = tempValue ;
                                    m -- ;
                                    copyString  (r2 [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                                    copyString  (r2 [ m ] . finalGene , currentRelation . finalGene ) ;
                                    r2 [ m ] . value = currentChain [ n ] . value - tempValue ;
                                    m -- ;
                                    n -- ;
                                    added = true ;
                                  }
                                else 
                                  {
                                    copyString  (r2 [ m ] . initialGene , currentRelation . finalGene ) ;
                                    copyString  (r2 [ m ] . finalGene , currentChain [ 0 ] . initialGene ) ;
                                    r2 [ m ] . value = currentRelation . value - sum ;
                                    m -- ;
                                    added = true ;
                                  }
                                                              }
                            else 
                              {
                                added = false ;
                              }
                                                      }
                        if  (! added ) 
                          {
                            copyString  (r2 [ m ] . initialGene , currentChain [ n ] . initialGene ) ;
                            copyString  (r2 [ m ] . finalGene , currentChain [ n ] . finalGene ) ;
                            r2 [ m ] . value = currentChain [ n ] . value ;
                            n -- ;
                            m -- ;
                          }
                                              }
                    double val11 = 0 , val12 = 0 ;
                    double val21 = 0 , val22 = 0 ;
                    for  (int h = 0 ;
                    h < newSize ;
                    h ++ ) 
                      {
                        copyString  (chains [ newArray ] [ h ] . initialGene , r [ h ] . initialGene ) ;
                        copyString  (chains [ newArray ] [ h ] . finalGene , r [ h ] . finalGene ) ;
                        double tempValue = r [ h ] . value ;
                        chains [ newArray ] [ h ] . value = tempValue ;
                        if  (tempValue > 0.5 ) 
                          {
                            tempValue = tempValue - 1 ;
                            val12 = val12 + tempValue ;
                          }
                        else 
                          {
                            val11 = val11 + tempValue ;
                          }
                        copyString  (chains [ newArray2 ] [ h ] . initialGene , r2 [ h ] . initialGene ) ;
                        copyString  (chains [ newArray2 ] [ h ] . finalGene , r2 [ h ] . finalGene ) ;
                        double tempValue2 = r2 [ h ] . value ;
                        chains [ newArray2 ] [ h ] . value = tempValue2 ;
                        if  (tempValue2 > 0.5 ) 
                          {
                            tempValue2 = tempValue2 - 1 ;
                            val22 = val22 + tempValue2 ;
                          }
                        else 
                          {
                            val21 = val21 + tempValue2 ;
                          }
                                              }
                    relationsInChain [ newArray ] = newSize ;
                    relationsInChain [ newArray2 ] = newSize ;
                    activeChains [ dummy ] = 0 ;
                    if  (val11 > 0.5 || val12 > 0.5 ||  (val11 == 0 && val12 == 0 ) ) 
                      {
                        activeChains [ newArray ] = 0 ;
                      }
                    else 
                      {
                        activeChains [ newArray ] = 1 ;
                      }
                    if  (val21 > 0.5 || val22 > 0.5 ||  (val21 == 0 && val22 == 0 ) ) 
                      {
                        activeChains [ newArray2 ] = 0 ;
                      }
                    else 
                      {
                        activeChains [ newArray2 ] = 1 ;
                      }
                    chainsToAdd += 2 ;
                    y ++ ;
                    joinedToChain = true ;
                  }
                else if  (posInitialGene != - 1 && posFinalGene != - 1 && posInitialGene != posFinalGene ) 
                  {
                    activeChains [ j ] = 0 ;
                    joinedToChain = true ;
                  }
                              }
            else 
              {
                toIgnore ++ ;
              }
                      }
        if  (joinedToChain == false ) 
          {
            if  (currentRelation . value > 0.001 ) 
              {
                copyString  (chains [ chainsUsed ] [ 0 ] . initialGene , currentRelation . initialGene ) ;
                copyString  (chains [ chainsUsed ] [ 0 ] . finalGene , currentRelation . finalGene ) ;
                chains [ chainsUsed ] [ 0 ] . value = currentRelation . value ;
                if  (currentRelation . value > 0.5 ) 
                  {
                    chains [ chainsUsed ] [ 0 ] . value += 0.5 ;
                  }
                copyString  (chains [ chainsUsed ] [ 1 ] . initialGene , currentRelation . finalGene ) ;
                copyString  (chains [ chainsUsed ] [ 1 ] . finalGene , "**" ) ;
                chains [ chainsUsed ] [ 1 ] . value = 0 ;
                relationsInChain [ chainsUsed ] = 2 ;
                activeChains [ chainsUsed ] = 1 ;
                chainsToAdd = 1 ;
              }
                      }
        chainsUsed += chainsToAdd ;
      }
    printf  ("\nCURRENT CHAINS: %i\n" , chainsUsed ) ;
    for  (int t = 0 ;
    t < chainsUsed ;
    t ++ ) 
      {
        printf  ("Chain %i with %i relations: " , t , relationsInChain [ t ] ) ;
        if  (activeChains [ t ] == 1 ) 
          {
            printf  ("ACTIVE\n" ) ;
          }
        else 
          {
            printf  ("INNACTIVE\n" ) ;
          }
        printChain  (chains [ t ] , relationsInChain [ t ] ) ;
        printf  ("\n\n" ) ;
      }
    printf  ("END HERE\n" ) ;
    relationsInChain [ 0 ] = chainsUsed ;
  }
void createCromosmomeMaps  (relation * relations , int size ) 
  {
    qsort  (relations , size , sizeof  (relation ) , compareRelations ) ;
    findChains  (relations , size ) ;
  }
