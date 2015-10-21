//
//  main.c
//  ZOJ3809
//
//  Created by frank on 15-10-21.
//  Copyright (c) 2015年 frank. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int T,n,sum,i,j;
    int a[8845] = {0};
    scanf("%d",&T);
    while(T-->0){
        sum = 0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        a[n]=8845;
        for(j=1;j<=n-1;j++){
            if (a[j]>a[j-1]&&a[j]>a[j+1]) {
                sum++;
            }
            
        }
        printf("%d\n",sum);
    }
    return 0;
}
