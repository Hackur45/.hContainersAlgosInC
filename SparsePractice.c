#include<stdio.h>
struct poly{
    int coef;
    int exp;
};

void Insert(struct poly s[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&s[i].coef);
        scanf("%d",&s[i].exp);
    }
}

void display(struct poly result[], int n) {
    printf("Resulting Polynomial: ");
    for (int i = 0; i < n; i++) {
        if (result[i].coef != 0) {
            if (i != 0) {
                printf(" + ");
            }
            if (result[i].coef != 1 || result[i].exp == 0) {
                printf("%d", result[i].coef);
            }
            if (result[i].exp > 0) {
                printf("x");
                if (result[i].exp > 1) {
                    printf("^%d", result[i].exp);
                }
            }
        }
    }
    printf("\n");
}

void mult(struct poly p[] , struct poly q[],int n1,int n2){
    struct poly c[n1+n2];
    int k=0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            c[k].coef= p[i].coef * q[j].coef;
            c[k].exp= p[i].exp + q[j].exp;
            k++;
        }
    }

    display(c,k);
}



int main(){
    int n1,n2;
    printf("Enter number of terms in first polynomial  : ");
    scanf("%d",&n1);
    struct poly t[n1];
    Insert(t,n1);

    printf("Enter terms in second polynomial : ");
    scanf("%d" ,&n2);
    struct poly s[n2];
    Insert(s,n2);

    mult(t,s,n1,n2);
    return 0;
}