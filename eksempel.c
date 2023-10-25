#include <stdio.h>

#include "cp.h"

hel hoved()                                                 {
    forhver(hel i = 0; i<10; i++)                           {
        skriv("din mor %d\n", i)                            ;
                                                            }

    skriv("Skriv et tal mellem 1-5: \n")                    ;

    hel nummer                                              ;
    læs("%d", &nummer)                                      ;

    knap(nummer)                                            {
        mulighed 1:
            skriv("din mor\n")                              ;
            ødlæg                                           ;
        mulighed 2:
            skriv("din far\n")                              ;
            ødlæg                                           ;
        mulighed 3:
            skriv("din bror\n")                             ;
            ødlæg                                           ;
        mulighed 4:
            skriv("din søster\n")                           ;
            ødlæg                                           ;
        mulighed 5:
            skriv("din fætter\n")                           ;
            ødlæg                                           ;
        standard:
            skriv("dårligt input... prøv igen\n")           ;
            ødlæg;
                                                            }

    returner 1                                              ;
                                                            }
