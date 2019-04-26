//
//  main.cpp
//  homework5
//
//  Created by Mac on 2019/3/15.
//  Copyright © 2019年 Mac. All rights reserved.
//
#include <stdio.h>

#include <stdlib.h>

int main(void)

{
    
    int ha,m1,s1,h2,m2,s2,fhour,finmim,finsec,tm;
    
    printf("請輸入起始時間：");
    
    scanf("%d:%d:%d", &ha, &m1, &s1);
    
    printf("請輸入結束時間：");
    
    scanf("%d:%d:%d", &h2, &m2, &s2);
    
    fhour = ha-h2;
    
    finmim  = m1-m2;
    
    finsec  = s1-s2;
    
    fhour = abs(fhour);
    
    finmim = abs(finmim);
    
    finsec = abs(finsec);
    
    tm = fhour * 3600 + finmim * 60 + finsec;
    
    printf("\n兩個時間間隔秒數為: %d\n", tm);
    
    system("pause");
    
    return 0;
    
}
