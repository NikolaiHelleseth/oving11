#include "Stopwatch.h"
#include "optimizationTask.h"
#include "test_func.h"
using std::cout, std::endl;

//  oppgave 1 består av mye testing, derfor har eg sletta og endra for å kunne eksperimenter
// kom fram til at shared_ptr er treigare enn unique_ptr grunnet at shared_ptr må ha kontroll på antall 
// antall refereanser, men det er ganske likt det kanskje ikkje så veldig rart med tanke på at det er vanleg 
// stack er raskare enn heap,
//  det viktigaste er at det er continiouse memory, då er det mye billigere å aksesere. altså at det er cheap cashe 

/*
2)
 når vectoren overskrider memory allocated lager den eit nytt array
 og kopierer og realokerer alle eksisterende data til det nye vectorern. Denne er dobblet i størrelse
 altså 1,2,4,8,16,32,64 osv. Dersom du allerede veit det fixerte størrelsen det er bedre å bruke array direkte.

 ved bruk av reserve(int num) slepper du dyr kopierer og realokerring for hver gang,
 samtidig som at du har muligheiten til å auke seinare ved behov. Men dersom du allerede veit
 nødvendig minne allokasjonen med kompeleringstid er det betre å bruke array. 

en milllion element 
ingenting -> time: 90.7132s
reserve -> time: 82.7101s
resize -> time: 82.9383

reserve og resize er ganske likt, men store forskjellen er når du ikkje gjer noe og kopierering og realokkering skjer ofte 

*/

/*
oppgave 3: 
ikkje optimalisert -> time: 7.01635

*/

int main() {
    // vector_test(20);                                          
    // std::vector<int> vec = vector_test_resize(20);
    // time(1, vector_test_resize, 1'000'000);
    // print_vec(vec);
    time(1,optimizationTask );
    return 0;
}
