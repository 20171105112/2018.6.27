//
//  main.cpp
//  2018.6.27
//
//  Created by 黄宏 on 2018/6/27.
//  Copyright © 2018年 黄宏. All rights reserved.
//


#include <stdio.h>
    int main()
    {
        float score[10];
        int i = 0;
        float max = 0.0, min = 100.0, sum = 0.0;
        printf("输入10个评分:");
        for (; i < 10; ++i)
        {
            scanf("%f", &score[i]); //存入数组
            if (max < score[i])
            {
                max = score[i]; //最大
            }
            if (min > score[i])
            {
                min = score[i]; //最小
            }
        }
        for (i = 0; i < 10; ++i)
        {
            if (score[i] == max || score[i] == min)
                continue;
            sum += score[i];
        }
        printf("最后分数为:%f\n", sum/8.0);
    }
