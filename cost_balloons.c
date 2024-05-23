#include<stdio.h>

int main() {
    int i, j, t, g, p, n[100][100], nn;
    scanf("%d\n", &t);
    while(t--) {

        int count=0,countt=0;
        scanf("%d %d", &g, &p);
        scanf("%d", &nn);


        for (i = 0; i < nn; i++) {

            for (j = 0; j < 2; j++) {

                scanf("%d", &n[i][j]);

            }

        }
        for (i = 0; i < nn; i++) {

            if (n[i][0] == 1) {
                count++;
            }
        }

        for (i = 0; i < nn; i++) {


            if (n[i][1] == 1) {
                countt++;
            }
        }


        if (g > p) {
            if (count > countt) {

                count = count * p;
                countt = countt * g;
            } else {
                countt = countt * p;
                count = count * g;
            }

        } else {
            if (count > countt) {

                count = count * g;
                countt = countt * p;
            } else {
                countt = countt * g;
                count = count * p;
            }
        }

        printf("%d", count + countt);
    printf("\n");
    }
    return 0;
}