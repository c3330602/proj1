 #include <stdio.h>

int cypher, cryption;

int main() {
    printf("Input 1 for Rotaion or 2 for Substitution\n");
    scanf("%d", &cypher);
    switch(cypher) { //switch between cypher used
        case 1: printf("Rotation chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen");
                        break;
                    case 2: printf("Decryption chosen");
                        break;
                    default: printf("error");
                }
            break;
        case 2: printf("Substitution chosen\n");
                printf("Input 1 for Encryption or 2 for Decryption\n");
                scanf("%d", &cryption);
                switch(cryption) { // switch between decryption and encryption
                    case 1: printf("Encryption chosen");
                        break;
                    case 2: printf("Decryption chosen");
                        break;
                    default: printf("error");
                }
            break;
        default: printf("error");
    }
    return 0;
}
