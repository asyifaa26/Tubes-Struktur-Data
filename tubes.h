#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) L.first
#define next(p) p->next
#define info(p) p->info
#define prev(p) p->prev
#define last(L) L.last

struct film{
    string judul;
    string genre;
    string sutradara;
    string durasi;
    string ratingUsia;
};

struct pelanggan {
    string id;
    int jumlahTiket;
};

typedef struct elmListSLL *adrSLL;
typedef struct elmListDLL *adrDLL;
typedef struct elmRelation *adrRelation;

struct elmListSLL {
    infotype info;
    adrSLL next:
    adrRelation nextRelation;
};

struct elmListDLL {
    infotype info;
    adrDLL prev;
    adrDLL next;
};

struct elmRelation{
    adrRelation next;
    adrSLL nextfilm;
};

struct ListSLL {
    adrSLL first;
};

struct ListDLL {
    adrDLL first;
    adrDLL last;
};

struct ListRelation {
    adrRelation first;
};

//SLL - Film
void creatSLLfilm(ListSLL &L);
adr newElementSLL(infotype data);
void insertFirstSLL(ListSLL &L, adrSLL p);
void insertLastSLL(ListSLL &L, adrSLL p);
void insertAfterSLL(ListSLL &L, adrSLL prec, adrSLL p);
void deleteFirstSLL(ListSLL &L);
void deleteLastSLL(ListSLL &L);
void deleteAfterSLL(ListSLL &L, adrSLL prec, adrSLL p);

//DLL - Pelanggan
void creatDLLpelanggan(ListDLL &L);
adr newElementSLL(infotype data);
void insertFirstDLL(ListDLL &L, adrDLL p);
void insertLastDLL(ListDLL &L, adrDLL p);
void insertAfteDSLL(ListDLL &L, adrDLL prec, adrDLL p);
void deleteFirstDLL(ListDLL &L);
void deleteLastDLL(ListDLL &L);
void deleteAfterDLL(ListDLL &L, adrDLL prec, adrDLL p);

//SLL-Relation


#endif // HEADER_H_INCLUDED
