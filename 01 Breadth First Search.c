#include<stdio.h>
#define INF 99999

int graph[10][10], s, num, i, j, front = 0, rear = 0;
int visited[10], d, previous[10], distance[10], queue[10], cycle = 0, count = 0;

void enqueue(int data)
{
    queue[rear] = data;
    rear++;
}

int dequeue()
{
    /*int element;
    element = queue[front];
    front++;
    return element;*/
    return queue[front++];
}

int BFS()
{
    int u, v;

    for(u = 0; v < num; u++)
    {
        visited[u] = 0;
        previous[u] = -1;
        distance[u] = INF;
    }
    enqueue(s);
    visited[s] = 1;
    previous[s] = -1;
    distance[s] = 0;

    printf("Visiting Order: ");
    while(rear != front)
    {
        u = dequeue();
        printf("%d ", u);
        count++;
        for(v = 0; v < num; v++)
        {
            if(graph[u][v] == 1)
            {
                if(visited[v] == 0)
                {
                    visited[v] = 1;
                    distance[v] = distance[u] + 1;
                    previous[v] = u;
                    enqueue(v);
                }
                else if(previous[u] != v)
                {
                    cycle = 1;
                    break;
                }
            }
        }
    }
}

int main(void)
{
    printf("Enter number of vertex: ");
    scanf("%d", &num);

    printf("Enter adjacency matrix:\n");
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num; j++)
        {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("The adjacency matrix is:\n");
    for(i = 0; i < num; i++)
    {
        for(j = 0; j < num; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("Enter source vertex:");
    scanf("%d", &s);

    printf("Enter destination vertex:");
    scanf("%d", &d);

    BFS();

    printf("\nShortest Path: %d\n", distance[d]);

    if(cycle == 1)
    {
        printf("Cycle Exit\n");
    }
    else if(cycle == 0)
    {
        printf("Cycle not found!\n");
    }
    if(count == num)
    {
        printf("Connected Graph!\n\n");
    }
    else if(count != num)
    {
        printf("Not Connected Graph!\n\n");
    }
}
