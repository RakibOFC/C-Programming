#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    int i, j;
    float p, s[n], temp[3];

    for(i = 0; i < n; i++){

        p = (tr[i].a + tr[i].b + tr[i].c)/2;
        s[i] = sqrt(p*(p - tr[i].a)*(p - tr[i].b)*(tr[i].c));
    }
    for(i = 0; i < n; i++){

        for(j = 0; j < n-1; j++){

            if(s[j] > s[j+1]){
                temp[0] = s[j];
                s[j] = s[j+1];
                s[j+1] = temp[0];

                temp[0] = tr[j].a;
                temp[1] = tr[j].b;
                temp[2] = tr[j].c;

                tr[j].a = tr[j+1].a;
                tr[j].b = tr[j+1].b;
                tr[j].c = tr[j+1].c;

                tr[j+1].a = temp[0];
                tr[j+1].b = temp[1];
                tr[j+1].c = temp[2];
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
