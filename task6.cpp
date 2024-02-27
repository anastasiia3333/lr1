#include <malloc.h>
#include <stdio.h>


typedef struct Nameval Nameval;
struct Nameval {
    char *name;
    int value;
    Nameval *next;
};
Nameval *newitem(char *name, int value){
    Nameval *newp;
    newp = (Nameval*) malloc(sizeof (Nameval));
    newp ->name = name;
    newp ->value = value;
    newp ->next = NULL;
    return newp;
}
Nameval *addfront (Nameval *listp, Nameval *newp){
    newp -> next = listp;
    return newp;
}
Nameval *addend(Nameval *listp, Nameval *newp){
    if(listp ==NULL) return  newp;
    Nameval *p;
    for (p = listp; p->next !=NULL; p = p->next );
    p ->next = newp;
    return listp;
}
int main (void) {
    Nameval *nvlist = NULL;

    nvlist = addend(nvlist, newitem("data1", 6));
    printf("%s %d\n", nvlist->name, nvlist->value);

    Nameval *item = newitem("data2", 33);
    nvlist = addfront(nvlist, item);
    printf("%s %d\n", item->name, item->value);

    Nameval *item2 = newitem("data3", 20);
    //nvlist = addend(nvlist, item2);
    printf("%s %d\n", item2->name, item2->value);

    Nameval *item3 = newitem("data4", 69);
    //nvlist = addfront(nvlist, item3);
    printf("%s %d\n", item3->name, item3->value);

    Nameval *q; //допоміжний вказівник
    q = nvlist;
    while (q->next != NULL) { // поки не дійдемо до кінця списку
        q = q->next; // перейти до наступного елемента
    }
    // тепер q вказує на останній елемент списку
    while (q != NULL) { // поки не дійдемо до початку списку
        printf("%s %d\n", q->name, q->value);
        q = q->next;
    }
    return 0;
}