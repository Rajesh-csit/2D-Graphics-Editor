#include <stdio.h>
#include "graphics.h"

void modifyObject()
{
    int x, y, w, h;
    int choice;

    printf("\nArea to erase first");
    printf("\nEnter x y width height: ");
    scanf("%d %d %d %d", &x, &y, &w, &h);

    deleteArea(x, y, w, h);

    printf("\nRedraw Object");
    printf("\n1.Rectangle");
    printf("\n2.Line");
    printf("\n3.Circle");
    printf("\n4.Triangle");
    printf("\nChoice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter x y width height: ");
        scanf("%d %d %d %d", &x, &y, &w, &h);

        drawRectangle(x, y, w, h);
    }
}

int main()
{
    int choice;

    initializeCanvas();

    while(1)
    {
        printf("\n\n===== 2D GRAPHICS EDITOR =====");
        printf("\n1. Draw Rectangle");
        printf("\n2. Draw Line");
        printf("\n3. Draw Circle");
        printf("\n4. Draw Triangle");
        printf("\n5. Delete Area");
        printf("\n6. Modify Object");
        printf("\n7. Display Canvas");
        printf("\n8. Clear Canvas");
        printf("\n9. Exit");

        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                int x, y, w, h;

                printf("Enter x y width height: ");
                scanf("%d %d %d %d",
                      &x, &y, &w, &h);

                drawRectangle(x, y, w, h);
                break;
            }

            case 2:
            {
                int x1, y1, x2, y2;

                printf("Enter x1 y1 x2 y2: ");
                scanf("%d %d %d %d",
                      &x1, &y1, &x2, &y2);

                drawLine(x1, y1, x2, y2);
                break;
            }

            case 3:
            {
                int xc, yc, r;

                printf("Enter center_x center_y radius: ");
                scanf("%d %d %d",
                      &xc, &yc, &r);

                drawCircle(xc, yc, r);
                break;
            }

            case 4:
            {
                int x1,y1,x2,y2,x3,y3;

                printf("Enter x1 y1 x2 y2 x3 y3: ");
                scanf("%d %d %d %d %d %d",
                      &x1,&y1,&x2,&y2,&x3,&y3);

                drawTriangle(x1,y1,x2,y2,x3,y3);
                break;
            }

            case 5:
            {
                int x, y, w, h;

                printf("Enter x y width height: ");
                scanf("%d %d %d %d",
                      &x, &y, &w, &h);

                deleteArea(x, y, w, h);
                break;
            }

            case 6:
                modifyObject();
                break;

            case 7:
                displayCanvas();
                break;

            case 8:
                initializeCanvas();
                printf("\nCanvas Cleared.");
                break;

            case 9:
                printf("\nExiting...\n");
                return 0;

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}
