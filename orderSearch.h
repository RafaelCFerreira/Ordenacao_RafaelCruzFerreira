#include<stdio.h>
#include<string.h>

char insertSort(char name[][10], int size){
    char temp[10];
    int x, y;
    for(x =0; x<size; x++){
        for (y = x+1; y<size;y++){
            if(strcmp(name[x], name[y])>0){
                strcpy(temp, name[x]);
                strcpy(name[x], name[y]);
                strcpy(name[y], temp);
            }
        }
    }
}

int binarySearch(int size,char names[][10],char search[10]){
    int init,mid,end;
    init=0;
    end = size-1;
    while(init>=end){
        mid = (init+end)/2;
        if(strcmp(search,names[mid])==0){
            return mid;
        }else{
            if(strcmp(search,names[mid])<0){
                end = mid -1;
            }else{
                init = mid+1;
            }
        }
    }
}