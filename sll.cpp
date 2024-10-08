#include "sll.h"
#include <iostream>
using namespace std;

void Create_List(List& L)
{
    First(L) = NULL;
}

adr New_Elemen(infotype data)
{
    adr p = new elmList;
    info(p) = data;
    next(p) = NULL;

    return p;
}

void Insert_First(List& L, elmList* p)
{
    next(p) = First(L);
    First(L) = p;
}

void Insert_Last(List& L, elmList* p)
{
    adr Q;
    Q = First(L);
    while (next(Q) != NULL){
        Q = next(Q);
    }
    next(Q) = p;
}

void Insert_After(List& L, elmList* prec, elmList* p)
{
    next(p) = next(prec);
    next(prec) = p;
}

void Delete_First(List& L, elmList*& p)
{
    p = First(L);
    First(L) = next(p);
    next(p) = NULL;
}

void Delete_Last(List& L, elmList*& p)
{
    adr Q;
    Q = First(L);
    while(next(next(Q)) != NULL){
        Q = next(Q);
    }
    p = next(Q);
    next(Q) = NULL;
}

void Delete_After(List& L, elmList* prec, elmList*& p)
{
    if(next(prec) != NULL){
        p = next(prec);
        next(prec) = next(p);
        next(p) = NULL;
    }else{
        p = NULL;
    }

}

void Show(List L)
{
    if(First(L) == NULL)
    {
        cout << "List Kosong" << endl;
    }else
    {
        adr p = First(L);
        cout << "ID " << " Hari" << " Total" << endl;
        while(p != NULL){
            cout << info(p).id_transaksi << "  " << info(p).hari_transaksi << "  " << info(p).total_transaksi << endl;
            p = next(p);
        }
    }

}

adr SearchByID(List L, int id)
{
    adr p, q;
    q = NULL;
    p = First(L);
    while(p != NULL)
    {
        if(info(p).id_transaksi == id){
            q = p;
        }
        p = next(p);
    }
    return q;
}

void SortByTotal(List& L)
{
    if (First(L) != NULL) {
        adr P, Q, Sorted = NULL;
        while (First(L) != NULL) {
            P = First(L);
            First(L) = next(First(L));
            if (Sorted == NULL || info(Sorted).total_transaksi > info(P).total_transaksi) {
                next(P) = Sorted;
                Sorted = P;
            } else {
                Q = Sorted;
                while (next(Q) != NULL && info(next(Q)).total_transaksi < info(P).total_transaksi) {
                    Q = next(Q);
                }
                next(P) = next(Q);
                next(Q) = P;
            }
        }
        First(L) = Sorted;
    } else {
        cout << "List Kosong";
    }
}
