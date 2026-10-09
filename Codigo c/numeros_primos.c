#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int main(){
    int b;
    bool ver;
    printf("digite o limite superior\n");
    scanf("%d",&b);
    system("clear||cls");
    if(b>2)printf("2\n");
    if(b>3)printf("3\n");
    for(int i=5;i<=b;i+=6){
        ver=true;
        for(int j=5;j*j<=i;j+=6){
            if(i%j==0){
                j=i;
                ver=false;
            }
        }
        for(int j=7;j*j<=i;j+=6){
            if(i%j==0){
                j=i;
                ver=false;
            }
        }
        if(ver){
            printf("%d\n",i);            
        }
        if(i+2<=b){
            ver=true;
            for(int j=5;j*j<=i;j+=6){
                if(i%j==0){
                    j=i;
                    ver=false;
                }
            }
            for(int j=7;j*j<=i;j+=6){
                if(i%j==0){
                    j=i;
                    ver=false;
                }
            }
            if(ver){
                printf("%d\n",i+2);            
            }
        }
    }
    return 0;
}
//vet[i]=vet2[aux++];
