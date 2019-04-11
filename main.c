 #include <stdio.h>

int cypher;

int main() {
    printf("Input 1 for Rotaion or 2 for Substitution\n");
    scanf("%d", &cypher);
    switch(cypher) { //switch between cypher used
        case 1: printf("Rotation chosen\n");
            break;
        case 2: printf("Substitution chosen\n");
            break;
        default: printf("error");
    }
    return 0;
}
