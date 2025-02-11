#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "pair.h"

struct s_pair_t{
    int fst;
    int snd;
};

pair_t pair_new(int x, int y){
    pair_t q=malloc(sizeof(struct s_pair_t));;
    q->fst=x;
    q->snd=y;
    assert(q->fst==x && q->snd==y);
    return q;
}

int pair_first(pair_t p){
    assert(p!=NULL);
    int fst;
    fst=p->fst;
    assert(fst==p->fst);
    return fst;
}

int pair_second(pair_t p){
    assert(p->fst != 0 && p->snd != 0);
    int snd;
    snd=p->snd;
    assert(snd==p->snd);
    return snd;
}

pair_t pair_swapped(pair_t p){
    assert(p!=NULL);
    pair_t q=malloc(sizeof(struct s_pair_t));;
    q->fst=p->snd;
    q->snd=p->fst;
    assert(pair_first(q) == pair_second(p) && pair_second(q) == pair_first(p));
    return q;
}

pair_t pair_destroy(pair_t p){
    free(p);
    return p;
}