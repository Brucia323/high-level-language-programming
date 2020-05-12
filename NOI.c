/*由于触犯天神，Sisyphus将要接受惩罚。
宙斯命Sisyphus推一块巨石上长度为L的山坡。Sisyphus匀速向上推的速度为每年v的长度（由于是匀速，故经过1/2年将能向上推v/2的长度）。然而，宙斯并不希望Sisyphus太快到达山顶。宙斯可以施展n个魔法，若宙斯施展第i个魔法(1≤i≤n)，则当Sisyphus第一次到达位置a[i]时，他将会同巨石一起滚落下山底，并从头推起。（滚落的时间忽略不计，即可看做第一次到达位置a[i]后Sisyphus立即从山底重新出发）
例如宙斯施用了a[i]=3与a[i]=5的两个魔法。Sisyphus的速度v=1，山坡的长度L=6，则他推石上山过程如下：
1.用3年走到的位置3.
2.受a[i]=3的魔法影响，回到了山底出发。
3.再用3年走到位置3，然而因为是第二次到达，a[i]=3的魔法不起作用。
4.用2年走到位置5.
5.受a[i]=5的魔法影响，回到了山底出发。
6.用6年从山底走到了山顶。花费的总时间为14年。
现在，宙斯有q个询问。对于第i个询问t[i]，宙斯想知道，他最少需要施展多少个魔法才能使Sisyphus到达山顶所用的年数大于t[i]。*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main(void)
{
    int n, L, v;
    scanf("%d%d%d", &n, &L, &v);
    int a[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), compare);
    double sumtime = 0;
    for (i = 0; i < n; i++)
        sumtime += a[i] * 1.0 / v;
    int q;
    scanf("%d", &q);
    int t[q];
    for (i = 0; i < q; i++)
        scanf("%d", &t[i]);
    for (i = 0; i < q; i++)
    {
        double sum = 0;
        float year = L / v;
        int retry = t[i] - year;
        int j = 0;
        if (t[i] < year)
            printf("0\n");
        else if (sumtime > retry)
        {
            while (retry > sum && j < n)
            {
                j++;
                for (int k = 0; k < j; k++)
                    sum += a[k] / v;
            }
            printf("%d\n", j - 1);
        }
        else
            printf("-1\n");
    }
}