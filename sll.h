#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
#define First(L) L.First
#define next(P) P->next
#define info(P) P->info

using namespace std;
struct Transaksi
{
    int id_transaksi;
    string hari_transaksi;
    float total_transaksi;
};

typedef Transaksi infotype;
typedef struct elmList *adr;

struct elmList
{
    infotype info;
    adr next;
};

struct List
{
    adr First;
};

void Create_List(List& L);
adr New_Elemen(infotype data);
void Insert_First(List& L, elmList* p);
void Insert_Last(List& L, elmList* p);
void Insert_After(List& L, elmList* prec, elmList* p);
void Delete_First(List& L, elmList*& p);
void Delete_Last(List& L, elmList*& p);
void Delete_After(List& L, elmList* prec, elmList*& p);
void Show(List L);
void SortByTotal(List& L);
adr SearchByID(List L, int id);

#endif // SLL_H_INCLUDED
